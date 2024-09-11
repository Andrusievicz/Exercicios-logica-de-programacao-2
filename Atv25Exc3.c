#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //definição variavel
    int sobremesa;
//menu para leitura da variavel
    printf("MENU RESTAURANTE SOBREMESAS\n");
    printf("ESCOLHA A OPCAO DE SOBREMESA\n");
    printf("[1]MOUSSE\n");
    printf("[2]SORVETE\n");
    printf("[3]MILKSHAKE\n");
    printf("[4]SUNDAY\n");
    scanf("%i", &sobremesa);
//caso para variavel de sobremesa
    switch (sobremesa)
    {
    case 1:
        printf("SEU MOUSSE SERA ENTREGUE NA MESA EM BREVE\n");
        break;
    case 2:
        printf("SEU SORVETE SERA ENTREGUE NA MESA EM BREVE\n");
        break;
    case 3:
        printf("SEU MILKSHAKE SERA ENTREGUE NA MESA EM BREVE\n");
        break;
    case 4:
        printf("SEU SUNDAY SERA ENTREGUE NA MESA EM BREVE\n");
        break;
    default:
        printf("DIGITE UMA OPCAO VALIDA\n");
    }

    system ("pause");

    return 0;
}

