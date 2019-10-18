#include<stdio.h>
#include<stdlib.h>

struct Endereco
{
   char rua[80], bairro[50], cidade[50], estado[50];
   int cep;
};


struct Cadastro
{
   char nome[50], estadoCivil[20], sexo[20];
   int salario, identidade, CPF, telefone, idade;
   struct Endereco adress;  
};


int main(void)
{  
   struct Cadastro cadastro[5];

   // Recebe os nomes dos usuarios
   printf("Digite os nomes dos 5 usuarios:\n");
   for (int i = 0; i < 5; i++)
   {
      printf("Digite o nome do usuario %d\n",i + 1);
      scanf("%50s",cadastro[i].nome);
   }
   
   for (int j = 0; j < 2; j++)
   {
      for (int i = 0; i < 12; i++)
      {
         printf("Digite o sexo do usuario %d\n",j + 1);
         fgets(cadastro[j].sexo,20,stdin);

         printf("Digite o estado civil do usuario %d\n",j + 1);
         fgets(cadastro[j].estadoCivil,20,stdin);

         printf("Digite o salario do usuario %d\n",j + 1);
         scanf("%i",&cadastro[j].salario);

         printf("Digite a identidade do usuario %d\n",j + 1);
         scanf("%d",&cadastro[j].identidade);

         printf("Digite o CPF do usuario %d\n",j + 1);
         scanf("%d",&cadastro[j].CPF);

         printf("Digite o telefone do usuario %d\n",j + 1);
         scanf("%d",&cadastro[j].telefone);

         printf("Digite a idade do usuario %d\n",j + 1);
         scanf("%d",&cadastro[j].idade);

         printf("Digite o CEP do usuario %d\n",j + 1);
         scanf("%d",&cadastro[j].adress.cep);

         printf("Digite a rua do usuario %d\n",j + 1);
         fgets(cadastro[j].adress.rua,80,stdin);

         printf("Digite o bairro do usuario %d\n",j + 1);
         fgets(cadastro[j].adress.bairro,80,stdin);

         printf("Digite a cidade do usuario %d\n",j + 1);
         fgets(cadastro[j].adress.cidade,80,stdin);

         printf("Digite o estado do usuario %d\n",j + 1);
         fgets(cadastro[j].adress.estado,80,stdin);
      }      
   printf("a rua do usuario 1 %s\n",cadastro[0].adress.rua);
   } 
   
}

