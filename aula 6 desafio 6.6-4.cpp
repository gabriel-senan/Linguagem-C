#include <stdio.h>
#include <locale.h>

int numero1, numero2, resultado;
char op;

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("	***CALCULADORA IF***");
	printf("\nQual opera��o deseja fazer? (+ | - | * | /):");
	scanf(" %c", &op);
	
	printf("\nDigite o primeiro valor:");
	scanf("%i", &numero1);
	
	printf("\nDigite o segundo valor:");
	scanf("%i", &numero2);
	
	if (op == '+'){
		resultado = numero1 + numero2;
		printf("\nO resultado �: %d", resultado);
	}
	else if (op == '-'){
		resultado = numero1 - numero2;
		printf("\nO resultado �: %d", resultado);
	}
	else if (op == '*'){
		resultado = numero1 * numero2;
		printf("\nO resultado �: %d", resultado);
	}
	else if (op == '/') {
        if (numero2 != 0) {
            resultado = numero1 / numero2;
            printf("\nO resultado �: %d\n", resultado);
        } else {
            printf("\nN�o � poss�vel dividir por zero.\n");
        }
    } else {
        printf("\nOp��o inv�lida!!\n");
    }

return 0;
}
