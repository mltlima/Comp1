/*
 *  URI 2588
 *  Ferifica numero minimo de palavras necessarias
 *  para formar um palindromo
 *  Aluno: Miguel Lima Tavares  Comp UFJR
 */


#include <stdio.h> 
#include <limits.h> 
#include <string.h> 
  
// Acha o menor entre dois numeros 
int min(int a, int b) 
{  return a < b ? a : b; } 
  
// Funcao recursiva, acha o menor numero 
// de insercoes
int insercoesMin(char str[], int l, int h) 
{ 
    // Casos base
    if (l > h) return INT_MAX; 
    if (l == h) return 0; 
    if (l == h - 1) return (str[l] == str[h])? 0 : 1; 
  
    // Verifica se primeiro e ultimo caracteres sao
    // iguais e decide qual problema chamar
    return (str[l] == str[h])?  
                     insercoesMin(str, l + 1, h - 1): 
                     (min(insercoesMin(str, l, h - 1), 
                     insercoesMin(str, l + 1, h)) + 1); 
} 
  
// Testa funcoes acima 
int main() 
{ 
    int len,i,n = 0,l = 0,h,meio;
    char str[100];
     
    scanf("%s",str);
    len = strlen(str);
    h = len -1;
    meio = len/2;

    // Checa se e um palindromo
    while (h > 1)
    {
        if(str[l++] != str[meio--])
        {
            n = 1;
            break;
        }
    }
    //printf("%d\n",n);
    if (n == 1)
        printf("%d\n", insercoesMin(str, 0, strlen(str)-1)); 
    
    else
        printf("0\n");
    
    return 0; 
} 
