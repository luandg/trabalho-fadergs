#include <stdio.h>
#include<ctype.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include "cliente.h"
#include "veiculo.h"


#include "cadastrarcliente.h"
#include "exibecadastrocliente.h"
#include "consultarcliente.h"
#include "excluircliente.h"

#include "cadastrarveiculo.h"
#include "exibirestoque.h"
#include "consultaveiculo.h"
#include "excluiveiculo.h"
#include "venda.h"

#define TAM 100


main(){
setlocale(LC_ALL,"portuguese");

nome_recebe_cliente cadastro_cliente;
cadastro_cliente.nome_controle=0;

nome_recebe_veiculo cadastro_veiculo;
cadastro_veiculo.nome_controle=0;
int codigo=0;
int numero=0;
int opcao_menu=0;

							printf("\n\t### MENU DE OPÇÕES ###");
							 
								do{
							printf("\n\n\n\tEscolha uma das opções abaixo");
							printf("\n");
							
							printf("\t#$#\t1------------------Cadastrar Cliente\t#$#\n");
							printf("\t#$#\t2--------Exibir cadastro de clientes\t#$#\n");
							printf("\t#$#\t3------------------Consultar cliente\t#$#\n");
							printf("\t#$#\t4--------------------Excluir cliente\t#$#\n");
							printf("\t#$#\t5------------------Cadastrar Veículo\t#$#\n");
							printf("\t#$#\t6---------------------Exibir estoque\t#$#\n");
							printf("\t#$#\t7------------------Consultar Veículo\t#$#\n");
							printf("\t#$#\t8--------------------Excluir veículo\t#$#\n");
							printf("\t#$#\t9------------------------------Venda\t#$#\n");
							printf("\t#$#\t10----------------------Status Caixa\t#$#\n");
							printf("\t#$#\t0-------------------------------Sair\t#$#\n");
							scanf("%i",&opcao_menu);
							system("cls");

switch (opcao_menu){
	case 0:printf("Good Bye");
		break;
	case 1:cadastrar_cliente(&cadastro_cliente, &codigo);
		break;
	case 2:exibir_cadastro_cliente(&cadastro_cliente);
		break;
	case 3:consultar_cliente(&cadastro_cliente);
		break;
	case 4:excluir_cliente(&cadastro_cliente);
		break;
	case 5:cadastra_veiculo(&cadastro_veiculo, &numero);
		break;
	case 6:exibir_estoque(&cadastro_veiculo);
		break;
	case 7:consulta_veiculo(&cadastro_veiculo);
		break;
	case 8:excluir_veiculo(&cadastro_veiculo);
		break;
	case 9:venda(&cadastro_cliente, &cadastro_veiculo);
		break;
	case 10:
		break;
	default: printf("\n\tERRO, INFORME UM CÓDIGO VÁLIDO!");	
}

	}while (opcao_menu !=0);
}







































