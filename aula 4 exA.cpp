/*EXERCICIO*/
#include <stdio.h>
	int nro, ult_dig; //variaveis usadas para essa resolução.

main(){
/* a) Dado um numero inteiro obter o ultimo algarismo desse numero: Ex. se digitado "799" escrever apenas o "9".*/
	printf("Escreva um numero:");
	scanf("%i", &nro);
	ult_dig = nro%10;
	printf("O ultimo digito do numero %i e: %i", nro, ult_dig);
	
	
}
