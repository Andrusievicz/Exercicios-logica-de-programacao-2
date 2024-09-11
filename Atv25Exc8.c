#include<stdio.h>
#include<stdlib.h>

int main ()
{
//definição variavel
    int pag;
//leitura das variaveis
    printf("menu de pagamento\n");
    printf("selecione uma opcao de pagamento\n");
    printf("[1] vale alimentacao\n");
    printf("[2] vale refeicao\n");
    printf("[3] dinheiro\n");
    printf("[4] cartao debito\n");
    printf("[5] cartao credito\n");
    scanf("%i", &pag);
//caso para pagamento
    switch (pag)
    {
    case 1:
        printf("o pagamento sera feito no vale alimentacao\n");
        break;
    case 2:
        printf("o pagamento sera feito no vale refeicao\n");
        break;
    case 3:
        printf("o pagamento sera feito no dinheiro\n");
        break;
    case 4:
        printf("o pagamento sera feito no cartao debito\n");
        break;
    case 5:
        printf("o pagamento sera feito no cartao credito\n");
        break;
    default:
        printf("DIGITE UMA OPCAO VALIDA\n");
    }

    system ("pause");

    return 0;
}

