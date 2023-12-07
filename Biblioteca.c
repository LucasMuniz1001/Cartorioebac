#include <stdio.h> //biblioteca de comunicação com o uduário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.H> //biblioteca de alocações de texto por região
#include <String.h> //biblioteca responsável por cuidar das string


int registro()
{
	char cpf [40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	print("digite o CPF a ser cadastrado ");
	scanf("%s", cpf);
	
	string(arquivo, cpf); //Responsavél por copiar os valores das string
	
	FILE *file;
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file,cpf); //salvo o valor
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado");
	scanf("%s",nome);
	
	file = dopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digiite o sobre nome a ser cadastrado");
	scanf"%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("digite o cargo a ser cadastrado");
	scanf ("%S", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");

}

int consulta()
{
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado:");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	if(file == NULL)
	{
		printf("Nao foi possivel abrir, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file)!= NULL)
	{
		printf("\n Essas sao as informaçoes do usuario: ");
		printf ("%s", conteudo);
		printf("\n\n");
		
	}
	
	System ("pause");
}

int deletar ()
{
	printf("Você escolheu deletar nomes!\n");
	system("pause");
}

int main()
{
	int opcao=0; //Definindo variáveis
	int x=1;
	
	for(x=1;x=1;)
	{
	
	system("cls");
	
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguaguem
	
	printf("### Cartório da Ebac ###"); //Início do menu
	printf("Escolha a opção desejada do menu\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("opção: "); //Fim do menu
	
	scanf("%d", &opcao); //Armazenando a escolha do usuário
	

	system("cls");
	
	
	switch(opcao)
	{
		case 1:
		registro();
		break;
		
		case 2: 
		consulta();
		break; 
		
		case 3:
		deletar();
		break;
				
		default:
		printf("Essa opção não está disponivel\n");
		system("pause");
		break;
			
	}
	
	
	
	if(opcao==1) //Inicio da seleção
	{
		printf("Você escolheu o resgistro de nomes!\n");
		system("pause");
	}
	if(opcao==2)
	{
		printf("Voce escolheu consultar os nomes\n");
		system("pause");
	}
	if(opcao==3)
	{
		printf("Você escolheu deletar nomes!\n");
		system("pause");
	} 
	if(opcao>=4 || opcao<=0)
	{
		printf("Essa opção não está disponivel\n");
		system("pause");
	} //Fim da seleção
	
	}
}
