#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //introdu��o da variavel
    int num1=0;
    //while para pares at� o 100
    while (num1<=100)
    {
        if (num1 % 2 == 0)
            printf("%d ", num1);
            num1++;
    }

    system ("pause");

    return 0;
}


