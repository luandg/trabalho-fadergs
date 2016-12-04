#ifndef EXIBIRESTOQUE_H
#define EXIBIRESTOQUE_H
#define TAM 100

void exibir_estoque(nome_recebe_veiculo *veiculo_cadastro){
int x=0, cont=0;
if (veiculo_cadastro->nome_controle==0) printf("\n\tNenhum veiculo no cadastrado\n\t");
else{
	for(x=0;x<veiculo_cadastro->nome_controle;x++){
		cont++;
					printf("\n");
					printf("\n\t%iº Automovel cadastrado\n\t",cont);
					printf("\n\tNumero: %i",veiculo_cadastro->name_dados_veiculo[x].name_numero);
					printf("\n\tMarca: %s",veiculo_cadastro->name_dados_veiculo[x].name_Marca);
					printf("\n\tModelo: %s",veiculo_cadastro->name_dados_veiculo[x].name_Modelo);	
					printf("\n\tAno: %i",veiculo_cadastro->name_dados_veiculo[x].name_Ano);
					printf("\n\tCombustivel: %c",veiculo_cadastro->name_dados_veiculo[x].name_Combustivel);
					printf("\n\tPreço de fabrica: %.2f",veiculo_cadastro->name_dados_veiculo[x].name_preco_de_fabrica);
					printf("\n\tQuantidade: %i",veiculo_cadastro->name_dados_veiculo[x].name_quantidade);
					
					
	}
	
}
}




#endif








