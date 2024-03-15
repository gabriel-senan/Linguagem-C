/* Faça um algoritimo que:
i) Obtenha o valor para a variavel HT (horas trabalhadas no mes).		OK
ii) Obtenha o valor para a variavel VH (valor hora trabalhadas).		OK
iii) Obtenha o valor para a variavel PD (percententual de desconto).	OK	
iv) Calcule o salario bruto: SB = HT * VH.								OK
v) Calcule o total de desconto: TD = (PD/100)*SB.						OK
vi) Calcule o salario liquido: SL = SB - TD.							OK
vii) Apresente os valores de: horas trabalhadas, salario bruto, deconto e salario liquido. */		

#include <stdio.h>
	float h_trab, vlr_hora, perc_desc;		// Variaveis de entrada
	float sal_bruto, vlr_desc, sal_liq;		// Variaveis de processamento
main(){
	// Entrada de dados
	printf("Informe o numero de horas trabalhadas: ");
	scanf("%f", &h_trab);
	printf("Qual o valor da hora trabalhada?: ");
	scanf("%f", &vlr_hora);
	printf("Qual o percentual de desconto?: ");
	scanf("%f", &perc_desc);
	// Processamento - Calculo dos valores conforme formulas
	sal_bruto = h_trab * vlr_hora;
	vlr_desc = sal_bruto * (perc_desc/100);
	sal_liq = sal_bruto - vlr_desc;
	// Saida
	printf("Voce teve %.2f horas trabalhadas, com o slario bruto de RS %.2f, e o seu desconto foi de RS %.2f.\n Sendo assim seu salario liquido eh de RS %.2f", h_trab, sal_bruto, vlr_desc, sal_liq);
	
}

