#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int idade;

    printf("digite a sua idade ");
    scanf("%i", &idade);

    if (idade>=18 && idade<=65)
    {
        printf("eh maior de idade \n");
    }
    if (idade<18)
    {
        printf("eh menor de idade \n");
    }
    if (idade>65)
    {
        printf("eh maior de 65 anos \n");
    }

    system ("pause");

    return 0;
}
