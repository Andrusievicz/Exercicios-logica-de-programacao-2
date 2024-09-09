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

    if (soma>20)
    {
        soma = soma+8;
        printf("o valor da soma eh %.1i\n", soma);
    }
    else
    {
        soma = soma-5;
        printf("o valor da soma eh %.1i\n", soma);
    }

    system ("pause");

    return 0;
}

