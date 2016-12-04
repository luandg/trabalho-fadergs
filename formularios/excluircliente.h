#ifndef EXCLUIRCLIENTE_H
#define EXCLUIRCLIENTE_H
#define TAM 100

	void excluir_cliente(nome_recebe_cliente *cliente_cadastro){
	int excluir=0;
	int x=0;
	int indice=-1;
	char resposta ;
	printf("\n\tExluir Cliente do Cadastro");
	if (consultar_cliente(cliente_cadastro)==0);
	
		else{
		printf("\n\tdigite o código do cliente que deseja excluir");
		scanf("%i",&excluir);
		printf("Tem certeza que deseja excluir o cliente da matricula %i? ==>  ",excluir);
		fflush(stdin);
		scanf("%c",&resposta);
		if(toupper(resposta)=='S'){
			for (x=0;x<cliente_cadastro->nome_controle;x++){
				if(cliente_cadastro->name_dados[x].name_codigo==excluir){
					indice=x;
					break;
				}
			}
		if(indice==-1) printf("\n\tMatricula não confere!!");
		
		else{
			for (x=indice;x<cliente_cadastro->nome_controle;x++){			
			cliente_cadastro->name_dados[x]=cliente_cadastro->name_dados[x+1];
			}
			cliente_cadastro->nome_controle--;
			printf("\n\tCliente excluido com sucesso!!");
		}
	}else{
		printf("\n\t Ação cancelada!");
	}
	}
}



#endif




		
		
		





