#include <stdio.h>
main(){
	int contador, conta_aprov, conta_rec;
	float nota1, nota2, media, media_geral, soma;
	conta_aprov = conta_rec = soma = 0;
	contador = 0;
	while (contador <10) { 	//controle de laço de repetição por contador
		contador++;
		printf("Aluno nro %d: \n", contador);
		printf("Digite a nota 1: \n");
		scanf("%f", &nota1);
		printf("Digite a nota 2: \n");
		scanf("%f", &nota2);
		media = (float) (nota1 +nota2 * 2) /3;
		printf("Media: %2.f \n\n", media);
		printf("***********************");
		soma += media;
		(media > 6.0) ? conta_aprov++ : conta_rec++;
	}
	media_geral = (float) (soma/ contador);
	printf("Nro de alunos aprovados: %d\n", conta_aprov);
	printf("Nro de alunos reprovados: %d\n", conta_rec);
	printf("Media geral da turma: %2.f\n", media_geral);
}
