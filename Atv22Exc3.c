#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int num1;

    printf("digite um numero para verificar se eh multiplo de 3 ");
    scanf("%i", &num1);

    if (num1 % 3 == 0)
    {
        printf("o valor eh multiplo de 3\n");
    }
    else
    {
        printf("o valor nao eh multiplo de 3\n");
    }

    system ("pause");

    return 0;
}

