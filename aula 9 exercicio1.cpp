/*
1) escrever um programa que leia o nome, sexo e altura ate que o usuario deseje sair.
Após fazer resumo com quantidades de pessoas do sexo masculino e feminino, bem como as médias das alturas para cada sexo.
*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

	char nome[50], sexo;
    float altura, soma_alt_masc, soma_alt_fem;
    int cont_masc, cont_fem;

main(){
    do{
    // Entrada de dados
    printf("Digite o sexo (M ou F): ");
    scanf("%c", &sexo);
    printf("Digite a altura em m: ");
    scanf("%f", &altura);
    printf("Digite o nome: ");
    fflush(stdin);
    gets(nome);
    sexo=toupper(sexo);
    // Processamento
    if (sexo=='M') {
        cont_masc++;
        soma_alt_masc+=altura;
    }
    if (sexo=='F') {
        cont_fem++;
        soma_alt_fem+=altura;
    }
    printf("\n\nDeseja continuar digitando? (S | N)? \n");
    } while(toupper(getch()) =='S');
    // Saída
    printf("\nTotal Masculino: %i", cont_masc);
    printf("\nMedia de altura masculina: %2.f", soma_alt_masc/cont_masc);
    printf("\nTotal feminino: %i", cont_fem);
    printf("\nMedia de altura feminina: %2.f", soma_alt_fem/cont_fem);

}