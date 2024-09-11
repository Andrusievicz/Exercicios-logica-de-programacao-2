#include<stdio.h>
#include<stdlib.h>
//multiplos de 666 de 0 a 666666
int main()
{
    int counter;

    for (counter=1; counter<=666666; counter++)
    {

    if (counter%666==0)
    {
        printf("%i \n", counter);
    }
    }

    system ("pause");

    return 0;
}


