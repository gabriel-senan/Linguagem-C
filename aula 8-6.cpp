// Imprime a tabuada

#include <stdio.h>

	int nro, linha;
	
main(){
	for (nro =1; nro <10; nro++){ 		// La�o de controle de n�meros de 1 at� 09.
		printf("Tabuada do %d\n\n", nro);
		for (linha =1; linha <11; linha++)
		printf("%d x %d = %d\n", nro, linha, nro*linha);
		printf("*************\n\n");
	}
}
