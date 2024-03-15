#include <stdio.h>
  
struct
	registroAluno{ 		//Tipo definido
		int id;
		char nome[50];
		char endereco[50];
	};
	registroAluno aluno; 		//cria-se uma variavel, aluno. do tipo registro aluno
main(){
	scanf("%d", &aluno.id);
	scanf("%s", &aluno.nome); 		//Qual o problema do scanf no tratamento de string? Não armazena depois de um espaco
	scanf("%s", aluno.endereco);
	
	printf("Id do Aluno......: %i\n", aluno.id);
	printf("Nome do aluno....: %s\n", aluno.nome);
	printf("Endereco do aluno: %s\n", aluno.endereco);
	
}
