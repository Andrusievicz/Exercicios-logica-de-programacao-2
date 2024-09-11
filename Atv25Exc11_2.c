#include<stdio.h>
#include<stdlib.h>

int main ()
{
//definição variavel
    int piada;
//menu para leitura da variavel
    printf("menu da piada\n");
    printf("escolha a opcao\n");
    printf("[1]carga pesada\n");
    printf("[2]bombeiro\n");
    scanf("%i", &piada);
//caso para variavel
    switch (piada)
    {
    case 1:
        printf("Por que os eletrons nunca sao convidados para festas? R.: Porque eles sao muito negativos\n");
        break;
    case 2:
        printf("Por que o bombeiro nao gosta de andar? R.: Porque ele socorre.\n");
        break;
    }

    system ("pause");

    return 0;
}

