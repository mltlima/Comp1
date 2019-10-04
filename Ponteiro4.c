#include<stdio.h>
#include<math.h>

int fatores(int vetor[], int n, int *x)
{   
    int contagem = 0;
    // Print a quantidade de vezes que o numero e divisivel por 2
    while (n % 2 == 0) 
    { 
        vetor[contagem] = 2; 
        n = n/2;
        contagem ++; 
    } 
  
    // verifica os impares
  
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n % i == 0) 
        { 
            vetor[contagem] = i; 
            n = n/i;
            contagem ++; 
        } 
    } 
    
    // ultimo primo
    if (n > 2)
    {
        vetor[contagem] = n; 
            contagem ++; 
    }
    
    *x = contagem;
    printf("contagem %d \n",contagem);

    // Print vetor
    for (int i = 0; i < contagem; i++)
    {
        printf("%d\n",vetor[i]);
    }
    
    if (contagem > 10)
        return 1;
    
    else
        return 0;
    
    
    
   
}

int main(void)
{
    int n,f;

    printf("Digite um numero\n");
    scanf("%d",&n);
    int vetor[n];

    fatores(vetor,n,&f);



}

