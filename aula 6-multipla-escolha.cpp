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
	printf("\n Informe qual opera��o voc� quer fazer, (+ |- | *| /): ");
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
			printf("\n Opera��o inv�lida!");
		}
	printf("\n O seu resultado �: %2.f", resultado);
	
}
