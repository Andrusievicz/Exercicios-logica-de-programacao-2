#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //declaração da variavel
    int num1=0;
    //while para contar até 200
    while (num1<=200)
    {
        if (num1 % 5 == 0) //if para definir que é divisivel por 5
        {
            printf(" ");
        }
        else               //else para imprimir os não divisiveis por 5
        {
            printf("%i ", num1);
        }
        num1++;
        printf("\n");
    }

    system ("pause");

    return 0;
}
