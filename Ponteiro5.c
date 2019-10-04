#include<stdio.h>


int  expo(unsigned int base, unsigned int expoente)
{ 
    unsigned int result;
    if (expoente > 0)
    {   
        //printf("%u\n",base);
        //result = ("%u\n",base * expo(base, expoente -1 ));
        return (base * expo(base, expoente -1 ));
        
    }
    
    else if (expoente == 0){
        //printf("%u",result);
       return 1;
    }
    else
        return 0;
    
    
    
    
    
   
}

int main(void)
{
    unsigned int base,expoente,result,resposta;

    printf("Digite o valor da base\n");
    scanf("%u",&base);
    
    printf("Digite o valor do expoente\n");
    scanf("%u",&expoente);

    resposta = expo(base,expoente);
    printf("%u\n",resposta);



}

