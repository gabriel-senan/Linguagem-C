// Imprimir os n primerios numeros impares em ordem oposta

#include <stdio.h>

int n, i;
int main(void){
	printf("Deseja imprimir quantos numeros impares em ordem inversa?: ");
	scanf("%i", &n);
	
	for(i=n; i>0; i--)	// La�o de repeti�ao de N at� 1
	printf("O %d numero eh: %d\n", i, 2*i-1);
	return 0;
}
