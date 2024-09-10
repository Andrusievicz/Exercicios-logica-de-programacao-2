#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int idade,anoatual,nascimento;

    printf("digite o ano do nascimento");
    scanf("%i", &nascimento);
    printf("digite o ano atual");
    scanf("%i", &anoatual);

    idade = anoatual-nascimento;

    if (anoatual>2023)
    {
        printf("digite um ano valido\n");
    }
    else
    {
        printf("sua idade eh %i anos\n", idade);
    }

    system ("pause");

    return 0;
}



