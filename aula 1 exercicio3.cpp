#include <stdio.h>

char seu_nome[15]; //nome do usu�rio
int sua_idade; //idade do usu�rio
float seu_peso; //peso do usu�rio

main(){
	printf("Ola porra, vamos come�ar essa brincadeira!!!! hahahah");
	printf("Qual o seu nome?");
	scanf("%s", &seu_nome);
	printf("Qual a sua idade, caralho???");
	scanf("%i", &sua_idade);
	printf("Quanto voce esta pesando atualmente?");
	scanf("%f", &seu_peso);
	printf("Satisfacao cario, muito prazer em te conhecer %s Que legal saber que voce tem %i mas voce esta precisando comer mais, so esta pesando %f", seu_nome, sua_idade, seu_peso);
	
	return 0;
}
