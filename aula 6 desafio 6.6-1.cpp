#include <stdio.h>
#include <locale.h>


int n1, n2, ma;

main(){ 
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Informe a nota número 1: ");
	scanf("%d", &n1);
	printf("Informe a nota número 2: ");
	scanf("%d", &n2);
	ma = (n1 + n2) / 2;
	if (ma >= 7){
		printf("\n Aluno aprovado!");
	}
	else if (ma < 3){
		printf("\nALuno reprovado!");
	}
	else {
	printf("\nAluno em exame!");
	}
	
	
return 0;
}

