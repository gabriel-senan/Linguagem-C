#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");
    srand(time(NULL));

    int pc, usr;
    char resultado;

    printf("*****JOQUEMP� DO PROGRAMADOR*****\n\n");
    printf("Fa�a a sua escolha... \n(1) PEDRA | (2) PAPEL | (3) TESOURA: ");
    scanf("%i", &usr);

    pc = 1 + rand() % 3; // Gera um n�mero aleat�rio entre 1 e 3

    if (usr < 1 || usr > 3) {
        printf("Escolha inv�lida. Por favor, escolha 1 (PEDRA), 2 (PAPEL) ou 3 (TESOURA).\n");
        return 1;
    }

    printf("Escolha do computador: %i\n", pc);

    if (usr == pc) {
        resultado = 'E';
        printf("Empate!\n");
    } else if ((usr == 1 && pc == 3) || (usr == 2 && pc == 1) || (usr == 3 && pc == 2)) {
        resultado = 'U';
        printf("Voc� ganhou!\n");
    } else {
        resultado = 'C';
        printf("O computador ganhou!\n");
    }

    if (resultado == 'U') {
        printf("Voc� escolheu ");
    } else {
        printf("O computador escolheu ");
    }

    if (usr == 1) {
        printf("PEDRA.\n");
    } else if (usr == 2) {
        printf("PAPEL.\n");
    } else {
        printf("TESOURA.\n");
    }

    return 0;
}

