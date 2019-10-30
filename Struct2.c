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
    char primeiroNome[50], sobrenome[150];
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

// Recebe os dados dos 100 usuarios
void dados()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome do usuario %d: ",i + 1);
        gets(agenda[i].nome.primeiroNome);
        while (strlen(agenda[i].nome.primeiroNome) > 50){
            printf("Nome invalido, digite novamente: ");
            gets(agenda[i].nome.primeiroNome);
        }

        printf("Digite o sobrenome do usuario %d\n",i + 1);
        gets(agenda[i].nome.sobrenome);
        while (strlen(agenda[i].nome.sobrenome) > 150){
            printf("Nome invalido, digite novamente: ");
            gets(agenda[i].nome.sobrenome);
        }
        
        printf("Digite o dia de aniversario do usuario %d: ",i + 1);
        gets(agenda[i].aniversario.dia);
        while (agenda[i].aniversario.dia < 1 || agenda[i].aniversario.dia > 31){
            printf("Dia invalido, digite novamente: ");
            gets(agenda[i].aniversario.dia);
        }

        printf("Digite o mes de aniversario do usuario %d: ",i + 1);
        gets(agenda[i].aniversario.mes);
        while (agenda[i].aniversario.mes < 1 || agenda[i].aniversario.mes > 12){
            printf("Mes invalido, digite novamente: ");
            gets(agenda[i].aniversario.mes);
        }

        printf("Digite o ano de aniversario do usuario %d: ",i + 1);
        gets(agenda[i].aniversario.ano);
        while (agenda[i].aniversario.ano < 1 || agenda[i].aniversario.ano > 9999){
            printf("Ano invalido, digite novamente: ");
            gets(agenda[i].aniversario.ano);
        }

        printf("Digite o email do usuario %d\n",i + 1);
        scanf("%200s",agenda[i].email);
        fflush(stdin);

        printf("Rua: ");                                            
        gets(agenda[i].endereco.rua);
        while (strlen(agenda[i].endereco.rua) > 100){
            printf("Rua invalida, digite novamente: ");
            gets(agenda[i].endereco.rua);
        }

        printf("Numero: ");                                            
        scanf("%d",&agenda[i].endereco.numero);
        do {} while(getchar()!='\n');

        printf("Complemento: ");                                            
        gets(agenda[i].endereco.complemento);
        while (strlen(agenda[i].endereco.complemento) > 50){
            printf("Complemento invalido, digite novamente: ");
            gets(agenda[i].endereco.complemento);
        }

        printf("Bairro: ");
        gets(agenda[i].endereco.bairro);
        while (strlen(agenda[i].endereco.bairro) > 100){
            printf("Bairro invalido, digite novamente: ");
            gets(agenda[i].endereco.bairro);
        }

        printf("CEP: ");
        gets(agenda[i].endereco.CEP);
        while (strlen(agenda[i].endereco.CEP) != 8){
            printf("CEP invalido, digite novamente: ");
            gets(agenda[i].endereco.CEP);
        }

        printf("Cidade: ");
        gets(agenda[i].endereco.cidade);
        while (strlen(agenda[i].endereco.cidade) > 100){
            printf("Cidade invalida, digite novamente: ");
            gets(agenda[i].endereco.cidade);
        }

        printf("Estado: ");
        gets(agenda[i].endereco.estado);
        while (strlen(agenda[i].endereco.estado) > 50){
              printf("Estado invalido, digite novamente: ");
              gets(agenda[i].endereco.estado);
        }

        printf("Pais: ");
        gets(agenda[i].endereco.pais);
        while (strlen(agenda[i].endereco.pais) > 50){
              printf("Estado invalido, digite novamente: ");
              gets(agenda[i].endereco.pais);
        }

        printf("DDD: ");
        gets(agenda[i].telefone.ddd);
        while (strlen(agenda[i].telefone.ddd) > 4)
        {
           printf("Digite um DDD valido: ");
           gets(agenda[i].telefone.ddd);
        }

        printf("Numero de telefone: ");
        gets(agenda[i].telefone.numero);
        while (strlen(agenda[i].telefone.numero) > 11)
        {
           printf("Digite um telefone valido: ");
           gets(agenda[i].telefone.numero);
        }

        printf("Alguma observacao?\n");
        gets(agenda[i].observacao);


    }

}

void nome(void)
{
    char first[51];
    int check = 0; // verifica se algum usuario foi encontrado

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


int main(void)
{
    dados();
    nome();

    return 0;
}
