#include<stdio.h>
#include<stdlib.h>

int main ()
{
//definição variavel
    int piada;
//menu para leitura da variavel
    printf("menu da piada\n");
    printf("escolha a opcao\n");
    printf("[1]homem invisivel\n");
    printf("[2]oito\n");
    scanf("%i", &piada);
//caso para variavel
    switch (piada)
    {
    case 1:
        printf("Como se chamam os familiares do Homem-Invisivel? R.: Transparentes.\n");
        break;
    case 2:
        printf("O que o zero disse para o oito? R.: Belo cinto!\n");
        break;
    }

    system ("pause");

    return 0;
}

