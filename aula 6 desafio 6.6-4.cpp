#include <stdio.h>
#include <locale.h>

int numero1, numero2, resultado;
char op;

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("	***CALCULADORA IF***");
	printf("\nQual operação deseja fazer? (+ | - | * | /):");
	scanf(" %c", &op);
	
	printf("\nDigite o primeiro valor:");
	scanf("%i", &numero1);
	
	printf("\nDigite o segundo valor:");
	scanf("%i", &numero2);
	
	if (op == '+'){
		resultado = numero1 + numero2;
		printf("\nO resultado é: %d", resultado);
	}
	else if (op == '-'){
		resultado = numero1 - numero2;
		printf("\nO resultado é: %d", resultado);
	}
	else if (op == '*'){
		resultado = numero1 * numero2;
		printf("\nO resultado é: %d", resultado);
	}
	else if (op == '/') {
        if (numero2 != 0) {
            resultado = numero1 / numero2;
            printf("\nO resultado é: %d\n", resultado);
        } else {
            printf("\nNão é possível dividir por zero.\n");
        }
    } else {
        printf("\nOpção inválida!!\n");
    }

return 0;
}
