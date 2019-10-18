#include <stdio.h>
#include <string.h>
 
typedef struct{
    char rua[100], bairro[100], cidade[100], estado[3], cep[9];
}ENDERECO;
 
typedef struct{
    char nome[200];
    ENDERECO residencia;
    float salario;
    char identidade[10], cpf[12], telefone[12];
    unsigned int sexo, estadocivil, idade; // sexo: (0) Masculino (1) feminino; estadocivil: (0) solteito (1) casado (2) divorciado (3) Viuvo
}CADASTRO;
 
CADASTRO pessoa[5];

void leDados(){
    int i;
    char temp;
    for(i=0; i<2; i++){
        printf("Forneça os dados da pessoa %02d\n", i+1);
        printf("Nome: ");
        gets(pessoa[i].nome);
        while (strlen(pessoa[i].nome) > 200){
            printf("Nome invalido, digite novamente: ");
            gets(pessoa[i].nome);
        }
        
        printf("Identidade: ");
        gets(pessoa[i].identidade);
        while (strlen(pessoa[i].identidade) != 9){
            pessoa[i].identidade[0] = '\0';
            printf("Identidade invalida, digite novamente: ");
            gets(pessoa[i].identidade);
        }
 
        printf("CPF: ");
        gets(pessoa[i].cpf);
        while (strlen(pessoa[i].cpf) != 11){
            pessoa[i].cpf[0] = '\0';
            printf("CPF invalido, digite novamente: ");
            gets(pessoa[i].cpf);
        }
 
        printf("Telefone: ");
        gets(pessoa[i].telefone);
        while (strlen(pessoa[i].telefone) != 11){
            printf("Número de telefone invalido, digite novamente: ");
            gets(pessoa[i].telefone);
        }
        
        printf("CEP: ");
        gets(pessoa[i].residencia.cep);
        while (strlen(pessoa[i].residencia.cep) != 8){
            printf("CEP invalido, digite novamente: ");
            gets(pessoa[i].residencia.cep);
        }
 
        printf("Rua: ");                                            
        gets(pessoa[i].residencia.rua);
        while (strlen(pessoa[i].residencia.rua) > 100){
            printf("Rua invalida, digite novamente: ");
            gets(pessoa[i].residencia.rua);
        }
        
        
        printf("Bairro: ");
        gets(pessoa[i].residencia.bairro);
        while (strlen(pessoa[i].residencia.bairro) > 100){
            printf("Bairro invalido, digite novamente: ");
            gets(pessoa[i].residencia.bairro);
        }
        
        
        printf("Cidade: ");
        gets(pessoa[i].residencia.cidade);
        while (strlen(pessoa[i].residencia.cidade) > 100){
            printf("Cidade invalida, digite novamente: ");
            gets(pessoa[i].residencia.cidade);
        }
        
        printf("Estado: ");
        gets(pessoa[i].residencia.estado);
        while (strlen(pessoa[i].residencia.estado) != 2){
            printf("Estado invalido, digite novamente: ");
            gets(pessoa[i].residencia.estado);
        }
        
        printf("Salario: ");
        scanf("%f", &pessoa[i].salario);
        do {} while(getchar()!='\n');
 
        do{
            printf("Sexo (m)asculino ou (f)eminino: ");
            temp = getchar();
            do {} while(getchar()!='\n');
        } while((temp != 'f') && (temp != 'm'));
        switch(temp){
            case 'm':
                pessoa[i].sexo = 0;
                break;
            case 'f':
                pessoa[i].sexo = 1;
                break;
        }

         do{
            printf("Estado Civil (s)olteiro, (c)asado, (d)ivorciado ou (v)iuvo: ");
            temp = getchar();
            do {} while(getchar()!='\n');
        } while((temp != 's') && (temp != 'c') && (temp != 'd') && (temp != 'v'));
        switch(temp){
            case 's':
                pessoa[i].estadocivil = 0;
                break;
            case 'c':
                pessoa[i].estadocivil = 1;
                break;
            case 'd':
                pessoa[i].estadocivil = 2;
                break;
            case 'v':
                pessoa[i].estadocivil = 3;
                break;
        }

        printf("Idade: ");
        scanf("%d", &pessoa[i].idade);
        do {} while(getchar()!='\n');
    }
}

void maior_idade(void){
    int i, m;
    m = 0;
    for(i=1; i<2; i++)
    if(pessoa[i].idade > pessoa[m].idade){
        m = i;
    }
    printf("Pessoa mais velha: %s\n", pessoa[m].nome);
}
void men(void){
    int i;
    for (i = 0; i < 2; i++){
        if (pessoa[i].sexo == 0){
            printf("A pessoa %s é do sexo masculino", pessoa[i].nome);
        }
    }
}

void sal(void){
    int i;
    for (i=0; i<2; i++)
    {
        if(pessoa[i].salario > 1000){
            printf("%s tem um salario maior que R$1.000.00\n", pessoa[i].nome);
        }
    }
}

void iden(void){
    int i, igual, j;
    char sex[] = {'m', 'f'}, ec[] = {'s', 'c', 'd', 'v'};
    char ident[10];
    printf("RG a ser buscado: ");
    gets(ident);
    while (strlen(ident) != 9){
        ident[0] = '\0';
        printf("Identidade invalida, digite novamente: ");
        gets(ident);
    }
    for(i=0; i<2; i++){
        
        if (strcmp(ident, pessoa[i].identidade)==0){
            printf("\nNOME: %s\n", pessoa[i].nome);
            printf("RG: %s\n", pessoa[i].identidade);
            printf("CPF: %s\n", pessoa[i].cpf);
            printf("TELEFONE: %s\n", pessoa[i].telefone);
            printf("CEP: %s\n", pessoa[i].residencia.cep);
            printf("RUA: %s\n", pessoa[i].residencia.rua);
            printf("BAIRRO: %s\n", pessoa[i].residencia.bairro);
            printf("CIDADE: %s\n", pessoa[i].residencia.cidade);
            printf("ESTADO: %s\n", pessoa[i].residencia.estado);
            printf("SALARIO: %.2f\n", pessoa[i].salario); 
            printf("SEXO: %c\n", sex[pessoa[i].sexo]);
            printf("ESTADO CIVIL: %c\n",ec[pessoa[i].estadocivil]);
            printf("IDADE: %d\n", pessoa[i].idade);
            i = 3;
        }
    }
    if(i==2){
        printf("RG não encontrado\n");
    }
}

int main(void){
    int i;
    leDados();
    /* for(i=0; i<2; i++){
        printf("\nNOME: %s\n", pessoa[i].nome);
        printf("RG: %s\n", pessoa[i].identidade);
        printf("CPF: %s\n", pessoa[i].cpf);
        printf("TELEFONE: %s\n", pessoa[i].telefone);
        printf("CEP: %s\n", pessoa[i].residencia.cep);
        printf("Rua: %s\n", pessoa[i].residencia.rua);
        printf("Bairro: %s\n", pessoa[i].residencia.bairro);
        printf("Cidade: %s\n", pessoa[i].residencia.cidade);
        printf("Estado: %s\n", pessoa[i].residencia.estado);
        printf("SALARIO: %.2f\n", pessoa[i].salario); 
        printf("SEXO: %d\n", pessoa[i].sexo);
        printf("ESTADO CIVIL: %d\n", pessoa[i].estadocivil);
        printf("IDADE: %u\n", pessoa[i].idade);
    } */
    printf("\n");
    maior_idade();
    printf("\n");
    men();
    printf("\n");
    sal();
    printf("\n");
    iden();
    return 0;
}
