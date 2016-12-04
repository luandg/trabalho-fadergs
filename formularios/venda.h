#ifndef VENDA_H
#define VENDA_H


void venda (nome_recebe_cliente *pcadastro_cliente, nome_recebe_veiculo *pcadastro_veiculo){
int indice_cliente=0,codigo_cliente=0,encontrouCliente=-1;
int x, indice_carro=0,codigo_carro=0,encontrouCarro=-1;
int resposta=0;
char resposta1='n';
float IPI=0;

float mLucro=0;
float caixa=0;
		if(consulta_veiculo(pcadastro_veiculo)==0){
		printf("\n\tNão existem veiculos cadastrados na base de dados da loja!!");
	}else{
		printf("\n\tInforme o código especifico do veiculo ==> ");
		scanf("%i",&codigo_carro);
		for(x=0;x<pcadastro_veiculo->nome_controle;x++){
			if(codigo_carro==pcadastro_veiculo->name_dados_veiculo[x].name_numero) {
					indice_carro=x;
					encontrouCarro=1;
					break;
			}
		}
		if(encontrouCarro!=-1){
			printf("\n\t Você escolheu o veiculo:\n\tMarca: %s \n\tModelo: %s \n\tAno: %i \n\tPreço de fabrica: %.2f \n\tCombustivel: %c"
			,pcadastro_veiculo->name_dados_veiculo[indice_carro].name_Marca
			,pcadastro_veiculo->name_dados_veiculo[indice_carro].name_Modelo
			,pcadastro_veiculo->name_dados_veiculo[indice_carro].name_Ano
			,pcadastro_veiculo->name_dados_veiculo[indice_carro].name_preco_de_fabrica
			,pcadastro_veiculo->name_dados_veiculo[indice_carro].name_Combustivel);
			
		}else{
			printf("\n Código digitado é inválido!");
			
		}
	

	}
		if(consultar_cliente(pcadastro_cliente)==0){
			printf("\n\t\Não existem clientes cadastrados no banco de dados da loja!!");
		}else{
			printf("\n\tInforme o código especifico do cliente ==>");
			scanf("%i",&codigo_cliente);
			for(x=0;x<pcadastro_cliente->nome_controle;x++){
				if(codigo_cliente==pcadastro_cliente->name_dados[x].name_codigo){
					indice_cliente=x;
					encontrouCliente=1;
					break;
				}

			}
						if(encontrouCliente!=-1){
			printf("\n\t Você escolheu o clinte:\n\tNome: %s \n\tIdade: %i \n\tEndereço: %s \n\tSalario: %.2f "
			,pcadastro_cliente->name_dados[indice_cliente].name_nome
			,pcadastro_cliente->name_dados[indice_cliente].name_idade
			,pcadastro_cliente->name_dados[indice_cliente].name_endereco
			,pcadastro_cliente->name_dados[indice_cliente].name_salario);
			
		}else{
			printf("\n Código digitado é inválido!");
			
		}
		}
		
		printf("\n\tComo deseja efetuar o pagamento, (1)avista ou (2)aprazo?");
		scanf("%i",&resposta);
		
		if(resposta==1){
			if(toupper(pcadastro_veiculo->name_dados_veiculo[indice_carro].name_Combustivel)=='G'){
				IPI=1.11;
				
				
			}else{
				if(toupper(pcadastro_veiculo->name_dados_veiculo[indice_carro].name_Combustivel)=='F')
				IPI=1.13;
				
			}
			printf("\n\tValor a pagar %.2f >>> ",pcadastro_veiculo->name_dados_veiculo[indice_carro].name_preco_de_fabrica*IPI);
			
			printf("\n\tConfirmar a compra?");
			fflush(stdin);
			scanf("%c",&resposta1);
			
			
			if(toupper(resposta1=='N')){
				printf("\n\tOperação de compra Cancelada");
			}else{
			caixa=pcadastro_veiculo->name_dados_veiculo[indice_carro].name_preco_de_fabrica*IPI;	
			}
			printf("\n\tValor acumulado em caixa%f",caixa);

		}else if (resposta==2){
			printf("teste");
		}



	

	
	
	
	
	
}


#endif
