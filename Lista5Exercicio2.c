/*  
 *  Exercicio 2 lista 5   
 *  Conta a quantidade de numeros pares e impares
 *  em uma sequencia aleatoria de 1 milhao de numeros
 *  e sua porcentagem
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
    int i,n,par = 0,impar = 0;

    srand((unsigned int)time(NULL));

    for ( i = 0 ; i < 1000000; i++) 
    {
        n = rand ( ) ;
        if (n % 2 == 0)
        {
            par ++;
        }
        else
        {
            impar ++;
        }
    }
    printf("%d numeros pares e %d numeros impares\n",par,impar) ;
    printf("%.2f%% sao pares e %.2f%% sao impares\n",par/1000000.0,impar/1000000.0);
return 0 ;
}
