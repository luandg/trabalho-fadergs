#ifndef EXIBECADASTROCLIENTE_H
#define EXIBECADASTROCLIENTE_H
#define TAM 100

void exibir_cadastro_cliente(nome_recebe_cliente *cliente_cadastro){
int x=0,cont=0;
	printf("\n\tExibir Cadastro de Clientes");
	if(cliente_cadastro->nome_controle==0) printf("\n\tNenhum cliente cadastrado!!");
	else{
		for(x=0;x<cliente_cadastro->nome_controle;x++){
			cont++;
			printf("\n");
		printf("\n\t%iº Cliente cadastrado\n\t",cont);
		printf("\n\tNome: %s",cliente_cadastro->name_dados[x].name_nome);
		printf("\n\tCódigo: %i",cliente_cadastro->name_dados[x].name_codigo);
		printf("\n\tIdade: %i",cliente_cadastro->name_dados[x].name_idade);	
		printf("\n\tSalario R$: %.2f",cliente_cadastro->name_dados[x].name_salario);
		printf("\n\tEndereço: %s",cliente_cadastro->name_dados[x].name_endereco);
		
	
	
		}
		printf("\n");
		printf("\n\tTotal de clientes cadastrados%i",cont);
	}	
}




#endif







