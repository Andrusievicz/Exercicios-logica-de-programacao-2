#include<stdio.h>
#include<stdlib.h>

int main ()
{
//definição variavel
    int choice,op1,op2,op3,op4,op5;
    printf("menu mercado\n");
    printf("digite o setor desejado");
    printf("\n[1]padaria\n");
    printf("[2]bebidas\n");
    printf("[3]congelados\n");
    printf("[4]açougue\n");
    printf("[5]verduras\n");
    scanf("%i", &choice);

    switch (choice)
    {
    case 1:
        printf("digite um dos produtos\n");
        printf("[1]pao R$1\n");
        printf("[2]pao de queijo R$2\n");
        printf("[3]chineque R$2\n");
        printf("[4]sonho R$1\n");
        printf("[5]pao de forma R$10\n");
        scanf("%i", &op1);
        switch (op1)
        {
        case 1:
            printf("um pao por R$1 sera enviado em breve\n");
            break;
        case 2:
            printf("um pao de queijo por R$2 sera enviado em breve\n");
            break;
        case 3:
            printf("um chineque por R$2 sera enviado em breve\n");
            break;
        case 4:
            printf("um sonho por R$1 sera enviado em breve\n");
            break;
        case 5:
            printf("um pao de forma por R$10 sera enviado em breve\n");
            break;
        }
        break;
    case 2:
        printf("digite um dos produtos\n");
        printf("[1]leite R$4\n");
        printf("[2]refri R$3\n");
        printf("[3]cerveja R$6\n");
        printf("[4]suco R$5\n");
        printf("[5]agua R$1\n");
        scanf("%i", &op2);
        switch (op2)
        {
        case 1:
            printf("um leite por R$4 sera enviado em breve\n");
            break;
        case 2:
            printf("um refri por R$3 sera enviado em breve\n");
            break;
        case 3:
            printf("uma cerveja por R$6 sera enviado em breve\n");
            break;
        case 4:
            printf("um suco por R$5 sera enviado em breve\n");
            break;
        case 5:
            printf("uma agua por R$1 sera enviado em breve\n");
            break;
        }
        break;
    case 3:
        printf("digite um dos produtos\n");
        printf("[1]picanha R$65\n");
        printf("[2]frango R$7\n");
        printf("[3]pernil R$12\n");
        printf("[4]salmao R$120\n");
        printf("[5]camarao R$60\n");
        scanf("%i", &op3);
        switch (op3)
        {
        case 1:
            printf("uma picanha por R$65 sera enviado em breve\n");
            break;
        case 2:
            printf("um frango por R$7 sera enviado em breve\n");
            break;
        case 3:
            printf("um pernil por R$12 sera enviado em breve\n");
            break;
        case 4:
            printf("um salmao por R$120 sera enviado em breve\n");
            break;
        case 5:
            printf("um camarao por R$60 sera enviado em breve\n");
            break;
        }
        break;
    case 4:
        printf("digite um dos produtos\n");
        printf("[1]maminha R$55\n");
        printf("[2]alcatra R$60\n");
        printf("[3]coxao mole R$30\n");
        printf("[4]bisteca R$25\n");
        printf("[5]carne moida R$20\n");
        scanf("%i", &op4);
        switch (op4)
        {
        case 1:
            printf("uma maminha por R$55 sera enviado em breve\n");
            break;
        case 2:
            printf("uma alcatra por R$60 sera enviado em breve\n");
            break;
        case 3:
            printf("um coxao mole por R$30 sera enviado em breve\n");
            break;
        case 4:
            printf("um bisteca por R$25 sera enviado em breve\n");
            break;
        case 5:
            printf("um carne moida por R$20 sera enviado em breve\n");
            break;
        }
        break;
    case 5:
        printf("digite um dos produtos\n");
        printf("[1]brocoli R$1\n");
        printf("[2]cogumelo R$2\n");
        printf("[3]alface R$3\n");
        printf("[4]tomate R$2\n");
        printf("[5]cenoura R$5\n");
        scanf("%i", &op5);
        switch (op5)
        {
        case 1:
            printf("um brocoli por R$1 sera enviado em breve\n");
            break;
        case 2:
            printf("um cogumelo por R$2 sera enviado em breve\n");
            break;
        case 3:
            printf("um alface por R$3 sera enviado em breve\n");
            break;
        case 4:
            printf("um tomate por R$2 sera enviado em breve\n");
            break;
        case 5:
            printf("uma cenoura por R$5 sera enviado em breve\n");
            break;
        }
        break;
    }
        system ("pause");

        return 0;
    }
