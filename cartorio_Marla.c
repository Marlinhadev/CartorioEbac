#include <stdio.h>//biblioteca de comunica��o com o usu�rio
#include <stdlib.h>//biblioteca de aloca��o de espa�o em mem�ria 
#include <locale.h>//biblioteca de aloca��es de texto por regi�o
#include <string.h>//biblioteca resp�nsavel por cuidar das strings 

int registro() //Fun��o responsavel por cadastrar os usu�rios no sistema 														
{
	    //inicio cria��o de vari�veis/string 
        char arquivo[40];
        char cpf[40];
        char nome[40]; 
        char sobrenome[40];
        char cargo[40]; 
        //final da cria�ao de vari�veis/string 
        
        printf("Digite o cpf a ser cadastrado: "); //coletando informa��o do usu�rio 
        scanf("%s", cpf); //%s refere-se a string 
        
        strcpy(arquivo, cpf); //responsavel por copiar os valores das strings 
        
        FILE *file; //criar o arquivo 
        file = fopen(arquivo,"w"); // cria o arquivo e o w significa escrever 
        fprintf(file,cpf); //salva o valor da variavel 
        fclose(file); //fecha o arquivo 
        
        file=fopen(arquivo,"a");
        fprintf(file,",");
        fclose(file); 
        
        printf("Digite o nome a ser cadastrado: ");
        scanf("%s",nome); 
        
        file=fopen(arquivo,"a");
        fprintf(file,nome);
        fclose(file); 
        
        file=fopen(arquivo,"a");
        fprintf(file, ",");
        fclose(file); 
        
        printf("Digite o sobrenome a ser cadastrado: ");
        scanf("%s",sobrenome);
        
        file=fopen(arquivo,"a");
        fprintf(file,sobrenome);
        fclose(file); 
        
        file=fopen(arquivo,"a");
        fprintf(file, ",");
        fclose(file); 
        
        printf("Digite o cargo a ser cadastrado: ");
        scanf("%s",cargo);
        
        file=fopen(arquivo,"a");
        fprintf(file,cargo);
        fclose(file); 
        
        system("pause");
}

int consultar()
{
	    setlocale(LC_ALL,"portuguese");//definindo linguagem
	    
	    char cpf[40];
	    char conteudo [200]; 
	    
	    printf("Digite o CPF a ser consultado: ");
	    scanf("%s",cpf);
	    
	    FILE*file;
	    file= fopen(cpf,"r");
	    
	    if (file == NULL)
	    { 
	        printf("N�o foi poss�vel abrir o arquivo, n�o localizado! \n");
		}
		
        while(fgets(conteudo,200,file) != NULL)
        {
        	printf("\n essas s�o as informa��es do usuario:");
        	printf("%s",conteudo);
        	printf("\n\n");
		}
		
		system("pause");
		
}
int deletar()
{
	    char cpf [40];
	    printf("Digite o CPF do usu�rio a ser deletado: ");
	    scanf("%s",cpf);
	    
	    remove (cpf);
	    
	    FILE*file;
	    file=fopen(cpf,"r");
	    
	    if(file == NULL)
	    {
	    	printf("O usu�rio foi deletado, nao se encontra mais no sistema:.\n");
	    	system("pause");
	    }	
	    
}
int main ()
{
	int opcao=0; //definindo vari�veis 
	int laco=1;
	char senhadigitada[10]="a";
	int comparacao;
	
	printf("### Cartorio da EBAC ###\n\n");
	printf("Login de Administrador!\n\n Digite a sua senha: "); 
	scanf("%s",senhadigitada); 
	
	comparacao = strcmp(senhadigitada, "admin");
	
	 if(comparacao == 0)
	{
	    system("cls");
	    for(laco=1;laco=1;)
	    {
	
            setlocale(LC_ALL,"portuguese");//definindo linguagem
    
            system("cls");
    
            printf("### Cartorio da EBAC ###\n\n");//inicio menu 
	        printf("Escolha a op��o desejada no menu:\n\n");
	        printf("\t1- Registrar nomes\n");
	        printf("\t2- Consultar nomes\n");
            printf("\t3- Deletar nomes\n"); 
            printf("\t4- Sair do sistema\n");
	        printf("Op��o: "); //fim do menu 

            scanf("%d", &opcao); //armazenando a escolha do usu�rio 
    
            system("cls"); //respons�vel por limpar a tela 
    
            switch(opcao)//inicio da sele��o
		{
			 case 1:
			 registro();//chamada de fun��es 
		   	 break;
			
			 case 2:
			 consultar();
		     break; 
			
			 case 3:
			 deletar();
			 break;
			
			 case 4:
			 printf("Obrigado por utilizar o sistema!\n");	
			 return 0;
			 break;
			
			 default:
			 printf("Essa op��o n�o est� disponivel!\n");
			 system("pause");
			 break;
		   }           //fim da sele��o 
		}	
    } 	 		
}		
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

