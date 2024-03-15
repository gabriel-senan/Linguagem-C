// A) Dado um numero de 3 algarismos, inverter a ordem de seus algarismos. Os tres algarismos do numero dado devem ser diferentes de zero.
#include <stdio.h>

main(){
	int numero, digito1, digito2, digito3;
	
	printf("Digite um numero com tres algarismos:");
	scanf("%i", &numero);
	
	digito1 =  numero / 100;
	digito2 = (numero / 10 ) %10;
	digito3 = numero % 10;
	
	return 0;
}
