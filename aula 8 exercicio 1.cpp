#include <stdio.h>
#include <ctype.h>

int contador, conta_aprov, conta_rec, conta_invalidos;
float nota1, nota2, media, media_geral, soma;
float menor, maior;

int main() {
    conta_aprov = conta_rec = soma = conta_invalidos = 0;
    maior = 0, menor = 10;

    for (contador=1; contador<=10;contador++) {  // Laço de 1 até 10 (10 interações)
        // Entrada de dados
        printf("Digite a nota 1: ");
        scanf("%f", &nota1);

        // Solicitar a segunda nota
        printf("Digite a nota 2: ");
        scanf("%f", &nota2);

        // Processamento e saída
        if (nota1 == 0 || nota2 == 0 || nota1 > 10 || nota2 > 10 || nota1 < 0 || nota2 < 0) {
            conta_invalidos++;
            continue;  // Força uma nova interação e incrementa a variável de controle
        }

        media = (float)(nota1 + nota2 * 2) / 3;
        printf("Media: %.2f\n", media);
        printf("    ********    \n");
        soma += media;
        (media > 6.0) ? conta_aprov++ : conta_rec++;

        if (media < menor)
            menor = media;

        if (media > maior)
            maior = media;
    }

    // Saída
    // Faz média considerando somente as notas válidas
    media_geral = (float)(soma / (contador - conta_invalidos));
    printf("\nNumeros de alunos aprovados: %d\n", conta_aprov);
    printf("Numeros de alunos reprovados: %d\n", conta_rec);
    printf("Media geral da turma: %.2f\n", media_geral);
    printf("Menor media da turma: %.2f\n", menor);
    printf("Maior media da turma: %.2f\n", maior);

    return 0;
}

