/*  
 *  Exercicio 3 lista 4   
 *  imprime caracter n vezes e acordo com
 *  o input de colunas e linhas do usuario 
 *  forma de meia piramide invertida
 * 
*/
#include <stdio.h>

int main(void)
{
    int linha,n = 0;

    printf("Digite o numero de linhas\n");
    scanf("%d",&linha);

    while (linha < 0)
    {
        printf("Digite um numero valido de linhas\n");
        scanf("%d",&linha);
    }

    for (int i  = 0; i < linha; i++)
    {
        printf("\n");
        for (int j = linha; j > i; j--)
        {
            printf("*");
        }   
    }
    printf("\n");
     
    return 0;
    
}
