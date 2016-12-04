#ifndef CADASTRARVEICULO_H
#define CADASTRARVEICULO_H
#define TAM 100

void cadastra_veiculo(nome_recebe_veiculo *veiculo_cadastro, int *pnumero){
name_veiculo name_aux;
if(veiculo_cadastro->nome_controle==TAM) printf("Lista cheia");
else{
				++*pnumero;
				name_aux.name_numero=*pnumero;
				printf("\n\t### Cadastrar veículo ###");
				printf("\n\tCódigo\t>>>%i\n",name_aux.name_numero);
					
				printf("\n\tmarca\t>>>");
					fflush(stdin);
					gets(name_aux.name_Marca);
										
				printf("\n\tModelo\t>>>");
					fflush(stdin);					
					gets(name_aux.name_Modelo);
					
				printf("\n\tAno\t>>>");
					scanf("%i",&name_aux.name_Ano);
					fflush(stdin);
				printf("\n\tCombustivel (G - Gasolina ou F - Flex)\t>>>");
					scanf("%c",&name_aux.name_Combustivel);	
								
				printf("\n\tPreco de fabrica\t>>>");								
					scanf("%f",&name_aux.name_preco_de_fabrica);
					
				printf("\n\tQuantidade\t>>>");
					scanf("%i",&name_aux.name_quantidade);
					
					veiculo_cadastro->name_dados_veiculo[veiculo_cadastro->nome_controle]=name_aux;
					veiculo_cadastro->nome_controle++;
}
}


#endif








