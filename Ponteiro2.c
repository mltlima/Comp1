#include<stdio.h>

void calcula(int *x, int *y)
{
    int x1 = *x;
    int y1 = *y;
    *x = x1 + y1;
    *y = y1 - x1;
}


int main(void)
{
   int x, y;
   printf("Digite um valor para x e y\n");
   scanf("%d %d",&x, &y);
   calcula(&x, &y);
   printf("a soma e : %i, a diferenca e: %i\n", x, y);
   return 0;
   
}
