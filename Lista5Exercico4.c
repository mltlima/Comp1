/*  
 *  Exercicio 4 lista 5   
 *  Calculo pi a partir da quantidade de numeros aleatorios
 *  dentro de um quarto de circulo
 * 
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    float x,y,modulo;
    float max = 1.0;
    float raio = 1.0;
    float N = 100000.0;
    int dentro = 0;

    srand((unsigned int)time(NULL));

    for (int i = 0 ; i < N; i++) 
    {
        x = (float)rand( )/((float)RAND_MAX/1.0);
        y = (float)rand( )/((float)RAND_MAX/1.0);

        modulo = sqrt( (x * x) + (y * y) );

        if (modulo < raio)
        {
            dentro ++;
        }
    }
    printf("%d  numeros dentro do quarto de circulo\n",dentro);
    printf("Pi = %f\n",4 * dentro / N);
    
return 0 ;
}
