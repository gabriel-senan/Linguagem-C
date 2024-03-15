#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int x, y, resultado;
	printf("Informe o valor de X: \n");
	scanf("%d", &x);
	printf("Informe o valor de Y: \n");
	scanf("%d", &y);
	resultado = (x > y)	? x : x+y;
	printf("O resultado é %d: \n", resultado);	
	
}
