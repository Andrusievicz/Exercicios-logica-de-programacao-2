#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int num;

    printf("digite um valor ");
    scanf("%i", &num);

    if (num>20)
    {
        printf("maior do que 20\n");
    }
    if (num==20)
    {
        printf("igual a 20\n");
    }
    if (num<20)
    {
        printf("menor do que 20\n");
    }

    system ("pause");

    return 0;
}



