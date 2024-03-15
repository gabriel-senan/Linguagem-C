#include <stdio.h>

main(){
    // Entrada de dados
    int i, flag, codigo;
    int produtos[10];

    for (i=0; i<10; i++) { // Intervalo de [0 até 9] ou seja, 10 intereções
        printf("Informe o codigo do produto: \n");
        scanf("%d", &produtos[i]);
    }
    // Processamento
    flag=0;      // Utilizado para sinalizar se achou ou não
    printf("Informe o codigo para pesquisa\n");
    scanf("%d", &codigo);
    for (i=0; i<10; i++) {
        if (produtos[i]==codigo) {
            flag=1;
            printf("O codigo foi encontrado\n\n");
        }
        }
        if (flag==0)
        printf("Codigo do produto não encontrado");
}