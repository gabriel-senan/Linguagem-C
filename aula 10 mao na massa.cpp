/*
Ler uma string de tamanho 100 e contar quantas vogais existem.
O programa deve mostrar uma saida como segue:
Vogal A:    01
Vogal E:    03
Vogal I:    01
Vogal O:    00
Vogal U:    00
            --
Total:      05

Dica: Usar FOR, ler até encontrar "\0", usar toupper da biblioteca ctype.h e "\t" no printf para tabulações.

EX.: for (caractere=0; texto[caractere]!=\0; caractere++) ... 

*/

    #include <stdio.h>
    #include <ctype.h>

    char texto[100];           // VETOR Recebe string de até 100 caracteres
    int caracter, cont_A, cont_E, cont_I, cont_O, cont_U;

main(){
    // Entrada de dados
    printf("Digite o texto: ");
    fflush(stdin);
    gets(texto);

    // Processamento
    for (caracter=0; texto[caracter]!='\0'; caracter++){
        if (toupper(texto[caracter])=='A')
        cont_A++;
        if (toupper(texto[caracter])=='E')
        cont_E++;
        if (toupper(texto[caracter])=='I')
        cont_I++;
        if (toupper(texto[caracter])=='O')
        cont_O++;
        if (toupper(texto[caracter])=='U')
        cont_U++;
    }
    // Saida
    printf("Vogal A: \t %i\n", cont_A);
    printf("Vogal E: \t %i\n", cont_E);
    printf("Vogal I: \t %i\n", cont_I);
    printf("Vogal O: \t %i\n", cont_O);
    printf("Vogal U: \t %i\n", cont_U);
    printf("         \t --\n");
    printf("Total..: \t %i", cont_A+cont_E+cont_I+cont_O+cont_U);
}