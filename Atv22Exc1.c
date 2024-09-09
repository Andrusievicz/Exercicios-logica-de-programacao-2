#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int num1,num2,soma;

    printf("digite o primeiro numero ");
    scanf("%i", &num1);
    printf("digite o segundo numero ");
    scanf("%i", &num2);
    soma = num1+num2;

    if (soma>10)
    {
        printf("o valor eh maior que 10\n");
    }
    else
    {
        printf("o valor eh menor que 10\n");
    }

    system ("pause");

    return 0;
}
