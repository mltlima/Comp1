/*
    Organiza os vetores em ordem alfabetica, conta a 
    quantidade de vogais e letras as
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char cadeia1[81],cadeia2[81];
    int i, vogais,letraA;
    vogais = 0;
    letraA = 0;
    
    printf("Entre a primeira cadeia: ");
    fgets(cadeia1, 81, stdin);

    printf("Entre a segunda cadeia: ");
    fgets(cadeia2, 81, stdin);

    // Compara as duas cadeias

    if (strcmp(cadeia1,cadeia2) > 0)
    {
       printf("%s \n %s\n",cadeia2, cadeia1);
    }
    
    else if (strcmp(cadeia1,cadeia2) < 0)
    {
        printf("%s \n %s\n",cadeia1,cadeia2);
    }

    else
    {
        printf("As cadeias sao iguais");
    }
    

    
    // Vogais e letras a na Primeira cadeia

   
    for(i=0; cadeia1[i]!='\0'; ++i)
    {
        if(cadeia1[i]=='a' || cadeia1[i]=='e' || cadeia1[i]=='i' ||
           cadeia1[i]=='o' || cadeia1[i]=='u')
        {
            ++vogais;
        }
        if (cadeia1[i]=='a')
        {
            ++letraA;
        }
        
        
    }

    // Vogais e letras s na segunda cadeia

    
    for(i=0; cadeia2[i]!='\0'; ++i)
    {
        if(cadeia2[i]=='a' || cadeia2[i]=='e' || cadeia2[i]=='i' ||
           cadeia2[i]=='o' || cadeia2[i]=='u')
        {
            ++vogais;
        }
        if (cadeia2[i]=='a')
        {
            ++letraA;
        }
    }
    printf("Vogais nas cadeias: %d \n",vogais);
    printf("Letras a nas cadeias: %d \n",letraA);
    
    return 0;
}
