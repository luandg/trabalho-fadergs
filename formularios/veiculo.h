#ifndef VEICULO_H
#define VEICULO_H
#define TAM 100

typedef struct {
	int name_numero;
	char name_Marca [TAM];
	char name_Modelo[TAM];
	int name_Ano;
	char name_Combustivel; //(G - Gasolina ou F - Flex)
	float name_preco_de_fabrica; //(Sem impostos) 
	int name_quantidade;
}name_veiculo; 

typedef struct{
	name_veiculo name_dados_veiculo[TAM];
	int nome_controle;
}nome_recebe_veiculo;

void cadastra_veiculo(nome_recebe_veiculo *veiculo_cadastro, int *pnumero);
void exibir_estoque(nome_recebe_veiculo *veiculo_cadastro);
int consulta_veiculo(nome_recebe_veiculo *veiculo_cadastro);
void excluir_veiculo(nome_recebe_veiculo *veiculo_cadastro);
void venda(nome_recebe_cliente *pcadastro_cliente, nome_recebe_veiculo *pcadastro_veiculo);
#endif
