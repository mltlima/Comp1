#include<stdio.h>

struct Nome
{
    char primeiroNome[20], sobrenome[80];
};


struct Telefone
{
    int ddd,numero;
};

struct Aniversario
{
    int dia,mes,ano;
};


struct Endereco
{
    char rua[80],complemento[80],bairro[80],cidade[80],estado[80],pais[80];
    int numero;
};


struct Agenda
{
    char email[80];
    struct Endereco endereco;
    struct Telefone telefone;
    struct Aniversario aniversario;
    struct Nome nome;
    char observacao[200];
};

int main(void)
{
    struct Agenda agenda[3];

    // Recebe os dados dos 100 usuarios
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome do usuario %d\n",i + 1);
        scanf("%20s",agenda[i].nome.primeiroNome);

        printf("Digite o sobrenome do usuario %d\n",i + 1);
        fgets(agenda[i].nome.sobrenome,80,stdin);

        printf("Digite o email do usuario %d\n",i + 1);
        scanf("%20s",agenda[i].email);


    }
    

}
