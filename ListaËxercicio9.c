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
    for (int i = 0; i < M; i++) 
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

    int C[N + M + 2][1];
    int x = 0,j = 0, i = 0;

    while (x < N + M)
    {
        if (i == N)
        {
            C[x][1] = vetorB[j][1];
            j ++;
        }
        else if (j == M )
        {
            C[x][1] = vetorA[i][1];
            i ++;
        }

        else if (vetorA[i][1] < vetorB[j][1]) 
        {
            C[x][1] = vetorA[i][1];
            i ++;
        }
        else if (vetorA[i][1] == vetorB[j][1])
        {
            C[x][1] = vetorA[i][1];
            C[x + 1][1] = vetorB[j][1];
            i ++;
            j ++;
            x ++;
        }   
        else if (vetorA[i][1] > vetorB[j][1])
        {
            C[x][1] = vetorB[j][1];
            j ++;
        }
        x ++;
    }
    
    for (int j = 0; j < N + M; j++)
        {
        printf("%d\n",C[j][1]);
        }
    return 0;
}
