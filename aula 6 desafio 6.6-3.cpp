#include <stdio.h>
#include <locale.h>
#include <conio.h>
char vogal;

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("	***DESCUBRA SE SUA LETRA � UMA VOGAL!***\n");
	
	printf("Digite uma letra:");
	//scanf("%c", &vogal);	// Tradicional
	vogal = getche();		// N�o precisa de enter
	
	if (vogal == 'a' || vogal == 'e' || vogal == 'i' || vogal == 'o' || vogal == 'u') 
		printf("\nEssa letra � uma vogal!");
		
		else 
		printf("\nEssa letra n�o � uma vogal");
		
	
return 0;	
}
