#include<stdio.h>
#include<stdlib.h>

int main()
{
    int counter;

    for (counter=1; counter<=100; counter++)
    {

    if (counter%3==0)
    {
        printf("%i ", counter);
    }
    }

    system ("pause");

    return 0;
}


