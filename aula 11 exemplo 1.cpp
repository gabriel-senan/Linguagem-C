#include <stdio.h>
#define TAM_MAX_LIN 5      //Cinco alunos
#define TAM_MAX_COL 5      //Cinco notas

    int lin, col;
    float notas[TAM_MAX_LIN][TAM_MAX_COL], media;

main(){
    //Entrada de dados
    for(lin=0; lin<TAM_MAX_LIN; lin++)      //Controle do aluno
        for(col=0; col<TAM_MAX_COL; col++){         //Entrada de notas (no exemplo 10 notas)
            printf("Informe a nota %d do aluno %d\n", col+1, lin+1);
            scanf("%f", &notas[lin][col]);
        }
    for(lin=0; lin<TAM_MAX_LIN; lin++){         //Passo parra calcular a nota de cada aluno
        media=0;
        for(col=0; col<TAM_MAX_COL; col++)      //Soma todas as notas do aluno
            media+=notas[lin][col];
            printf("A media do aluno %d foi de %.2f\n", lin+1, (float)media/TAM_MAX_COL);
    }
}
