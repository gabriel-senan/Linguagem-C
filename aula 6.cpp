// ESTRUTURA CONDICIONAL, IF ELSE
#include <stdio.h>
#include <locale.h>
	int idade;
main(){
	setlocale(LC_ALL, "PORTUGUESE"); // Define os acentos da linguagem.
	printf("informe a sua idade: ");
	scanf("%d", &idade);
	if (idade<=15)
		printf("\nN�o vota!");
	else 
		if (idade == 16 || idade == 17 || idade > 70)
			printf("\n\nVoto facultativo");
		else
			printf("\nVoto obrigat�rio!!!!");
	printf("\n\nO voto � um direito do cidad�o!!! Escolha bem nas pr�ximas elei��es, seu porra!!");
	
	

}
