#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int nota;
	char conceito;
	printf("Informe a nota final: ");
	scanf("%d", &nota);
	switch (nota){
			case 0: case 1: case 2: case 3: case 4: case 5: case 6 :
				printf("\n Conceito D!");
				break;
			case 7:
				printf("\n Conceito C!");
				break;
			case 8:
				printf("\n Conceito B!");
				break;
			case 9: case 10:
				printf("\n Conceito A!");
				break;
			default:
				printf("\n Valor inválido!");
			
			}
	
	
}
