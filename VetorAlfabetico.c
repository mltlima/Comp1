/*
     * Programa le 80 palavras e as guarda em uma array
     * Organiza as palavras em ordem alfabetica. Da os valores digitados e os 
     * valores organizados em duas colunas.
     * Aluno: Miguel Lima Tavares
*/
 
#include <stdio.h>
#include <string.h>

int main(void)
{

    char palavra[81][10], palavraOrig[81][10], temp[10];
    int i, j;

    
    printf("Enter as 80 palavras \n");

    for (i = 0; i < 81; i++) 
    {
        scanf("%s", palavra[i]);
        strcpy(palavraOrig[i], palavra[i]);
    }

    for (i = 0; i < 81 - 1 ; i++)
    {
        for (j = i + 1; j < 81; j++)
        {
            if (strcmp(palavra[i], palavra[j]) > 0) 
            {
                strcpy(temp, palavra[i]);
                strcpy(palavra[i], palavra[j]);
                strcpy(palavra[j], temp);
            }
        }
    }

    // Devolve os numeros organizados

    for (i = 0; i < 81; i++) 
    {
        printf("%s\t\t%s\n", palavraOrig[i], palavra[i]);
    }

    

}
