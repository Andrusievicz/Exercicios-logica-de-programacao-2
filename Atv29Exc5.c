#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //introdução da variavel
    int counter=0;
    //for pra contagem de 0 a 500 com multiplos de 4
    for (counter; counter<=500; counter++)
    {
        if (counter%4==0)
        {
            printf("%i ", counter);
        }
    }

    system ("pause");

    return 0;
}

