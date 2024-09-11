#include<stdio.h>
#include<stdlib.h>

int main ()
{
//definição variavel
    int piada;
//menu para leitura da variavel
    printf("menu da piada\n");
    printf("escolha a opcao\n");
    printf("[1]prato\n");
    printf("[2]tubarao\n");
    scanf("%i", &piada);
//caso para variavel
    switch (piada)
    {
    case 1:
        printf("O que o prato disse para o outro? R: Esta noite, o jantar eh comigo!\n");
        break;
    case 2:
        printf("O que o tubarao disse quando comeu o peixe-palhaco? R.: Que gosto engracado!\n");
        break;
    }

    system ("pause");

    return 0;
}

