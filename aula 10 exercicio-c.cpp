/*
Escrever um programa que leia um vetor de números inteiros positivos e após imprima o maior
valor positivo dentro do vetor e sua posição.
*/

#include <stdio.h>
    int i, maior, ind_maior;
    int nros[10];

main(){
    // Entrada de dados
    for(i=0; i<10; i++){    // Intervalo [0, 9] 10x
        printf("Informe o numero:");
        scanf("%i", &nros[i]);
    }
    // Processamento
    maior=0;
    for(i=0; i<10; i++){    // Intervalo [0, 9] 10x
        if(nros[i]>maior){
            maior=nros[i];
            ind_maior=i;
        }
    }
    // Saida
    printf("\nMostrando o maior numero entre todos do vetor\n");
    printf("\nO numero foi \t%i e seu indice foi \t%i", maior, ind_maior);

}