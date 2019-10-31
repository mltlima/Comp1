/*  
 *  Exercicio 2 lista Struct   
 *  Agenda de telefone simulator
 *  buscar por primeiro nome, mes, dia e mes
 *  de aniversario
 * 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Nome
{
    char primeiroNome[51], sobrenome[151];
};


struct Telefone
{
    char ddd[5],numero[12];
};

struct Aniversario
{
    int dia,mes,ano;
};


struct Endereco
{
    char rua[100],CEP[9],complemento[50],bairro[100],cidade[100],estado[50],pais[50];
    int numero;
};


struct Agenda
{
    char email[200];
    struct Endereco endereco;
    struct Telefone telefone;
    struct Aniversario aniversario;
    struct Nome nome;
    char observacao[200];
};

 struct Agenda agenda[101];
 struct Agenda temp[101];
 struct Agenda vazia[101];



// Adiciona usuario
void dados()
{   
    int usuarios = 1;  // Mudar se adicionar usuarios abaixo
    char lixo;
    //for (int i = 0; i < 3; i++)

    
        scanf("%c",&lixo);
        printf("Digite o nome do usuario: ");
        gets(agenda[usuarios].nome.primeiroNome);
        //scanf(" %s",agenda[usuarios].nome.primeiroNome);
        while (strlen(agenda[usuarios].nome.primeiroNome) > 50){
            printf("Nome invalido, digite novamente: ");
            gets(agenda[usuarios].nome.primeiroNome);
        }
    

        printf("Digite o sobrenome do usuario:\n");
        //scanf(" %s",&agenda[usuarios].nome.sobrenome);
        gets(agenda[usuarios].nome.sobrenome);
        while (strlen(agenda[usuarios].nome.sobrenome) > 150){
            printf("Nome invalido, digite novamente: ");
            gets(agenda[usuarios].nome.sobrenome);
        }
        
        printf("Digite o dia de aniversario do usuario: ");
        scanf("%d",&agenda[usuarios].aniversario.dia);
        while (agenda[usuarios].aniversario.dia < 1 || agenda[usuarios].aniversario.dia > 31){
            printf("Dia invalido, digite novamente: ");
            scanf("%d",&agenda[usuarios].aniversario.dia);
        }
        
        printf("Digite o mes de aniversario do usuario: ");
        scanf("%d",&agenda[usuarios].aniversario.mes);
        while (agenda[usuarios].aniversario.mes < 1 || agenda[usuarios].aniversario.mes > 12){
            printf("Mes invalido, digite novamente: ");
            scanf("%d",&agenda[usuarios].aniversario.mes);
        }
        
        printf("Digite o ano de aniversario do usuario: ");
        scanf("%d",&agenda[usuarios].aniversario.ano);
        while (agenda[usuarios].aniversario.ano < 1 || agenda[usuarios].aniversario.ano > 9999){
            printf("Ano invalido, digite novamente: ");
            scanf("%d",&agenda[usuarios].aniversario.ano);
        }

        printf("Digite o email do usuario:\n");
        scanf("%200s",agenda[usuarios].email);
        fflush(stdin);

        scanf("%c",&lixo);
        printf("Rua: ");                                            
        gets(agenda[usuarios].endereco.rua);
        while (strlen(agenda[usuarios].endereco.rua) > 100){
            printf("Rua invalida, digite novamente: ");
            gets(agenda[usuarios].endereco.rua);
        }

        printf("Numero: ");                                            
        scanf("%d",&agenda[usuarios].endereco.numero);
        do {} while(getchar()!='\n');

        printf("Complemento: ");                                            
        gets(agenda[usuarios].endereco.complemento);
        while (strlen(agenda[usuarios].endereco.complemento) > 50){
            printf("Complemento invalido, digite novamente: ");
            gets(agenda[usuarios].endereco.complemento);
        }

        printf("Bairro: ");
        gets(agenda[usuarios].endereco.bairro);
        while (strlen(agenda[usuarios].endereco.bairro) > 100){
            printf("Bairro invalido, digite novamente: ");
            gets(agenda[usuarios].endereco.bairro);
        }

        printf("CEP: ");
        gets(agenda[usuarios].endereco.CEP);
        while (strlen(agenda[usuarios].endereco.CEP) != 8){
            printf("CEP invalido, digite novamente: ");
            gets(agenda[usuarios].endereco.CEP);
        }

        printf("Cidade: ");
        gets(agenda[usuarios].endereco.cidade);
        while (strlen(agenda[usuarios].endereco.cidade) > 100){
            printf("Cidade invalida, digite novamente: ");
            gets(agenda[usuarios].endereco.cidade);
        }

        printf("Estado: ");
        gets(agenda[usuarios].endereco.estado);
        while (strlen(agenda[usuarios].endereco.estado) > 50){
              printf("Estado invalido, digite novamente: ");
              gets(agenda[usuarios].endereco.estado);
        }

        printf("Pais: ");
        gets(agenda[usuarios].endereco.pais);
        while (strlen(agenda[usuarios].endereco.pais) > 50){
              printf("Estado invalido, digite novamente: ");
              gets(agenda[usuarios].endereco.pais);
        }

        printf("DDD: ");
        gets(agenda[usuarios].telefone.ddd);
        while (strlen(agenda[usuarios].telefone.ddd) > 4)
        {
           printf("Digite um DDD valido: ");
           gets(agenda[usuarios].telefone.ddd);
        }

        printf("Numero de telefone: ");
        gets(agenda[usuarios].telefone.numero);
        while (strlen(agenda[usuarios].telefone.numero) > 11)
        {
           printf("Digite um telefone valido: ");
           gets(agenda[usuarios].telefone.numero);
        }
        printf("Alguma observacao?\n");
        gets(agenda[usuarios].observacao);

        usuarios ++;


    // Organiza em ordem alfabetica apos adicionar usuario
    //alfabetica();
    

}

// Busca por primeiro nome
void nome(void)
{   char lixo;
    char first[51];
    int check = 0; // verifica se algum usuario foi encontrado

    scanf("%c",&lixo);

    printf("Digite o primeiro nome do usuario que deseja fazer a busca\n");
    gets(first);
    while(strlen(first) > 50){
        first[0] = '\0';
        printf("Digite um nome valido: ");
        gets(first);
    }

    for (int i = 0; i < 100; i++)
    {
        if (strcmp(first,agenda[i].nome.primeiroNome) == 0){
            printf("\nNOME: %s %s\n", agenda[i].nome.primeiroNome,agenda[i].nome.sobrenome);
            printf("ANIVERSARIO: %i/%i/%i\n", agenda[i].aniversario.dia,agenda[i].aniversario.mes,agenda[i].aniversario.ano);
            printf("EMAIL: %s\n", agenda[i].email);
            printf("TELEFONE: %s %s\n", agenda[i].telefone.ddd,agenda[i].telefone.numero);
            printf("RUA: %s, %i\n", agenda[i].endereco.rua,agenda[i].endereco.numero);
            printf("COMPLEMENTO: %s\n",agenda[i].endereco.complemento);
            printf("CEP: %s\n", agenda[i].endereco.CEP);
            printf("BAIRRO: %s\n", agenda[i].endereco.bairro);
            printf("CIDADE: %s\n", agenda[i].endereco.cidade);
            printf("ESTADO: %s\n", agenda[i].endereco.estado);
            printf("PAIS: %s\n", agenda[i].endereco.pais);
            printf("OBS: %s\n", agenda[i].observacao);
            check ++;
            
        }
    }
    if (check == 0)
        printf("Nome nao foi encontrada\n");
}

// Busca por mes de aniversario

int aniversario(void)
{   
    char lixo;
    int month;
    int check = 0;

    scanf("%c",&lixo);
    printf("Digite o mes de aniversario do usuario que deseja fazer a busca\n");
    gets(month);
        while (month < 1 || month > 12){
            printf("Mes invalido, digite novamente: ");
            gets(month);
    }

    for (int i = 0; i < 100; i++)
    {
        if ((agenda[i].aniversario.mes) == month){
            printf("\nNOME: %s %s\n", agenda[i].nome.primeiroNome,agenda[i].nome.sobrenome);
            printf("ANIVERSARIO: %i/%i/%i\n", agenda[i].aniversario.dia,agenda[i].aniversario.mes,agenda[i].aniversario.ano);
            printf("EMAIL: %s\n", agenda[i].email);
            printf("TELEFONE: %s %s\n", agenda[i].telefone.ddd,agenda[i].telefone.numero);
            printf("RUA: %s, %i\n", agenda[i].endereco.rua,agenda[i].endereco.numero);
            printf("COMPLEMENTO: %s\n",agenda[i].endereco.complemento);
            printf("CEP: %s\n", agenda[i].endereco.CEP);
            printf("BAIRRO: %s\n", agenda[i].endereco.bairro);
            printf("CIDADE: %s\n", agenda[i].endereco.cidade);
            printf("ESTADO: %s\n", agenda[i].endereco.estado);
            printf("PAIS: %s\n", agenda[i].endereco.pais);
            printf("OBS: %s\n", agenda[i].observacao);
            check ++;
            
        }
    }
    if (check == 0)
        printf("Nenhum usuario faz aniversario nesse mes\n");
}

// Busca por mes e dia de aniversario
void diaMes(void)
{   
    char lixo;
    int month, day;
    int check = 0;

    scanf("%c",&lixo);
    printf("Digite o mes de aniversario do usuario que deseja fazer a busca\n");
    gets(month);
        while (month < 1 || month > 12){
            printf("Mes invalido, digite novamente: ");
            gets(month);
    }

    printf("Digite o dia de aniversario do usuario que deseja fazer a busca\n");
    gets(day);
        while (day < 1 || day > 31){
            printf("Mes invalido, digite novamente: ");
            gets(day);
    }

    for (int i = 0; i < 100; i++)
    {
        if ((agenda[i].aniversario.mes) == month && (agenda[i].aniversario.dia) == day){
            printf("\nNOME: %s %s\n", agenda[i].nome.primeiroNome,agenda[i].nome.sobrenome);
            printf("ANIVERSARIO: %i/%i/%i\n", agenda[i].aniversario.dia,agenda[i].aniversario.mes,agenda[i].aniversario.ano);
            printf("EMAIL: %s\n", agenda[i].email);
            printf("TELEFONE: %s %s\n", agenda[i].telefone.ddd,agenda[i].telefone.numero);
            printf("RUA: %s, %i\n", agenda[i].endereco.rua,agenda[i].endereco.numero);
            printf("COMPLEMENTO: %s\n",agenda[i].endereco.complemento);
            printf("CEP: %s\n", agenda[i].endereco.CEP);
            printf("BAIRRO: %s\n", agenda[i].endereco.bairro);
            printf("CIDADE: %s\n", agenda[i].endereco.cidade);
            printf("ESTADO: %s\n", agenda[i].endereco.estado);
            printf("PAIS: %s\n", agenda[i].endereco.pais);
            printf("OBS: %s\n", agenda[i].observacao);
            check ++;
            
        }
    }
    if (check == 0)
        printf("Nenhum usuario faz aniversario nesse mes e dia\n");
}

// Organiza em ordem alfabetica
void alfabetica(void)
{
    char lixo;
    scanf("%c",&lixo);
    for(int i = 0; i <=  100; ++i){
        if( strcmp(agenda[i].nome.primeiroNome, agenda[i+1].nome.primeiroNome ) > 0 )
        {
            temp[i] = agenda[i];
            agenda[i]= agenda[i+1];
            agenda[i+1] = temp[i];
        }

        // Caso o primeiro nome seja igual
        if (strcmp(agenda[i].nome.primeiroNome, agenda[i+1].nome.primeiroNome ) == 0)
            if (strcmp(agenda[i].nome.sobrenome, agenda[i+1].nome.sobrenome ) > 0)
            {
                temp[i] = agenda[i];
                agenda[i]= agenda[i+1];
                agenda[i+1] = temp[i];
            }
    }
}

// Remove usuario
void remover(void)
{   
    char lixo;
    char nome[51],sobrenome[152];

    scanf("%c",&lixo);
    printf("Digite o nome do usuario que deseja remover: ");
        gets(nome);
        while (strlen(nome) > 50){
            printf("Nome invalido, digite novamente: ");
            gets(nome);
        }

    printf("Digite o sobrenome do usuario que deseja remover: \n");
        gets(sobrenome);
        while (strlen(sobrenome) > 150){
            printf("Nome invalido, digite novamente: ");
            gets(sobrenome);
        }

    for(int i = 0; i <=  100; ++i){
        if( strcmp(nome, agenda[i].nome.primeiroNome ) == 0 && strcmp(sobrenome,agenda[i].nome.sobrenome) == 0)
        {
            agenda[i] = vazia[0];
            printf("Usuario removido\n");
            for ( i ; i <= 100; i++)
            {
                temp[i] = agenda[i];
                agenda[i]= agenda[i+1];
                agenda[i+1] = temp[i];
            }
            
        }
    }
    //alfabetica();
}

void printAll(void)
{
    char lixo;
    scanf("%c",&lixo);

    for (int i = 0; i < 100; i++)
    {
        
            printf("\nNOME: %s %s\n", agenda[i].nome.primeiroNome,agenda[i].nome.sobrenome);
            printf("ANIVERSARIO: %i/%i/%i\n", agenda[i].aniversario.dia,agenda[i].aniversario.mes,agenda[i].aniversario.ano);
            printf("EMAIL: %s\n", agenda[i].email);
            printf("TELEFONE: %s %s\n", agenda[i].telefone.ddd,agenda[i].telefone.numero);
            printf("RUA: %s, %i\n", agenda[i].endereco.rua,agenda[i].endereco.numero);
            printf("COMPLEMENTO: %s\n",agenda[i].endereco.complemento);
            printf("CEP: %s\n", agenda[i].endereco.CEP);
            printf("BAIRRO: %s\n", agenda[i].endereco.bairro);
            printf("CIDADE: %s\n", agenda[i].endereco.cidade);
            printf("ESTADO: %s\n", agenda[i].endereco.estado);
            printf("PAIS: %s\n", agenda[i].endereco.pais);
            printf("OBS: %s\n", agenda[i].observacao);
            
            
    }
}

void printNomeEmailTelefone(void)
{
    char lixo;
    scanf("%c",&lixo);

    for (int i = 0; i < 100; i++)
    {
        printf("\nNOME: %s %s\n", agenda[i].nome.primeiroNome,agenda[i].nome.sobrenome);
        printf("TELEFONE: %s %s\n", agenda[i].telefone.ddd,agenda[i].telefone.numero);
        printf("EMAIL: %s\n", agenda[i].email);
    }
    
}
int main(void)
{  

    //usuario 1 
    strcpy(agenda[0].nome.primeiroNome,"Miguel");
    strcpy(agenda[0].nome.sobrenome,"Lima Tavares");
    strcpy(agenda[0].email,"miguellt@dcc.ufrj.br");
    strcpy(agenda[0].endereco.bairro,"Cidade universitaria");
    strcpy(agenda[0].endereco.CEP,"22222222");
    strcpy(agenda[0].endereco.cidade,"Rio de Janeiro");
    strcpy(agenda[0].endereco.complemento,"Apt 1208");
    strcpy(agenda[0].endereco.estado,"RJ");                              // Mudar numero de usuarios em dados
    agenda[0].endereco.numero = 800;
    strcpy(agenda[0].endereco.pais, "Brasil");
    strcpy(agenda[0].endereco.rua,"Rua dos bobos");
    strcpy(agenda[0].observacao,"TESTANDO");
    strcpy(agenda[0].telefone.ddd,"21");
    strcpy(agenda[0].telefone.numero,"2222222222");
    agenda[0].aniversario.ano = 1900;
    agenda[0].aniversario.dia = 1;
    agenda[0].aniversario.mes = 12;

    //usuario 2
    strcpy(agenda[0].nome.primeiroNome,"Mario");
    strcpy(agenda[0].nome.sobrenome,"Encanador");
    strcpy(agenda[0].email,"itsme@mario.com");
    strcpy(agenda[0].endereco.bairro,"Nintendo");
    strcpy(agenda[0].endereco.CEP,"22222222");
    strcpy(agenda[0].endereco.cidade,"Roma");
    strcpy(agenda[0].endereco.complemento,"Apt 101");
    strcpy(agenda[0].endereco.estado,"NT");                              // Mudar numero de usuarios em dados
    agenda[0].endereco.numero = 50;
    strcpy(agenda[0].endereco.pais, "Italia");
    strcpy(agenda[0].endereco.rua,"none");
    strcpy(agenda[0].observacao,"TESTANDO numero 2");
    strcpy(agenda[0].telefone.ddd,"11");
    strcpy(agenda[0].telefone.numero,"2222222222");
    agenda[0].aniversario.ano = 1900;
    agenda[0].aniversario.dia = 1;
    agenda[0].aniversario.mes = 12;
    
    char menu_opt;

    printf("     PROGRAMA MANIPULACAO DE ESTRUTURAS!!!\n");
    printf("---------------------------------------------------\n\n");


    do{
    printf("MENU INICIAL\n");
    printf("a. Adicionar usuario.\n");
    printf("b. Remover usuario\n");
    printf("c. Pesquisar usuario por nome.\n");
    printf("d. Pesquisar usuario por dia de aniversario.\n");
    printf("e. Pesquisar usuario por dia e mes de aniversario.\n");
    printf("f. Orgarnizar em ordem alfabetica.\n");
    printf("g. Imprimir todos os dados.\n");
    printf("h. Imprimir nome, telefone e email.\n");
    printf("Digite 's' para parar de executar o programa\n");
    printf(" Digite uma das opcoes do menu: ");
    scanf("%c",&menu_opt);
    



    switch(menu_opt){
    case 'a':
        dados();
        break;
    case 'b':
        remover();
        break;
    case'c':
        nome();
        break;
    case'd':
        aniversario();
        break;
    case'e':
        diaMes();
        break;
    case 'f':
        alfabetica();
        break;
    case 'g':
        printAll();
    case 'h':
        printNomeEmailTelefone();
    case 's':
        return 0;
    default:
        printf("Entrada invalida");
            break;
    }

    }while(menu_opt !='s');
    /*dados();
    nome();
    aniversario();
    diaMes();
    alfabetica();*/
    

    return 0;
}
