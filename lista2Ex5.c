#include <stdio.h>
int main(void)
{
    int i, x, alunos;
    float soma,nota,prova,teste;
    
    
    
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
        for ( x = 0; x < 4; ++x)
        {
            if (x == 0)
            {
                printf("Digite a nota da prova\n");
                scanf("%f",prova);
                if (prova < 0 || prova > 10)
                {
                    printf("Digite uma nota valida\n");
                    return 0;
                }
                
            }
            
            printf("Digite a nota do teste %d aluno ",x);
            scanf("%f",&teste);
            if (teste < 0 || teste > 10)
                {
                    printf("Digite uma nota valida\n");
                    return 0;
                }
            for (int y = 0; y < 3; y++)
            {
                
            }
            
            soma += nota;
            printf("As notas do aluno %d sao:\n",i);
        }
    
    
        
    
    
    }
   
     
    
    
    
    

    
    
}
