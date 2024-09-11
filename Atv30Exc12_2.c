#include<stdio.h>
#include<stdlib.h>
//multiplos de 77 de 100000 a 0
int main()
{
    int counter;

    for (counter=100000; counter>=1; counter--)
    {

    if (counter%77==0)
    {
        printf("%i ", counter);
    }
    }

    system ("pause");

    return 0;
}

