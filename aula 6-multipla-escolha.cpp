#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float valor1, valor2, resultado;
	char op;
	printf("Informe o valor 1: ");
	scanf("%f", &valor1);
	printf("\n Informe o valor 2: ");
	scanf("%f", &valor2);
	printf("\n Informe qual operação você quer fazer, (+ |- | *| /): ");
	op = getche();
	switch (op){
		case '+':
			resultado = valor1 + valor2;
			break;
		case '-':
			resultado = valor1 - valor2;
			break;
		case '*':
			resultado = valor1 * valor2;
			break;
		case '/':
			resultado = valor1 / valor2;
			break;
		default:
			printf("\n Operação inválida!");
		}
	printf("\n O seu resultado é: %2.f", resultado);
	
}
