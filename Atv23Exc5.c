#include<stdio.h>
#include<stdlib.h>

int main ()
{

    float produto,venda,lucro1,lucro2;

    printf("Digite o valor do produto ");
    scanf("%f", &produto);

    lucro1 = produto*1.45;
    lucro2 = produto*1.3;

    if (produto<20)
    {
        printf("O produto sera vendido por %.3f\n", lucro1);
    }
    else
    {
        printf("O produto sera vendido por %.3f\n", lucro2);
    }


    system ("pause");

    return 0;
}
