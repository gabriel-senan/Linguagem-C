 /*b) Dados o primeiro termo e a raz�o de uma progress�o aritimetica, determinar a soma dos seus primeiros CINCO termos, sabendo que: 
 an = a1 + (n - 1)* r 
 Sn = ((a1+an)*n)/2
 */
 #include <stdio.h>
 int a1;		// Armazena o valor do primeiro elemento
 int r;			// Armazena o valor da rez�o de uma PA 
 int An;		// Armazena o valor do elemento n da PA 
 int Sn;		// Armazena o valor da soma dos n elementos de uma PA
 int n;			// Armazena o nro de elementos de uma PA
 
 main(){
	/* Entrada de dados, � necess�rio as seguintes informa��es para a realiza��o do c�lculo do Sn: a1, n e r */
 	printf("Informe o valor do primeiro elemento da PA: ");
 	scanf("%i", &a1);
 	printf("Informe o numero de termos da PA: ");
 	scanf("%i", &n);
 	printf("Informe a razao da PA: ");
 	scanf("%i", &r);
 	// Processamento, da posse das infos calcular An e Sn conforme as f�rmulas
 	An = a1 + (n+1) * r;
 	Sn = ((a1+An)*n/2);
 	// Sa�da
 	printf("O valor da soma do PA de %i termos e razao %i eh %i", n, r, Sn);
 }
