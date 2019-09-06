#include <stdio.h>
int main(void)
{
    int i, x, alunos;
    float soma,nota,prova,teste,teste1,teste2,teste3;
    
    
    
    printf("Quantos alunos deseja calcular a media?\n");
    scanf("%d",&alunos);

    if (alunos <= 0)
    {
        printf("Digite um numero valido de alunos\n");
        return 0;
    }
    
    for (i = 0; i < alunos; ++i)
    {

    printf("Digite as notas do aluno %d,\n\n",i + 1);
    soma = 0; // Zera as notas ao final do loop para receber as notas do proximo aluno 
      
        //Loop para receber as 3 notas do teste e da prova 
        for ( x = 0; x < 3; ++x)
        {
            if (x == 0)
            {
                printf("Digite a nota da prova do aluno %d\n",i+1);
                scanf("%f",&prova);
                if (prova < 0 || prova > 10)
                {
                    printf("Digite uma nota valida\n");
                    return 0;
                }
                
            }
            
            printf("Digite a nota do teste %d do aluno %d \n",x+1,i+1);
            scanf("%f",&teste);
            if (teste < 0 || teste > 10)
                {
                    printf("Digite uma nota valida\n");
                    return 0;
                }
            if (x == 0)
            {
                teste1 = teste;
            }
            if (x == 1)
            {
                teste2 = teste;
            }
            if (x == 2)
            {
                teste3 = teste;
            }
            
            
            
            
            
            
            soma += teste;
        }
    
        printf("As notas do aluno %d sao:\n",i+1);
        printf("Prova: \t%0.1f\n",prova);
        printf("Teste 1 \t%0.1f",teste1);
        printf("Teste 2 \t%0.1f",teste2);
        printf("Teste 3 \t%0.1f",teste3);
        printf("Nota final\t%0.1f\n",0.8 * prova + 0.2 *(soma/3));
    
        
    
    
    }
   
     
    
    
    
    

    
    
}
