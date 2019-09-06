/*
    Programa : lista2Ex5.c
    Autor : Miguel Lima Tavares
    Data : 06/09/2019
    Descricao: Calcula a media dos alunos.
*/
#include <stdio.h>
int main(void)
{
    int i, x, alunos;
    float soma,nota,prova,teste,teste1,teste2,teste3;
    
    
    
    printf("Quantos alunos deseja calcular a media?\n");
    scanf("%d",&alunos);

    while(alunos <= 0)
    {
        printf("Digite um numero valido de alunos\n");
        scanf("%d",&alunos);
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
                while (prova < 0 || prova > 10)
                {
                    printf("Digite uma nota valida\n");
                     scanf("%f",&prova);
                }
                
            }
            
            printf("Digite a nota do teste %d do aluno %d \n",x+1,i+1);
            scanf("%f",&teste);
            while (teste < 0 || teste > 10)
                {
                    printf("Digite uma nota valida\n");
                    scanf("%f",&teste);
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
        printf("Prova: \t\t%0.1f\n",prova);
        printf("Teste 1 \t%0.1f\n",teste1);
        printf("Teste 2 \t%0.1f\n",teste2);
        printf("Teste 3 \t%0.1f\n",teste3);
        printf("Nota final\t%0.1f\n\n",0.8 * prova + 0.2 *(soma/3));
    }   
    
}
