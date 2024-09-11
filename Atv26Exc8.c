#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //introdução das variaveis
    int num1=1,num2;
    //leitura da variavel
    printf("Digite um valor ");
    scanf("%i", &num2);

    printf("Impar\t PARES\n");
    //while para tabela de pares e impares
    while (num1<=num2)
    {
        if (num1 % 2 == 1)
        {
            printf("%i\t", num1);
        }
        else
        {
            printf("%i\n", num1);
        }
        num1++;
    }


    system ("pause");

    return 0;
}
