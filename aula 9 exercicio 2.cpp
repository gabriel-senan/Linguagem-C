/*
2) Escrever um programa que leia um numero inteiro ate que a soma de todos os numeros digitados for maior que 500.
*/

#include <stdio.h>


    int nro, soma;
main(){
    do{
        // Entrada
        printf("Digite um numero inteiro, positivo ou negativo: ");
        scanf("%i", &nro);
        //processamento
        soma+=nro;
    } while (soma<=500);
    // Saída
    printf("\n\nA soma dos numeros digitados foi %i", soma);
}