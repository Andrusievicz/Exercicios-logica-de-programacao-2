#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //introdu��o da variavel
    int num1=0;
    //while para multiplos de 4 at� 500
    while (num1<=500)
    {
        if (num1 % 4 == 0)
            printf("%d ", num1);
            num1++;
    }

    system ("pause");

    return 0;
}
