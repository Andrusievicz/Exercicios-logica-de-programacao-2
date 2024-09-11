#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //introdução da variavel
    int counter=1;
    //for pra contagem de 1 a 100 mostrando os pares
    for (counter; counter<=100; counter++)
    {
        if (counter%2==0)
        {
            printf("%i ", counter);
        }
    }

    system ("pause");

    return 0;
}

