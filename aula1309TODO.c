#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j,col,tipo,linha,soma,somaCol,somaDiag1 = 0,somaDiag2 = 0;
    

    // Recebe como 1 e 0 ou 0 e X
    printf("Digite \t'0'\t se prefere os algarismos 1 e 0, ou \t'1'\t se preferir 0 e X\n");
    scanf("%d",&tipo);

    while (tipo < 0 || tipo > 1)
    {
        printf("Digite '0' para 1 e 0, ou '1' para 0 e X\n");
        scanf("%d",&tipo);
    }
    

    // Recebe o tamanho da matriz
    printf("Digite a numero de colunas e linhas da matriz\n");
    scanf("%d %d",&col,&linha);
    while (col < 0 && linha < 0)
    {
        printf("Digite um numero valido de colunas e linhas\n");
        scanf("%d %d",&col,&linha);
    }

    int matriz[linha + 1][col + 1];
    
    //

    // Recebe os digitos da matriz

    printf("Digite os digitos da matriz\n");
    for (i = 0; i < linha; i++) 
    {
        for (j = 0; j < col; j++)
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

        

    if (linha == col)                   // Verifica se a matriz e quadrada
    {
        for (i = 0; i < col; i++) 
        {   
            soma = 0;

            for (j = 0; j < col; j++)
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

                if ((i + j) == (col - 1))
                {
                    if (matriz[i][j] == 1)
                    {
                        somaDiag2 ++;           // Procura diagonal secun com carac iguais
                    }
                }
            }
            if (soma == col || soma == 0)
            {
                printf("A linha %d possui caracteres iguais\n",i + 1);
            }    
        }
    
    // Procura as colunas iguais

    for (j = 0; j < col; j++) 
    {   
        somaCol = 0;
        for (i = 0; i < linha; i++)
        {
            if (matriz[i][j] == 0)
            {
                somaCol ++;
            }
        }
        if (somaCol == col || somaCol == 0)
        {
            printf("A coluna %d possui caracteres iguais\n",j + 1);
        }
    }
    // Diz se os valores das diagonais sao iguais

    if (somaDiag1 == col || somaDiag1 == 0)
    {
        printf("A diagonal principal possui caracteres iguais\n");
    }
    if (somaDiag2 == col || somaDiag2 == 0)
    {
        printf("A diagonal segundaria possui caracteres iguais\n");
    }
    }

    // Matriz nao quadrada

    else
    {
        for (i = 0; i < linha; i++) 
        {   
            soma = 0;

            for (j = 0; j < col; j++)
            {
                if (matriz[i][j] == 1)  
                {
                    soma ++;                // Procura linhas com carac iguais
                }
            }
            if (soma == col || soma == 0)
            {
                printf("A linha %d possui caracteres iguais\n",i + 1);
            }  
        }
    
    // Procura as colunas iguais

    for (j = 0; j < col; j++) 
    {   
        somaCol = 0;
        for (i = 0; i < linha; i++)
        {
            if (matriz[i][j] == 0)
            {
                somaCol ++;
            }
        }
        if (somaCol == linha || somaCol == 0)
        {
            printf("A coluna %d possui caracteres iguais\n",j + 1);
        }
    }
    }
    
    
    
    
    for(i = 0; i < linha; ++i)
    {
        for(j = 0; j < col ; ++j) 
        {    
            printf("%d\t",matriz[i][j]);
        }
    printf("\n");
    }
    
    
    return 0;
}
