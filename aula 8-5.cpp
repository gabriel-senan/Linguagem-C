#include <stdio.h>
#include <conio.h>
#include <ctype.h>

	int contador, conta_aprov, conta_rec, conta_invalidos;
	float nota1, nota2, media, media_geral, soma;

main(){
	
	conta_aprov = conta_rec = soma = conta_invalidos;
	
	for(contador = 1; contador <=10; contador++){ 	// La�o de 1 at� 10 (10 inter��es).
			printf("Digite a nota 1: ");
			scanf("%f", &nota1);
			printf("Digite a nota 2: ");
			scanf("%f", &nota2);
			if (nota1 ==0 || nota2 ==0 || nota1 >10 || nota2 >10){
				conta_invalidos++;
				continue; 		// For�a uma nova intera��o e incrementa a vari�vel de controle.
			}
		media = (float)(nota1 + nota2*2) /3;
		printf("Media: %.2f\n\n", media);
		printf("********\n");
		soma +=media;
		(media >6.0) ? conta_aprov++ : conta_rec;
	}
	// Faz as medias considerando apenas as notas v�lidas
	media_geral = (float)(soma/(contador-conta_invalidos));  	// Faz o desconto das notas invalidas.
	printf("Nro de alunos aprovados: %d\n", conta_aprov);
	printf("Nro de alunos reprovados: %d\n", conta_rec);
	printf("Media geral da turma: %.2f", media_geral);
}

