#include <stdio.h>
#include <conio.h>
#include <ctype.h>
main(){
	int contador, conta_aprov, conta_rec;
	float nota1, nota2, media, media_geral, soma;
	conta_aprov = conta_rec = soma = 0;
	contador = 1;
	do { 	// La�o de 1 a n (10 intera��es)
		contador++;
		printf("Aluno nro %d: \n", contador);
		printf("Digite a nota 1: ");
		scanf("%f", &nota1);
		printf("Digite a nota 2: ");
		scanf("%f", &nota2);
		media = (float) (nota1 +nota2 * 2) /3;
		printf("Media: %2.f \n\n", media);
		printf("*********************** \n");
		soma += media;
		(media > 6.0) ? conta_aprov++ : conta_rec++;
		printf("\nDeseja continuar? <S | N>\n");
	} while (toupper(getche()) =='S');  	//controle de la�o de repeti��o por contador
	
	media_geral = (float) (soma/ contador);
	printf("Nro de alunos aprovados: %d\n", conta_aprov);
	printf("Nro de alunos reprovados: %d\n", conta_rec);
	printf("Media geral da turma: %2.f\n", media_geral);
}
