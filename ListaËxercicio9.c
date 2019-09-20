/*

 * Exercicio 9 Lista 6
 * Recebe os valores de dois vetores e 
 * os organiza
 * 
 */

#include <stdio.h>
#include <string.h>

int main(void)
{   
    int N,M;
    int temp[10];

    // Recebe o tamanho dos dois vetores

    printf("Digite o tamanho dos dois vetores ate 1000\n");
    scanf("%d %d",&N,&M);
    int vetorA[N + 1][1],vetorB[M + 1][1];

    // Valida os valores digitados

    while ((N < 1 || N > 1000) || (M < 1 || M > 1000))
        {
        printf("Digite um tamanho valido para os vetores\n");
        scanf("%d %d",&N,&M);
        int vetorA[N + 1][1],vetorB[M + 1][1];
        }
    

    // Recebe os valores do vetor A

    printf("Digite os digitos do vetor A\n");    
    for (int i = 0; i < N; i++) 
    {
        
        scanf("%d",&vetorA[i][1]);                      
        
        // Verifica se o digito e  valido
        
        while ((vetorA[i][1] < 0) || (vetorA[i][1] > 9))
        {
            printf("Digite um numero entre 0 e 9\n");
            scanf("%d",&vetorA[i][1]);
        }    
    }

    // Recebe os valores do vetor B

    printf("Digite os digitos do vetor B\n");    
    for (int i = 0; i < N; i++) 
    {
        
        scanf("%d",&vetorB[i][1]);                      
        
        // Verifica se o digito e  valido
        
        while ((vetorB[i][1] < 0) || (vetorB[i][1] > 9))
        {
            printf("Digite um numero entre 0 e 9\n");
            scanf("%d",&vetorB[i][1]);
        }    
    }

    // Compara os vetores

    int C[N + M + 1][1];
    int n = 0;

    for (int i = 0; i < N; i++)
    {   
        if (vetorA[n][1] < vetorB[i][1])
    {
            C[i][1] = vetorA[i][1];
            n ++;
    }
        else 
        {
            C[i][1] = vetorB[i][1];
        }  
    }
    
    for (int j = 0; j < N + M; j++)
    {
        printf("%d\n",C[j][1]);
        
    }
    


    /* 


    int C[N + M + 1][1];
    for (int i = 0; i < N || M; i++)
    {
       if (vetorA[i][1] < vetorB[i][1])
    {
        C[i][1] = vetorA[i][1];
    }
        else
        {
            C[i][1] = vetorB[i][1];
        }
            
    }
    
    for (int j = 0; j < N + M; j++)
    {
        printf("%d\n",C[j][1]);
        
    }
    
   */ 
}
