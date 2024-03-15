/*
Escreva um programa que leia um vetor de 10 numeros quaisquer e apos imprima todos os valores iguais ou maiores a 10 e suas respectivas posiçoes
no vetor
*/

#include <stdio.h>
    int i;
    int nros[10];
main(){
    // Entrada de dados
    for(i=0; i<10; i++){    // Intervalo [0, 9] 10x
        printf("Informe o numero: ");
        scanf("%i", &nros[i]);
    }
    // Processamento de dados
    printf("\n\nMostrando os numeros digitados maiores que 10 e sua posicao (indice)\n\n");
    for(i=0; i<10; i++)     // Intervalo [0, 9] 10x
        if(nros[i]>=10)
            printf("Indice %i = %i\n", i, nros[i]);

    
    return 0;
}
