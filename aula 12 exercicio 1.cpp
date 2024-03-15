/*
O sistema deve apresentar ao usuário um menu com as seguintes opções: 1-Incluir; 2-Alterar; 3-
Excluir e 4-Imprimir na tela, o cadastro de N produtos de um determinado departamento de uma
loja. Para o cadastro deve ser utilizado uma estrutura de dados tipo registro com as seguintes
informações: Código do Produto, Nome do Produto, Valor de Custo, Valor de Venda, Quantidade
em Estoque
*/

#include <stdio.h> 		//Funções de I/O print e scanf
#include <conio.h> 		//Função de getche()
#include <ctype.h> 		//Função de toupper()
#include <string.h> 	//Função de strcpy()
#include <locale.h> 	//Função de setlocale()
#include <stdlib.h> 	//Função de system()

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
		system("cls"); 		//Limpa toda interação
		printf("\n-------MENU-------\n");
		printf("1 - Para Incluir Produto\n");
		printf("2 - Para Alterar Produto\n");
		printf("3 - Para Excluir Produto\n");
		printf("4 - Para Mostrar na tela os Produto\n");
		printf("5 - Para Exibir o Relatóriodo custo do Estoque\n");
		printf("6 - Para Sair do programa\n");
	
		scanf("%d", &op); 		//Escolhe a opção do menu
		
		switch (op) {
			case 1: 		//Opção 1 do menu, incluir produto
				if (i>99){
					printf("Número de produtos esgotados! Cadastro no máximo 100 produtos");
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
			case 2: 		//Opção 2 do menu, alterar produto
			printf("\nInforme o ID do produto para alteração: ");
			scanf("%i", &cod);
			flag=0;
			for(cont=0; cont<1; cont++){ 		//Faz a leuitura do vetor ate o número 
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
			if (flag==0) 		//Caso não encontre o produto
			printf("Código do produto não encontrado. Verifique e tente novamente");
			system("pause"); 		//Mensagem para pressionar qualquer tecla
			break;
			case 3: 		//Opção 3 do menu, exclusão do produto
				printf("\nInforme o ID do produto para exclusão: ");
				scanf("%i", &cod);
				for (cont=0; cont<=i; cont++){ 		//Faz a leitura do vetor até o número
					if (cod==prod[cont].idProduto){ 		//Mostra as informações do Produto
						flag=1;
						printf("\nNome do Produto: ", prod[cont].nomeProduto);
						printf("\nCusto do Produto: %.2f", prod[cont].custoProduto);
						printf("\nValor de venda do Produto: %2.f", prod[cont].vendaProduto);
						printf("\nQuantidade de estoque do Produto: %i",prod[cont].qtdProduto);
						printf("\nConfirma a exclusão do Produto? [S | N]?");
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
			printf("Código do produto não encontrado. Tente novamente!\n\n");
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
			printf("*************** RELATÓRIO ***************");
			vlrEstoque=0;
			for(cont=0; cont<100; cont++)
				if(prod[cont].idProduto !=0)
					vlrEstoque+=prod[cont].custoProduto*prod[cont].qtdProduto;
			printf("\n============================================================");
			printf("\nO valor total do Estoque de todos os produtos da empressa é de R$ %.2f", vlrEstoque);
			printf("\n============================================================");
			system("pause");
			break;
		case 6:
			break;
			default:
				printf("Erro: Escolha uma opção de 1 a 6\n");
				system("pause");
				break;
		}
		
	} while (op!= 6);
}

