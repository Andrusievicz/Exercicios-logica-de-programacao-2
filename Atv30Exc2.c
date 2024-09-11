#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //introdução da variavel
    int counter=1,tabu2=2,tabu3=3,tabu4=4,tabu5=5,tabu6=6,tabu7=7;
    //fors para tabuadas
    printf("------- TABUADA 2 -------\n");
    for (counter=1; counter<=10; counter++)
    {
        printf ("%d X %d = %d\n", counter, tabu2, tabu2*counter);
    }
    printf("------- TABUADA 3 -------\n");
    for (counter=1; counter<=10; counter++)
    {
        printf ("%d X %d = %d\n", counter, tabu3, tabu3*counter);
    }
    printf("------- TABUADA 4 -------\n");
    for (counter=1; counter<=10; counter++)
    {
        printf ("%d X %d = %d\n", counter, tabu4, tabu4*counter);
    }
    printf("------- TABUADA 5 -------\n");
    for (counter=1; counter<=10; counter++)
    {
        printf ("%d X %d = %d\n", counter, tabu5, tabu5*counter);
    }
    printf("------- TABUADA 6 -------\n");
    for (counter=1; counter<=10; counter++)
    {
        printf ("%d X %d = %d\n", counter, tabu6, tabu6*counter);
    }
    printf("------- TABUADA 7 -------\n");
    for (counter=1; counter<=10; counter++)
    {
        printf ("%d X %d = %d\n", counter, tabu7, tabu7*counter);
    }


    system ("pause");

    return 0;
}

