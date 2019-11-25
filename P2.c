#include <stdio.h>
#include <stdlib.h>

#define NUM  5

int main (void) 
{
    FILE *arquivo;

    arquivo = fopen("teste.txt","w+");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir arquivo\n");          // Verifica se o arquivo foi aberto
        return 0;
    }


    printf("Digite os dados para serem gravados no arquivo, ao termina clique ---ctrl + d---\n");
    int c;
    c = getchar();
    while (c != EOF)
    {
        fputc(c, arquivo);
        c = getchar();
    }
    
    rewind(arquivo);

    printf("Agora vamos a leitura do arquivo\n");

    c = fgetc(arquivo);
    while (c != EOF)
    {
        putchar(c);
        c = fgetc(arquivo);
    }

    fclose(arquivo);

    int *test;

    test = (int*)malloc(NUM * sizeof(int));

    if (test == NULL)   
    {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i < NUM; i++)
    {
        scanf("%d\n",&test[i]);
    }


    for (int i = 0; i < NUM; i++)
    {
        printf("%d\n",test[i]);
    }
    

    return 0;
    

    
}
