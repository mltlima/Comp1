/*  
 *  Exercicio 3 lista 5   
 *  6 milhoes de numeros aleatorios entre 1 e 6
 *  de um dado 
 * 
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
    int i,n,um=0,dois=0,tres=0,quatro=0,cinco=0,seis=0;
    int max = 6;

    srand(time(NULL));

    for ( i = 0 ; i < 6000000; i++) 
    {
        n = rand( );
        n = n % max + 1;   // Numero entre 1 e 6
        
        switch (n)
        {
        case 1:
            um ++;
            continue;
        case 2:
            dois ++;
            continue;
        case 3:
            tres ++;
            continue;
        case 4:
            quatro ++;
            continue;
        case 5:
            cinco ++;
            continue;
        case 6:
            seis ++;
            continue;
        
        default:
            break;
        }
    }
    
    printf("%.2f%% numeros 1\n %.2f%% numeros 2\n %.2f%% numeros 3\n %.2f%% numeros 4\n %.2f%% numeros 5\n %.2f%% numeros 6,\n"
    ,um/60000.0,dois/60000.0,tres/60000.0,quatro/60000.0,cinco/60000.0,seis/60000.0);
return 0 ;
}
