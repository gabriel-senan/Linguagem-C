#include <stdio.h>
#include <time.h>
#include <stdlib.h>

	int nro, nro_usr;

main(){
	srand(time(NULL));	// Semente
	
	// Entrada de dados
	nro = 1+rand()%10;
	printf("	***JOGO DE ADIVINHAR NUMEROS***\n\n");
	printf("Tentativa 1: Digita um numero entre 1 e 10: ");
	scanf("%i", &nro_usr);
	
	// Processamento/ Saida
	if (nro == nro_usr)
		printf("Parabens, vc acertou de primeira!");
	else {
		printf("Tentativa 2: Digita um numero entre 1 e 10: ");
		scanf("%i", &nro_usr);
		if (nro == nro_usr)
		printf("Parabens, vc acertou na segunda!");
		else {
			printf("Tentativa 3: Digita um numero entre 1 e 10: ");
			scanf("%i", &nro_usr);
			if (nro == nro_usr)
			printf("Voce conseguiu na ultima tentativa");
			else
			printf("Voce nao conseguiu, o numero que eu pensei foi, %i\n", nro);
			printf("TENTE NOVAMENTE");
		}
	}
	
	

}
