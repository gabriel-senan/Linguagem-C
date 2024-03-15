/*
Escrever um programa que leia um vetor de números inteiros positivos e negativos e após
imprima quantos números negativos e positivos existem dentro do vetor.
*/

#include <stdio.h>

    int i, conta_negativo, conta_positivo;
    int nros[10];

main(){
    // Entrada de dados
    for(i=0; i<10; i++){    // Intervalo [0, 9] 10x
        printf("Digite numeros negativos ou positivos: ");
        scanf("%i", &nros[i]);
    }     
    // Processamento
    for(i=0; i<10; i++){    // Intervalo [0, 9] 10x
        if(nros[i]>0)
            conta_positivo++;
        if(nros[i]<0)
            conta_negativo++;
    }
    // Saida
    printf("\nMostrando os numeros digitados, positivos e negativos\n\n");
    printf("\nTotal de numeros positivos: \t %i", conta_positivo);
    printf("\nTotal de numeros negativos: \t %i", conta_negativo);


    return 0;
}
