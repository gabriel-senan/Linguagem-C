#include <stdio.h>
#include <locale.h>

	char nome[15];	// At� 15 caracteres
	int idade;		// Guarda a idade
int main(){
	setlocale (LC_ALL, "PORTUGUESE");	// Estabelece o idioma como Portugu�s
	
	printf("*** SAIBA SE VOC� J� PODE! ***\n");
	
	printf(" Digite o seu nome: ");
	scanf("%s", &nome);		// Faz a captura do que o usu�rio digita
	
	printf("\nMuito prazer em te conhecer, %s! \n", &nome);
	
	printf("\nDigite a sua idade: ");
	scanf("%d", &idade);
	
	printf("\nQue bom saber que voc� j� est� com %d anos", idade);
	
	if (idade <=15 )
		printf("\n\nVoc� n�o est� apto a votar!!");
	else
		if (idade == 16 || idade == 17 || idade == 70)
			printf("\n\nSeu voto � facultativo!");
		else
		printf("\n\nVoc� est� apto para votar!!");
	if (idade == 18)
	printf("\n\nE PODE DAR ENTRADA EM SUA CNH!");
				
return 0;
}
