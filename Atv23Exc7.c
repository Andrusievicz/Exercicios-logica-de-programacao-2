#include<stdio.h>
#include<stdlib.h>

int main ()
{

    char nome[10];
    int idade;

    printf("Digite o nome ");
    scanf("%s", &nome);
    printf("Digite a idade ");
    scanf("%i", &idade);

    if (idade<=10)
    {
        printf("\n%s devera pagar R$30,00\n",nome);
    }
    if (idade>10 && idade<=29)
    {
        printf("\n%s devera pagar R$60,00\n",nome);
    }
    if (idade>29 && idade<=45)
    {
        printf("\n%s devera pagar R$120,00\n",nome);
    }
    if (idade>45 && idade<=59)
    {
        printf("\n%s devera pagar R$150,00\n",nome);
    }
    if (idade>59 && idade<=65)
    {
        printf("\n%s devera pagar R$250,00\n",nome);
    }
    if (idade>65)
    {
        printf("\n%s devera pagar R$400,00\n",nome);
    }


    system ("pause");

    return 0;
}
