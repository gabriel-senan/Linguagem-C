/*
O sistema deve apresentar ao usu�rio um menu com as seguintes op��es: 1-Incluir; 2-Alterar; 3-
Excluir e 4-Imprimir na tela, o cadastro de N produtos de um determinado departamento de uma
loja. Para o cadastro deve ser utilizado uma estrutura de dados tipo registro com as seguintes
informa��es: C�digo do Produto, Nome do Produto, Valor de Custo, Valor de Venda, Quantidade
em Estoque
*/

#include <stdio.h> 		//Fun��es de I/O print e scanf
#include <conio.h> 		//Fun��o de getche()
#include <ctype.h> 		//Fun��o de toupper()
#include <string.h> 	//Fun��o de strcpy()
#include <locale.h> 	//Fun��o de setlocale()
#include <stdlib.h> 	//Fun��o de system()

struct
	RegProduto {
		int idProduto;
		char nomeProduto[20];
		float custoProduto;
		float vendaProduto;
		int qtdProduto;
	};
	
	RegProduto prod[100];
	
	int op, cod, flag;
	int i, cont;
	float vlrEstoque;
	char resp;
	
main(){
	setlocale(LC_ALL,"PORTUGUESE");
	i=0;
	
	do{
		system("cls"); 		//Limpa toda intera��o
		printf("\n-------MENU-------\n");
		printf("1 - Para Incluir Produto\n");
		printf("2 - Para Alterar Produto\n");
		printf("3 - Para Excluir Produto\n");
		printf("4 - Para Mostrar na tela os Produto\n");
		printf("5 - Para Exibir o Relat�riodo custo do Estoque\n");
		printf("6 - Para Sair do programa\n");
	
		scanf("%d", &op); 		//Escolhe a op��o do menu
		
		switch (op) {
			case 1: 		//Op��o 1 do menu, incluir produto
				if (i>99){
					printf("N�mero de produtos esgotados! Cadastro no m�ximo 100 produtos");
					break;
				}
				do {
					printf("\nDigite o ID do Produto: ");
					scanf("%d", &prod[i].idProduto);
					fflush(stdin);
					printf("Digite o nome do Produto: ");
					gets(prod[i].nomeProduto);
					printf("Digite o custo do Produto: ");
					scanf("%f", &prod[i].custoProduto);
					printf("Digite o valor de venda do Produto: ");
					scanf("%f", &prod[i].vendaProduto);
					printf("Digite a quantidade de estoque do Produto: ");
					scanf("%d", &prod[i].qtdProduto);
					printf("Deseja continuar incluindo [S | N]? ");
					i++;
				}while (toupper(getche())=='S');
				break;
			case 2: 		//Op��o 2 do menu, alterar produto
			printf("\nInforme o ID do produto para altera��o: ");
			scanf("%i", &cod);
			flag=0;
			for(cont=0; cont<1; cont++){ 		//Faz a leuitura do vetor ate o n�mero 
				if (cod==prod[cont].idProduto){
					flag=1;
					fflush(stdin);
					printf("\n\nDigite o Nome do Produto: ");
					gets(prod[cont].nomeProduto);
					printf("Digite o custo do Produto: ");
					scanf("%f", &prod[cont].custoProduto);
					printf("Digite o valor da venda do Produto: ");
					scanf("%f", &prod[cont].vendaProduto);
					printf("Digite a quantidade de estoque do Produto: ");
					scanf("%d", &prod[cont].qtdProduto);
				}
			}
			if (flag==0) 		//Caso n�o encontre o produto
			printf("C�digo do produto n�o encontrado. Verifique e tente novamente");
			system("pause"); 		//Mensagem para pressionar qualquer tecla
			break;
			case 3: 		//Op��o 3 do menu, exclus�o do produto
				printf("\nInforme o ID do produto para exclus�o: ");
				scanf("%i", &cod);
				for (cont=0; cont<=i; cont++){ 		//Faz a leitura do vetor at� o n�mero
					if (cod==prod[cont].idProduto){ 		//Mostra as informa��es do Produto
						flag=1;
						printf("\nNome do Produto: ", prod[cont].nomeProduto);
						printf("\nCusto do Produto: %.2f", prod[cont].custoProduto);
						printf("\nValor de venda do Produto: %2.f", prod[cont].vendaProduto);
						printf("\nQuantidade de estoque do Produto: %i",prod[cont].qtdProduto);
						printf("\nConfirma a exclus�o do Produto? [S | N]?");
						fflush(stdin);
						scanf("%c", &resp);
						if (toupper(resp)=='S'){
							prod[cont].idProduto=0; 		//Exclui de forma logica zerando
							strcpy(prod[cont].nomeProduto,"Excluido"); 		//Atrubui a string
							prod[cont].custoProduto=0;
							prod[cont].vendaProduto=0;
							prod[cont].qtdProduto=0;		
					}
				}
			}
			if (flag==0)
			printf("C�digo do produto n�o encontrado. Tente novamente!\n\n");
			system("pause"); 		//Mensagem para pressionar qualquer tecla
			break;
		case 4:
			printf("Lista de produtos cadastrados ..........");
			printf("\n------------------------------------------------------------");
			printf("\nID	Nome			Custo		Venda		Quantidade");
			printf("\n------------------------------------------------------------");
			for(cont=0; cont<100; cont++){
				if (prod[cont].idProduto !=0){ 		//Mostra apenas aqueles produtos
					printf("\n%-4i", prod[cont].idProduto);
					printf("%-20s", prod[cont].nomeProduto);
					printf("%8.2f", prod[cont].custoProduto);
					printf("\t%8.2f",prod[cont].vendaProduto);
					printf("\t%3i", prod[cont].qtdProduto);	
				}
			}
			printf("\n------------------------------------------------------------");
			system("pause"); 		//Mensagem para precionar qualquer tecla
			break;
		case 5: 		//Custo do Estoque
			printf("*************** RELAT�RIO ***************");
			vlrEstoque=0;
			for(cont=0; cont<100; cont++)
				if(prod[cont].idProduto !=0)
					vlrEstoque+=prod[cont].custoProduto*prod[cont].qtdProduto;
			printf("\n============================================================");
			printf("\nO valor total do Estoque de todos os produtos da empressa � de R$ %.2f", vlrEstoque);
			printf("\n============================================================");
			system("pause");
			break;
		case 6:
			break;
			default:
				printf("Erro: Escolha uma op��o de 1 a 6\n");
				system("pause");
				break;
		}
		
	} while (op!= 6);
}

