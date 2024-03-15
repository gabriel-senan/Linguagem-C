#include <stdio.h>
#include <locale.h>
#include <conio.h>
char vogal;

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("	***DESCUBRA SE SUA LETRA É UMA VOGAL!***\n");
	
	printf("Digite uma letra:");
	//scanf("%c", &vogal);	// Tradicional
	vogal = getche();		// Não precisa de enter
	
	if (vogal == 'a' || vogal == 'e' || vogal == 'i' || vogal == 'o' || vogal == 'u') 
		printf("\nEssa letra é uma vogal!");
		
		else 
		printf("\nEssa letra não é uma vogal");
		
	
return 0;	
}
