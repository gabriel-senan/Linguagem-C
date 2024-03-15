/*
c) Crie um programa que leia uma matriz 30x2. As linhas representam os dias e as colunas 
as entradas (receitas) e despesas (saidas) e calcule o saldo atual.
*/

#include <stdio.h> 
	float fluxo[30][2]; 		//Coluna 0 = entrada e coluna 1 = saida e linhas = 30 dias
	float saldo;
	int i, j;
	
main(){
	printf("Digite os valores para entradas e saidas do mes (30 dias\n\n)");
	
	for(i=0; i<30; i++){ 		//intervalo de [0, 29] 30x
		printf("Digite o valor de entrada e saida para o dia %i: ", i+1);
		scanf("%f %f", &fluxo[i][0], &fluxo[i][1]);
		printf("==> %.2f\n", fluxo[i][0]-fluxo[i][1]);
		saldo+=(fluxo[i][0]-fluxo[i][1]);
	}
	printf("\n\nO saldo do mes doi %.2f", saldo);
	
	
}
