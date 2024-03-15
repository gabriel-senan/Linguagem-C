// MESMO PROGRAMA COM A FUNÇÃO DE DEIXAR AS RESPOSTAS EM MAIUSCULAS

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	float vLanche, vRefri, vFinal, vDesc;
	int qLanche, qRefri;
	char resp;
	
	printf("\n\n Digite a quantidade de laches?: ");
	scanf("%i", &qLanche);
	
	printf("\n\n Qual o valor do lache? R$ ");
	scanf("%f", &vLanche); 
	
	printf("\n\n Deseja adicionar refrigerante? (S | N): ");
	resp = getche();
	resp = toupper(resp);		// Converte o caractere digitado para maíusculo.
	
	if (resp == 'S'){
		printf("\n Informe o valor do Refrigerante: ");
		scanf("%f", &vRefri);
		printf("\n Informe a quantidade de Refrigerante: ");
		scanf("%d", &qRefri);
		vFinal = vLanche * qLanche + vRefri * qRefri;
	}
	else
		if (resp == 'N')
		vFinal = vLanche * qLanche;
	if (vFinal > 200.0){
		printf("\n\n ***Você ganhou desconto de 10%!*** \n\n");
		vDesc = vFinal * 0.1;
		vFinal -= vDesc;
	}
	
}
