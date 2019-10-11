/*
 *  Aluno: Miguel Lima Tavares
 *  Uma função que recebe como argumento um ponteiro
 *  para um vetor de ponteiros para caracteres
 *  Area de memoria de 10 elementos
 *  cada elemento aponta para uma string de tamanho 30.
 *  UFRJ
 */
#include<stdio.h>
#include<stdlib.h>

int funcao(char **p)
{   
   char **p2;
   printf("%p\n",p);
   p2 = (char **)malloc(10 * sizeof(char *));
   if (p2 == NULL)
   {
       printf("Falta memoria\n");
       return 1;
   }
   p = p2;
   printf("%p\n",p);
   for (int  i = 0; i < 10; i++)
   {
      *(p + i) = (char *)malloc(30 * sizeof(char));
      if (*(p + i) == NULL)
       {
           printf("Falta memoria\n");
           return 1;
       }
      printf("%p\n",*(p + i)); 
   }
   
}

int main(void)
{
  char ** p1;
  funcao(p1);
   
   return 0;
   
}
