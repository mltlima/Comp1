#include <stdio.h>
#include <string.h>

int main(void)
{
    int matriz[4][4], temp[4];
    int i, j;

    // 

    printf("Digite os digitos da matriz\n");
    for (i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        
            while(matriz[i][j] =! (1 || 0))
            {
                printf("Digite um numero 0 ou 1");
                scanf("%d", &matriz[i][j]);
            }
        }

    }
    /* 
    for (i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3 ; ++j)
        {
            if ((matriz[i][j] == (0 || 1)))
            {
                continue;
            }
            
            else if (matriz[i][j] =! (0 || 1))
            {
                return 1;
            }
            
            strcpy(temp,matriz[i]);
        }
    */  
           
    
    printf("%d",temp);
    /* 
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 3 ; ++j) 
        {    
            printf("%d\t",matriz[i][j]);
        }
    printf("\n");
    }
    */
    return 0.;

}
