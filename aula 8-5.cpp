#include <stdio.h>
#include <conio.h>
#include <ctype.h>

	int contador, conta_aprov, conta_rec, conta_invalidos;
	float nota1, nota2, media, media_geral, soma;

main(){
	
	conta_aprov = conta_rec = soma = conta_invalidos;
	
	for(contador = 1; contador <=10; contador++){ 	// Laço de 1 até 10 (10 interções).
			printf("Digite a nota 1: ");
			scanf("%f", &nota1);
			printf("Digite a nota 2: ");
			scanf("%f", &nota2);
			if (nota1 ==0 || nota2 ==0 || nota1 >10 || nota2 >10){
				conta_invalidos++;
				continue; 		// Força uma nova interação e incrementa a variável de controle.
			}
		media = (float)(nota1 + nota2*2) /3;
		printf("Media: %.2f\n\n", media);
		printf("********\n");
		soma +=media;
		(media >6.0) ? conta_aprov++ : conta_rec;
	}
	// Faz as medias considerando apenas as notas válidas
	media_geral = (float)(soma/(contador-conta_invalidos));  	// Faz o desconto das notas invalidas.
	printf("Nro de alunos aprovados: %d\n", conta_aprov);
	printf("Nro de alunos reprovados: %d\n", conta_rec);
	printf("Media geral da turma: %.2f", media_geral);
}

