#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
//declaração da variavel
    int num1;
//leitura da variavel
    printf("digite um valor para verificar se eh par ou impar ");
    scanf("%i", &num1);
//condições para definir par ou impar
    if (num1 % 2 == 0)
    {
       printf("o valor eh par \n");
    }
    if (num1 % 2 == 1)
    {
        printf(" o valor eh impar \n");
    }

    system ("pause");

    return 0;
}

