#ifndef EXCLUIVEICULO_H
#define EXCLUIVEICULO_H
#define TAM 100

void excluir_veiculo(nome_recebe_veiculo *veiculo_cadastro){
	char excluir;
	int x=0;
	int indice=-1;
	
	if (consulta_veiculo(veiculo_cadastro)==0)printf("\n\t Nenhum veiculo cadastrado");
		else{
		printf("\n\tdigite o código do veiculo que deseja excluir");
		scanf("%i",&excluir);
		for (x=0;x<veiculo_cadastro->nome_controle;x++){
			if(veiculo_cadastro->name_dados_veiculo[x].name_numero==excluir){
				indice=x;
				break;
			}
		}
		if(indice==-1) printf("\n\tMarca não confere!!");
		
		else{
			for (x=indice;x<veiculo_cadastro->nome_controle;x++){			
			veiculo_cadastro->name_dados_veiculo[x]=veiculo_cadastro->name_dados_veiculo[x+1];
			}
			
			veiculo_cadastro->nome_controle--;
			printf("\n\tVeiculo excluido com sucesso do cadastro!!");
			
		}
	}
}



#endif











