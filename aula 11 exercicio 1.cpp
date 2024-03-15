/*
a) Escreva um programa que leia uma matriz 3x2 de numeros inteiros e 
calcule a soma de todos os elementos (valores) da matriz
*/

#include <stdio.h>
	int mat[3][2], soma, i, j;
	
main(){
	printf("Digite os valores inteiros para uma matriz 3x2\n\n");
	for(i=0; i<3; i++)
		for(j=0; j<2; j++){
			printf("Digite o elemento (%i, %i) da matriz: ", i, j);
			scanf("%i", &mat[i][j]);
			soma+=mat[i][j]; 		//Acumulador de valor
		}
		printf("\n\nA soma dos nros da matriz 3x2 foi %i", soma);
}
