/*  
 *  Exercicio 1 lista Struct   
 *  usuario preenche 5 cadastros
 *  encontra pessoa com a maior idade
 *  encontra pessoas do sexo masculino
 *  encontra pessoas com salario maior que 1000
 *  imprimo dados a partir da identidade
 * 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Endereco
{
   char rua[200], bairro[100], cidade[100], estado[50], cep[9];
};


struct Cadastro
{
   char nome[150],CPF[12],telefone[12],identidade[10];
   float salario;
   unsigned int sexo, estadoCivil,idade;
   struct Endereco adress;  
};

struct Cadastro cadastro[5];

// Dados

void dados()
{
   char temp;

   for (int i = 0; i < 2; i++){
      printf("Digite o nome do usuario %d: ",i + 1);
      gets(cadastro[i].nome);
      while (strlen(cadastro[i].nome) > 200){
          printf("Nome invalido, digite novamente: ");
          gets(cadastro[i].nome);
      }

      // Sexo do usuario
      do{
         printf("Sexo (m)asculino ou (f)eminino: ");
         temp = getchar();
         do {} while(getchar()!='\n');
      } while((temp != 'f') && (temp != 'm'));
      switch(temp){
         case 'm':
            cadastro[i].sexo = 0;
            break;
         case 'f':
            cadastro[i].sexo = 1;
            break;
      }
      
      // Estado Civil do usuario
      do{
          printf("Estado Civil (s)olteiro, (c)asado, (d)ivorciado ou (v)iuvo: ");
          temp = getchar();
          do {} while(getchar()!='\n');
      } while((temp != 's') && (temp != 'c') && (temp != 'd') && (temp != 'v'));
      switch(temp){
         case 's':
           cadastro[i].estadoCivil = 0;
           break;
         case 'c':
             cadastro[i].estadoCivil = 1;
             break;
         case 'd':
             cadastro[i].estadoCivil = 2;
             break;
         case 'v':
             cadastro[i].estadoCivil = 3;
             break;
      }

      
      printf("Identidade: ");
      gets(cadastro[i].identidade);
      while (strlen(cadastro[i].identidade) != 9){
          cadastro[i].identidade[0] = '\0';
          printf("Identidade invalida, digite novamente: ");
          gets(cadastro[i].identidade);
      }

      printf("CPF: ");
      gets(cadastro[i].CPF);
      while (strlen(cadastro[i].CPF) != 11){
          cadastro[i].CPF[0] = '\0';
          printf("CPF invalido, digite novamente: ");
          gets(cadastro[i].CPF);
      }

      printf("Telefone: ");
      gets(cadastro[i].telefone);
      while (strlen(cadastro[i].telefone) != 11)
      {
         printf("Digite um numero de telefone valido: ");
         gets(cadastro[i].telefone);
      }
      
      
      
      printf("CEP: ");
      gets(cadastro[i].adress.cep);
      while (strlen(cadastro[i].adress.cep) != 8){
          printf("CEP invalido, digite novamente: ");
          gets(cadastro[i].adress.cep);
      }

      printf("Rua: ");                                            
      gets(cadastro[i].adress.rua);
      while (strlen(cadastro[i].adress.rua) > 100){
          printf("Rua invalida, digite novamente: ");
          gets(cadastro[i].adress.rua);
      }
      
      
      printf("Bairro: ");
      gets(cadastro[i].adress.bairro);
      while (strlen(cadastro[i].adress.bairro) > 100){
          printf("Bairro invalido, digite novamente: ");
          gets(cadastro[i].adress.bairro);
      }
      
      
      printf("Cidade: ");
      gets(cadastro[i].adress.cidade);
      while (strlen(cadastro[i].adress.cidade) > 100){
          printf("Cidade invalida, digite novamente: ");
          gets(cadastro[i].adress.cidade);
      }
      
      printf("Estado: ");
      gets(cadastro[i].adress.estado);
      while (strlen(cadastro[i].adress.estado) > 50){
            printf("Estado invalido, digite novamente: ");
            gets(cadastro[i].adress.estado);
        }
      
      printf("Salario: ");
      scanf("%f", &cadastro[i].salario);
      do {} while(getchar()!='\n');


      printf("Idade: ");
      scanf("%d", &cadastro[i].idade);
      do {} while(getchar()!='\n');   
      
   }
   
}

// Funcao pessoa com a maior idade
void maiorIdade(void)
{
   int j = 0;
   for (int i = 0; i < 2; i++)
   {
      if (cadastro[i].idade > cadastro[j].idade)
      {
         j = i;
      }
   }
   printf("A pessoa com a maior idade e: %s\n",cadastro[j].nome);
}

// Pessoas do sexo masculino
void homens(void)
{  
   for (int i = 0; i < 2; i++){
      if (cadastro[i].sexo == 0)
         printf("O usuario %s e do sexo masculino\n",cadastro[i].nome);     
   }   
}

// salario maior que 1000
void salario(void)
{
   for (int i = 0; i < 2; i++)
    {
        if(cadastro[i].salario > 1000){
            printf("%s tem um salario maior que R$1.000.00\n", cadastro[i].nome);
        }
    }
}

// Busca dados a partir da identidade
void identidade(void)
{
   char id[10];
   //char sexo[] = {'masculino','feminino'};
   //char esCiv[] = {'solteiro(a)','casado(a)','divorciado(a)','viuvo(a)'}; 
   printf("Digite a identidade do usuario que deseja fazer a busca\n");
   gets(id);
   while(strlen(id) != 9){
      id[0] = '\0';
      printf("Digite uma identidade valida: ");
      gets(id);
   }

   for (int i = 0; i < 2; i++)
   {
      if (strcmp(id,cadastro[i].identidade) == 0){
            printf("\nNOME: %s\n", cadastro[i].nome);
            printf("RG: %s\n", cadastro[i].identidade);
            printf("CPF: %s\n", cadastro[i].CPF);
            printf("TELEFONE: %s\n", cadastro[i].telefone);
            printf("CEP: %s\n", cadastro[i].adress.cep);
            printf("RUA: %s\n", cadastro[i].adress.rua);
            printf("BAIRRO: %s\n", cadastro[i].adress.bairro);
            printf("CIDADE: %s\n", cadastro[i].adress.cidade);
            printf("ESTADO: %s\n", cadastro[i].adress.estado);
            printf("SALARIO: %d\n", cadastro[i].salario);
            // Sexo
            int temp = cadastro[i].sexo;
            switch (temp)
            {
            case 0:
               printf("SEXO Masculino\n");
               break;
            
            case 1:
               printf("SEXO Feminino\n");
               break;
            }
            // Estado Civil
            switch (cadastro[i].estadoCivil)
            {
            case 0:
               printf("ESTADO CIVIL: solteiro(a)\n");
               break;
            
            case 1:
               printf("ESTADO CIVIL: casado(a)\n");
               break;
            case 2:
               printf("ESTADO CIVIL: divorciado(a)\n");
               break;
            case 3:
               printf("ESTADO CIVIL: viuvo(a)\n");
               break;
            }

            printf("IDADE: %d\n", cadastro[i].idade);
            break;
         }
      printf("Identidade nao foi encontrada\n");
   }
   
}
int main(void)
{  
   dados();   
   maiorIdade();
   homens();
   salario();
   identidade();
   return 0;
}

