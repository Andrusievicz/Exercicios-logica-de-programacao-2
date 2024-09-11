#include<stdio.h>
#include<stdlib.h>

int main ()
{
//definição variavel
    int piada;
//menu para leitura da variavel
    printf("menu da piada\n");
    printf("escolha a opcao\n");
    printf("[1]piada do pato\n");
    printf("[2]astronauta\n");
    scanf("%i", &piada);
//caso para variavel
    switch (piada)
    {
    case 1:
        printf("um patinho estava caminhando ateh que tropecou e rachou o bico\n");
        break;
    case 2:
        printf("O que pediu o astronauta claustrofobico? R.: Um pouco de espaco.\n");
        break;
    }

    system ("pause");

    return 0;
}
