#include <stdio.h>

int i;
float notas[10], media_geral, soma_notas;

main(){
    soma_notas=0;
    // Entrada de dados
    for (i=0; i<10; i++) {  // Intervalo de [0 até 9] ou seja, 10 intereções
        printf("Informe as notas: ");
        scanf("%f", &notas[i]);
        soma_notas+=notas[i];
    }
    // Processamento de dados
    media_geral = (float) soma_notas / 10;
    printf("\nMedia geral da turma foi %f\n\n", media_geral);
    for (i=0; i<10; i++)
    if (notas [i]>media_geral)
        printf("Nota doa alunode indice %d = %f foi maior que a media da turma \n", i, notas[i]);
}