#include <stdio.h>
struct
	registroAluno{ 		//Tipo definido
		int id;
		char nome[50];
		char endereco[50];
		int nota [3];
	};
	registroAluno aluno[10]; 		//cria-se uma variavel, aluno. do tipo registro aluno com 10 possiveis valores
main(){
	for (int i=0; i<3; i++){
		printf("Digite as informacoes de ID, Nome e Endereco r 3 notas do aluno: ");
		scanf("%d %s %s %i %i %i", &aluno[i].id, aluno[i].nome, aluno[i].endereco, &aluno[i].nota[0], &aluno[i].nota[1], &aluno[i].nota[2]);
	}
	for (int i=0; i<3; i++){
		printf("Aluno %i - %s - %s\n", aluno[i].id, aluno[i].nome, aluno[i].endereco);
	}
	
}
