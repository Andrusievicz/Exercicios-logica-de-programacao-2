#include<stdio.h>
#include<stdlib.h>

int main ()
{
//definição variavel
    int mc;
//leitura das variaveis
    printf("Menu Mcdonald\n");
    printf("Selecione uma opcao de pagamento\n");
    printf("[1] Big Mac - R$ 26,90 / Suco de Laranja - R$ 12,30\n");
    printf("[2] Cheddar McMelt - R$ 26,50 / Coca Cola - R$ 7,90\n");
    printf("[3] Duplo Big Mac - R$ 28,90 / Suco de Laranja - R$ 12,30\n");
    printf("[4] Quarterão com queijo - R$ 26,50 / Coca Cola - R$ 7,90\n");
    printf("[5] McNífico Bacon - R$ 29,90 / Suco de Laranja - R$ 12,30\n");
    printf("[6] McChicken - R$ 25,90 / Coca Cola - R$ 7,90\n");
    printf("[7] Chicken Supreme Crispy - R$ 29,90 / Suco de Laranja - R$ 12,30\n");
    printf("[8] 10 Chicken McNuggets - R$ 22,50 / Coca Cola - R$ 7,90\n");
    printf("[9] Big Tasty Turbo Queijo - R$ 33,90 / Suco de Laranja - R$ 12,30\n");
    printf("[10] Big Tasty - R$ 31,90 / Coca Cola - R$ 7,90\n");
    printf("[11] Picanha Club House (1 carne) - R$ 34,90 / Suco de Laranja - R$ 12,30\n");
    scanf("%i", &mc);
//caso para menu mc
    switch (mc)
    {
    case 1:
        printf("O Big Mac - R$ 26,90 / Suco de Laranja - R$ 12,30 sera enviado em breve\n");
        break;
    case 2:
        printf("O Cheddar McMelt - R$ 26,50 / Coca Cola - R$ 7,90 sera enviado em breve\n");
        break;
    case 3:
        printf("O Duplo Big Mac - R$ 28,90 / Suco de Laranja - R$ 12,30 sera enviado em breve\n");
        break;
    case 4:
        printf("O Quarterão com queijo - R$ 26,50 / Coca Cola - R$ 7,90 sera enviado em breve\n");
        break;
    case 5:
        printf("O McNífico Bacon - R$ 29,90 / Suco de Laranja - R$ 12,30 sera enviado em breve\n");
        break;
    case 6:
        printf("O McChicken - R$ 25,90 / Coca Cola - R$ 7,90 sera enviado em breve\n");
        break;
    case 7:
        printf("O Chicken Supreme Crispy - R$ 29,90 / Suco de Laranja - R$ 12,30 sera enviado em breve\n");
        break;
    case 8:
        printf("O 10 Chicken McNuggets - R$ 22,50 / Coca Cola - R$ 7,90 sera enviado em breve\n");
        break;
    case 9:
        printf("O Big Tasty Turbo Queijo - R$ 33,90 / Suco de Laranja - R$ 12,30 sera enviado em breve\n");
        break;
    case 10:
        printf("O Big Tasty - R$ 31,90 / Coca Cola - R$ 7,90 sera enviado em breve\n");
        break;
    case 11:
        printf("O Picanha Club House (1 carne) - R$ 34,90 / Suco de Laranja - R$ 12,30 sera enviado em breve\n");
        break;
    default:
        printf("DIGITE UMA OPCAO VALIDA\n");
    }

    system ("pause");

    return 0;
}


