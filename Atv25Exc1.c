#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //definição variavel
    int choice;
//menu e leitura da variavel
    printf("***** Mc donald do senai *****\n");
    printf("Escolha uma das opcoes do menu\n");
    printf("1 - Big Mac - R$ 14,50\n");
    printf("2 - Quarterão com Queijo - R$ 15,50\n");
    printf("3 - Hamburguer - R$ 10,90\n");
    printf("4 - Cheeseburger - R$ 9,90\n");
    printf("5 - McFritas Pequena - R$ 6,70\n");
    printf("6 - Chicken McNuggets - 7,80\n");
    scanf("%i", &choice);
//utiliação da variavel para caso
    switch (choice)
    {
        case 1:
        printf("Seu pedido de Big Mac por R$ 14,50 sera entregue em breve\n");
        break;
        case 2:
        printf("seu pedido de Quarterão com Queijo por R$ 15,50 sera entregue em breve\n");
        break;
        case 3:
        printf("seu pedido de Hamburguer por R$ 10,90 sera entregue em breve\n");
        break;
        case 4:
        printf("seu pedido de Cheeseburger por R$ 9,90 sera entregue em breve\n");
        break;
        case 5:
        printf("seu pedido de McFritas Pequena por R$ 6,70 sera entregue em breve\n");
        break;
        case 6:
        printf("seu pedido de Chicken McNuggets por 7,80 sera entregue em breve\n");
        break;
    }

    system ("pause");

    return 0;
}
