#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num1,num2,num3;

    printf("digite o primeiro numero ");
    scanf("%i", &num1);
    printf("digite o segundo numero ");
    scanf("%i", &num2);
    printf("digite o terceiro numero ");
    scanf("%i", &num3);

    if (num1>num2 && num1>num3)
    {
        printf("o maior numero eh %i \n", num1);
    }
    if (num2>num1 && num2>num3)
    {
        printf("o maior numero eh %i \n", num2);
    }
    if (num3>num1 && num3>num2)
    {
        printf("o maior numero eh %i \n", num3);
    }

    system ("pause");

    return 0;
}
