#include<stdio.h>

int divs(int valor, int *maximo, int *minimo)
{   
    int i = 2;
    while (i < 12)
    {
        if (valor % i == 0){
            if (*maximo == 0){
                *minimo = i;
            }
            *maximo = i;
        }   
        i ++;  
    }
    
    
/*
   if (*maximo != 0)
       return 1;
   else
       return 0;
   
  */ 
   
}


int main(void)
{
   int n,max = 0,min = 0,resultado;

   printf("Digite um numero\n");
   scanf("%d",&n);

   resultado = divs(n,&max, &min);
   //if (resultado == 1)
   {
       printf("O minimo divisor e: %d e o maior e: %d",min,max);
   }
   
   printf("%d\n",resultado);
   
   
   return 0;
   
}
