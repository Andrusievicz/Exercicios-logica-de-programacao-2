#include<stdio.h>
#include<stdlib.h>

int main ()
{
//definição variavel
    int cardapio;
//leitura das variaveis
    printf("menu de pratos\n");
    printf("selecione um prato\n");
    printf("[1] bacalhau\n");
    printf("[2] risoto\n");
    printf("[3] peixe\n");
    printf("[4] feijoada\n");
    printf("[5] carne assada\n");
    scanf("%i", &cardapio);
//caso para cardapio
    switch (cardapio)
    {
    case 1:
        printf("bacalhau sera enviado em sua mesa em breve\n");
        break;
    case 2:
        printf("risoto sera enviado em sua mesa em breve\n");
        break;
    case 3:
        printf("peixe sera enviado em sua mesa em breve\n");
        break;
    case 4:
        printf("feijoada sera enviado em sua mesa em breve\n");
        break;
    case 5:
        printf("carne assada sera enviado em sua mesa em breve\n");
        break;
    default:
        printf("DIGITE UMA OPCAO VALIDA\n");
    }

    system ("pause");

    return 0;
}


