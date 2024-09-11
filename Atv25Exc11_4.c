#include<stdio.h>
#include<stdlib.h>

int main ()
{
//definição variavel
    int piada;
//menu para leitura da variavel
    printf("menu da piada\n");
    printf("escolha a opcao\n");
    printf("[1]internet\n");
    printf("[2]zebra\n");
    scanf("%i", &piada);
//caso para variavel
    switch (piada)
    {
    case 1:
        printf("Sabe por que o rapaz jogou o computador no mar? R.: Para ele navegar na internet!\n");
        break;
    case 2:
        printf("O que a zebra disse para a mosca? R.: Voce esta na minha listra negra\n");
        break;
    }

    system ("pause");

    return 0;
}


