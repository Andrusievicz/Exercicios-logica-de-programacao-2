#include<stdio.h>
#include<stdlib.h>
//multiplos de 10 de 0 a 1000
int main()
{
    int counter;

    for (counter=1; counter<=1000; counter++)
    {

    if (counter%10==0)
    {
        printf("%i ", counter);
    }
    }

    system ("pause");

    return 0;
}
