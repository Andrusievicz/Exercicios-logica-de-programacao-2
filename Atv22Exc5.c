#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int num1;

    printf("digite um numero para verificar se eh multiplo de 3 ou 7 ");
    scanf("%i", &num1);

    if (num1 % 3 == 0)
    {
        printf("o valor eh multiplo de 3\n");
    }
    if (num1 % 7 == 0)
    {
        printf("o valor eh multiplo de 7\n");
    }

    system ("pause");

    return 0;
}


