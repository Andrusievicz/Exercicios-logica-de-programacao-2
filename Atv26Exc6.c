#include<stdio.h>
#include<stdlib.h>

int main ()
{
        //introdu��o da variavel
    int num1=10;
    //while para contar at� 100 do 10
    while (num1<=100)
    {
        if (num1 % 2 == 1)
            printf("%d ", num1);
            num1++;
    }

    system ("pause");

    return 0;
}

