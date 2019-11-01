/*
    Programa : CompExer9.c
    Autor : Miguel Lima Tavares
    Data : 23/08/2019
    Descricao: Recebe duas datas e diz qual e a mais velha.
*/

#include <stdio.h>

int main(void)
{
    int dia1, mes1, ano1, dia2, mes2, ano2;

    // Recebe a primeira data
    printf("Digite o dia mes e ano da primeira pessoa:\t");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    // Recebe a segunda data
    printf("Digite  o dia mes e ano da segunda pessoa:\t");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    // Validacao das datas

    if ((ano1 < 0 || ano1 > 9999) || (ano2 < 0 || ano2 > 9999))
    {                                                                   // Validacao do ano
        printf("Dite um ano valido\n");
        return 0;
    }

    // Validacao dos meses

    if ((mes1 < 1 || mes1 > 12) || (mes2 < 1 || mes2 > 12))
    {
        printf("Digite um mes valido\n");
        return 0;
    }

    // Validacao dos dias

    if ((dia1 < 1 || dia1 > 31) || (dia2 < 1 || dia2 > 31))
    {
        printf("Digite um dia valido\n");
        return 0;
    }

    // Validacao dos dias terminados em 31

    if ((dia1 == 31 || dia2 == 31) && (mes1 == 2 || mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 ==11 || mes2 == 2 || mes2 == 4 || mes2 == 6 || mes2 == 9 || mes2 == 11))
    {
        printf("Esse mes nao possui 31 dias\n");
        return 0;
    }

    // Validacao do mes de fevereiro e ano bissexto

    if ((mes1 == 2 || mes2 == 2) && (dia1 > 28 || dia2 > 28)) 
    {
        if ((dia1 == 29 || dia2 == 29) && ((ano1 % 400 != 0) || (ano2 % 400 != 0) || (((ano1 % 4 != 0) || (ano2 % 4 != 0)) && (ano1 % 100 == 0 || ano2 % 100 == 0))))
        {
            printf("Verifique a data, este nao e um ano bissexto\n");
            return 0;
        }
        printf("Mes de fevereiro com mais de 28 dias\n");
        return 0;
        
    }


    // Indica quem e mais velho

    if (ano1 < ano2)
    {
        printf("primeiro\n");
    }
    else if (ano2 < ano1)
    {
        printf("segundo\n");
    }
    else if (ano2 == ano1)
    {
        if (mes1 < mes2)
        {
            printf("primeiro\n");
        }
        else if (mes1 == mes2)
        {
            if (dia1 < dia2)
            {
                printf("primeiro\n");
            }
            else if (dia1 == dia2)
            {
                printf("mesmo dia\n");
            }
            else
            {
                printf("segundo\n");
            }    
        }
        else
        {
            printf("segundo\n");
        }    
    }
        
}
