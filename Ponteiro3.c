#include<stdio.h>

int divs(int valor, int *maximo, int *minimo)
{   
    for (int i = 2; i < valor; i++)
    {  
        if (valor % i == 0){
            if (*maximo == 0){
                *minimo = i;
            }
            *maximo = i;   
        }   
    }
    if (*maximo != 0)
        return 1;
    else
        return 0;
   
}

int main(void)
{
   int n,max = 0,min = 0,resultado;

   printf("Digite um numero\n");
   scanf("%d",&n);

    divs(n,&max, &min);
   resultado = divs(n,&max, &min);
   if (resultado == 1)
   {
       printf("O minimo divisor e: %d e o maior e: %d\n",min,max);
   }
   
   printf("%d\n",resultado);
   
   
   return 0;
   
}
