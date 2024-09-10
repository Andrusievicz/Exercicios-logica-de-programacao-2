#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int num;

    printf("digite um valor ");
    scanf("%i", &num);

    if (num>20 && num<50)
    {
        printf("o numero esta compreendido entre 20 e 50\n");
    }
    else
    {
        printf("o numero nao esta compreendido entre 20 e 50\n");
    }

    system ("pause");

    return 0;
}


