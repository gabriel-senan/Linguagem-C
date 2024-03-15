/*
b) Escrever um programa que leia uma matriz 4x4
e calcule a soma de todos os elementos, a soma dos elementos da diagonal principal.
*/

#include <stdio.h>

	int mat[4][4], soma, soma_diag, i, j;
	
main(){
	printf("Digite os valores para uma matriz 4x4\n\n");
		
	for(i=0; i<4; i++) 		//intervalo de [0, 3] 4x
		for(j=0; j<4; j++){ 		//intervalo de [0, 3] 4x		
			printf("Digite o elemento (%i, %i) da matriz: ", i, j);
			scanf("%i", &mat[i][j]);
			soma+=mat[i][j];
			if (i==j) 		//Diagonal
			soma_diag+=mat[i][j];
		}
	printf("\n\nA soma dos nros da matriz 4x4 doi %i", soma);
	printf("\nA soma dos nros da diagonal principal foi de %i", soma_diag);
}
