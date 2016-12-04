#ifndef CLIENTE_H
#define CLIENTE_H
#define TAM 100

typedef struct{	
	int name_codigo;
	int name_idade;
	float name_salario;
	char name_nome[TAM];
	char name_endereco[TAM];
}name_cliente;

typedef struct{
	name_cliente name_dados[TAM];
	int nome_controle;
}nome_recebe_cliente;

void cadastrar_cliente(nome_recebe_cliente *cliente_cadastro,int *pcodigo);
void exibir_cadastro_cliente(nome_recebe_cliente *cliente_cadastro);
int consultar_cliente(nome_recebe_cliente *cliente_cadastro);
void excluir_cliente(nome_recebe_cliente *cliente_cadastro);





#endif
