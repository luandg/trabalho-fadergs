#ifndef CONSULTAVEICULO_H
#define CONSULTAVEICULO_H
#define TAM 100

int consulta_veiculo(nome_recebe_veiculo *veiculo_cadastro){
	char busca_veiculo [50];
	int x, cont=0;
	
	printf("\n\tConsultar Veículos cadastrados");
	if (veiculo_cadastro->nome_controle==0) {
		printf("\n\tNenhum veiculo no estoque\n\t");
	}else{
		
	printf("\n\tInforme a Marca ou Modelo para buscar veículo\n\t");
	fflush(stdin);
	gets(busca_veiculo);
	
	for(x=0;x<veiculo_cadastro->nome_controle;x++){
		if(!strcmpi(busca_veiculo,veiculo_cadastro->name_dados_veiculo[x].name_Marca) || !strcmpi(busca_veiculo,veiculo_cadastro->name_dados_veiculo[x].name_Modelo)){
			cont++;
			printf("\n");
			printf("\n\tVeiculo encontrado!");
			printf("\n\tCódigo: %i",veiculo_cadastro->name_dados_veiculo[x].name_numero);
			printf("\n\tMarca: %s",veiculo_cadastro->name_dados_veiculo[x].name_Marca);
			printf("\n\tModelo: %s",veiculo_cadastro->name_dados_veiculo[x].name_Modelo);
			printf("\n\tAno: %i",veiculo_cadastro->name_dados_veiculo[x].name_Ano);
			printf("\n\tTipo combustivel: %c",veiculo_cadastro->name_dados_veiculo[x].name_Combustivel);
			printf("\n\tPreço de fabrica: %.2f",veiculo_cadastro->name_dados_veiculo[x].name_preco_de_fabrica);
			printf("\n\tQuantidade em estoque: %i",veiculo_cadastro->name_dados_veiculo[x].name_quantidade);
			//break;
		}else{
			printf("\n\tVeículo não cadastrado!");
		}
		
	}	
	}

return cont;	
}




#endif








