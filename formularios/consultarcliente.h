#ifndef CONSULTARCLIENTE_H
#define CONSULTARCLIENTE_H
#define TAM 100

int consultar_cliente(nome_recebe_cliente *cliente_cadastro){
	char busca_nome [50];
	int x; 
	int cont=0;
	
	printf("\n\tConsultar Clientes cadastrados");
	if(cliente_cadastro->nome_controle==0) {
		printf("\n\tNenhum cliente cadastrado!!");
		
	}else{
	
	printf("\n\tInforme o nome para buscar cliente >>>");
	fflush(stdin);
	gets(busca_nome);
	
	for(x=0;x<cliente_cadastro->nome_controle;x++){
		if (!strcmpi(busca_nome,cliente_cadastro->name_dados[x].name_nome)){
			cont++;
			printf("\n\tCliente Encontrado\n\t");
			printf("\n\tNome: %s",cliente_cadastro->name_dados[x].name_nome);
			printf("\n\tCódigo: %i",cliente_cadastro->name_dados[x].name_codigo);
			printf("\n\tIdade: %i",cliente_cadastro->name_dados[x].name_idade);	
			printf("\n\tSalario: %.2f\n\t",cliente_cadastro->name_dados[x].name_salario);
		//	break;
		}else {
			printf("\n\tNenhum cadastro encontrado!");
		}
	
	}
	
	
	}
	
	return cont;		
}

#endif









