/*
3) Escrever um programa que leia um salario inicial e faça aumentos sucessivos de 10% ate que o valor do salario atualizado
seja maior que o dobro do salario inicial.
*/

#include <stdio.h>

    float salario_ini, salario_fin;
    int i;

main(){
    // Entrada
    printf("Digite o salario inicial: R$ ");
    scanf("%f", &salario_ini);
    // Processamento
    salario_fin=salario_ini;
    do{
        i++;                    // Incrementa a quantidade de interações
        salario_fin*=1.1;       // mesma coisa que salario_fin = salario_fin * 1.1 (1.1 é a mesma coisa que dizer 10%)
        printf("\nAtualizando 10%% %ix = %.2f", i, salario_fin);        // Colocar duas vezes o "%" para mostrar o o operador
    } while (salario_fin<=salario_ini*2);       // Execute isso enquanto meu salario_fin for igual ou menor que o salario_ini vezes 2
    // Saída
    printf("\n\nO vlaor do salario final eh de: R$ %.2f", salario_fin);
}