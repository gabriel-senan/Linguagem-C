// ESTRUTURA CONDICIONAL ENCADEADA

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float vLanche, vRefri, vFinal, vDesc;
	int qLanche, qRefri;
	char resp;
	
	printf("\n\nDigite a quantidade de laches?: ");
	scanf("%i", &qLanche);
	
	printf("\n\nQual o valor do lache?\n");
	scanf("%f", &vLanche); 
	
	printf("\n\nAdicona refrigerante? (S|N):");
	scanf(" %c", &resp);
	
	
	if (resp == 's' || resp == 'S'){
		printf("\n\nInforme o valor do refrigente:");
		scanf("%f", &vRefri);
		printf("\n\nQual a quantidade de refrigerante?:");
		scanf("%d", &qRefri);
		vFinal = float(vLanche*qLanche + vRefri*qRefri);
	}
	else 
		if (resp == 'n' || resp == 'N')
			vFinal = float (vLanche*qLanche);
	if (vFinal > 20.0){
		printf("*** Você ganhou desconto de 10%% ***");
		vDesc = vFinal * 0.1;
		vFinal -= vDesc;
	}
	printf("\n\nO valor final é de R$ %.2f", vFinal);
	
return 0;
}
