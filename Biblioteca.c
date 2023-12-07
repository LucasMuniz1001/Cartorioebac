#include <stdio.h> //biblioteca de comunica��o com o udu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.H> //biblioteca de aloca��es de texto por regi�o
#include <String.h> //biblioteca respons�vel por cuidar das string


int registro()
{
	char cpf [40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	print("digite o CPF a ser cadastrado ");
	scanf("%s", cpf);
	
	string(arquivo, cpf); //Responsav�l por copiar os valores das string
	
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
		printf("Nao foi possivel abrir, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file)!= NULL)
	{
		printf("\n Essas sao as informa�oes do usuario: ");
		printf ("%s", conteudo);
		printf("\n\n");
		
	}
	
	System ("pause");
}

int deletar ()
{
	printf("Voc� escolheu deletar nomes!\n");
	system("pause");
}

int main()
{
	int opcao=0; //Definindo vari�veis
	int x=1;
	
	for(x=1;x=1;)
	{
	
	system("cls");
	
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguaguem
	
	printf("### Cart�rio da Ebac ###"); //In�cio do menu
	printf("Escolha a op��o desejada do menu\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("op��o: "); //Fim do menu
	
	scanf("%d", &opcao); //Armazenando a escolha do usu�rio
	

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
		printf("Essa op��o n�o est� disponivel\n");
		system("pause");
		break;
			
	}
	
	
	
	if(opcao==1) //Inicio da sele��o
	{
		printf("Voc� escolheu o resgistro de nomes!\n");
		system("pause");
	}
	if(opcao==2)
	{
		printf("Voce escolheu consultar os nomes\n");
		system("pause");
	}
	if(opcao==3)
	{
		printf("Voc� escolheu deletar nomes!\n");
		system("pause");
	} 
	if(opcao>=4 || opcao<=0)
	{
		printf("Essa op��o n�o est� disponivel\n");
		system("pause");
	} //Fim da sele��o
	
	}
}
