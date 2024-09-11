#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{

    int num1, num2, num3;
//leitura dos valores
    printf("digite o primeiro valor ");
    scanf("%i", &num1);
    printf("digite o segundo valor ");
    scanf("%i", &num2);
    printf("digite o terceiro valor ");
    scanf("%i", &num3);
//condicionais para definir o maior
    if (num1>num2 && num1>num3)
    {
        printf("\no maior eh %i\n", num1);
    }
    if (num2>num1 && num2>num3)
    {
        printf("\no maior eh %i\n", num2);
    }
    if (num3>num2 && num3>num1)
    {
        printf("\no maior eh %i\n", num3);
    }

    system ("pause");

    return 0;
}
