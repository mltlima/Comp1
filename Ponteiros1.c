#include<stdio.h>
#include<string.h>

void copia(char *par1, char *par2, int *tamanho)
{  
    int cont = 0;
    while (par1[cont] != '\0'){
        cont ++;
    }
    
    for (int j = 0 ; j < cont; j++){
        par2[j] = par1[j];
    }

    *tamanho = cont;
}
  


int main(void)
{
   char vetor1[100];
   char vetor2[100];
   int tam;

   printf("Digite uma frase\n");
   scanf("%s",vetor1);
   copia(vetor1, vetor2, &tam);
   printf("o vetor e: %s de tamanho %d\n", vetor2, tam);
   return 0;
   
}
