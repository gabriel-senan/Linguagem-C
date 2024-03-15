#include <stdio.h>
char nome_aluno[50];
float nota1, nota2;

main(){

printf("Cálculo da Media Final. Informe o Nome e notas do aluno com precisao de 0,1 (1 decimo). P.e. 5.5; 6.5; 7.1 \n\n\n");
printf("Informe o Nome...................: ");
scanf("%s", nome_aluno);
printf("Informe a Nota 1.................: ");
scanf("%f", &nota1);
printf("Informe a Nota 2.................: ");
scanf("%f", &nota2);
printf("A Media final do aluno %s e.....: %f", nome_aluno, (nota1 + nota2)/2);

return 0;
}

