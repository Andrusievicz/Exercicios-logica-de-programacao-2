#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //declara��o da variavel
    int num1=0;
    //while para contar at� 200
    while (num1<=200)
    {
        if (num1 % 5 == 0) //if para definir que � divisivel por 5
        {
            printf(" ");
        }
        else               //else para imprimir os n�o divisiveis por 5
        {
            printf("%i ", num1);
        }
        num1++;
        printf("\n");
    }

    system ("pause");

    return 0;
}
