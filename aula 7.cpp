// Gerando números aletatórios com a função rand()
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	
	srand(time(NULL));		// Semente
	/*
	printf("%i\n", rand() % 6 );		// Intervalos de [0, 5]
	printf("%i\n", rand() % 6 );
	printf("%i\n", rand() % 6 );
	*/
	printf("%i\n", (1+rand()) %6 );			// [0, 5 em condições normais] gera um número aleatório entre [1, 6]
	printf("%i\n", (10+rand()) %100 );		// [0, 99 em condições normais] gera um número aleatório entre [10, 109]
	printf("%i\n", (10+rand()) %101 );		// [0, 100 em condições normais] gera um número aleatório entre [10, 100]
	printf("%i\n", (rand()% 21-10));		// [0, 20] gera um número aleatório entre [-10, 10]
	
return 0;
}
