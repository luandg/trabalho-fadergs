#ifndef CADASTRARCLIENTE_H
#define CADASTRARCLIENTE_H
#define TAM 100

void cadastrar_cliente(nome_recebe_cliente *cliente_cadastro, int *pcodigo){
name_cliente name_aux; // name_aux vai servir como a ficha do formul�rio onde ira receber as informa��o at� ser arquivada
if(cliente_cadastro->nome_controle==TAM) printf("Lista cheia");
else{
printf("\n\t### Cadastrar Dados do cliente ###\n\t");
++*pcodigo;
name_aux.name_codigo=*pcodigo;

printf("\n\tnome\t>>>");
fflush(stdin);
gets(name_aux.name_nome); // AQUI name_aux � como se fosse uma ficha de formulario onde esta recebendo as quest�es fo formul�rio.

printf("\n\tCodigo\t>>> %i\t",name_aux.name_codigo);


printf("\n\tidade\t>>>");
scanf("%i",&name_aux.name_idade);

printf("\n\tsalario\t>>>");
scanf("%f",&name_aux.name_salario);

printf("\n\tEndere�o\t>>>");
fflush(stdin);
gets(name_aux.name_endereco);	

cliente_cadastro->name_dados[cliente_cadastro->nome_controle]=name_aux; // aqui name_aux esta sendo guardado dentro de uma pasta name_dados
cliente_cadastro->nome_controle++;                                                                        //que tem espa�o para 100 fichas

}

	
}



#endif









