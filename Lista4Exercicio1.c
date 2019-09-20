/*  
 *  Exercicio 1 lista 4   
 *  imprime caracter n vezes e acordo com
 *  o input de colunas e linhas do usuario 
 * 
*/
#include <stdio.h>

int main(void)
{
    int col,linha;

    printf("Digite o numero de colunas e linhas\n");
    scanf("%d %d",&col,&linha);

    while (col < 0 || linha < 0)
    {
        printf("Digite um numero valido de colunas e linhas\n");
        scanf("%d %d",&col,&linha);
    }
    for (int i  = 0; i < linha; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
            printf("*");  
    }
    printf("\n");
     
    return 0;
    
}
