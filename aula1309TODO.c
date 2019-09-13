#include <stdio.h>
#include <string.h>

int main(void)
{
    int matriz[4][4], temp[4][4];
    int i, j,soma,somaCol,somaDiag1 = 0,somaDiag2 = 0;

    // Recebe os digitos da matriz

    printf("Digite os digitos da matriz\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&matriz[i][j]);
            
            // Verifica se o digito e  valido

            while ((matriz[i][j] != 1) && (matriz[i][j] != 0))
            {
                printf("Digite o numero 1 ou 0\n");
                scanf("%d",&matriz[i][j]);
            }
            
        }
    }

    // Procura linhas, diagonais e colunas com todos os caracteres iguais

    for (i = 0; i < 3; i++) 
    {   
        soma = 0;

        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] == 1)  
            {
                soma ++;                // Procura linhas com carac iguais
            }

            if (i == j)
            {
                if (matriz[i][j] == 1)
                {
                    somaDiag1 ++;             // Procura diagonal principal com carac iguais
                   
                }
            }

            if ((i + j) == (2))
            {
                if (matriz[i][j] == 1)
                {
                    somaDiag2 ++;           // Procura diagonal secun com carac iguais
                }
            }
        }
        if (soma == 3 || soma == 0)
        {
            printf("A linha %d possui caracteres iguais\n",i + 1);
        }    
    }

    // Procura as colunas iguais

    for (j = 0; j < 3; j++) 
    {   
        somaCol = 0;
        for (i = 0; i < 3; i++)
        {
            if (matriz[i][j] == 0)
            {
                somaCol ++;
            }
        }
        if (somaCol == 3 || somaCol == 0)
        {
            printf("A coluna %d possui caracteres iguais\n",j + 1);
        }
    }
    // Diz se os valores das diagonais sao iguais

    if (somaDiag1 == 3 || somaDiag1 == 0)
    {
        printf("A diagonal principal possui caracteres iguais\n");
    }
    if (somaDiag2 == 3 || somaDiag2 == 0)
    {
        printf("A diagonal segundaria possui caracteres iguais\n");
    }
    
    


    /*
	for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 3 ; ++j) 
        {    
            printf("%d\t",matriz[i][j]);
        }
    printf("\n");
    }
 
    return 0.;
    */
}
