#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //definição variavel
    int idade;
//menu para leitura da variavel
    printf("verificacao eleitoral\n");
    printf("escolha a opcao com sua idade\n");
    printf("[1]De 0 a 15 - Nao eh Possivel Votar\n");
    printf("[2]De 16 a 17 - Voto Facultativo\n");
    printf("[3]De 18 a 65 - Voto Obrigatorio\n");
    printf("[4]De 66 a 99 - Voto nao Obrigatorio\n");
    scanf("%i", &idade);
//caso para variavel de idade
    switch (idade)
    {
    case 1:
        printf("nao eh possivel votar\n");
        break;
    case 2:
        printf("voto facultativo\n");
        break;
    case 3:
        printf("voto obrigatorio\n");
        break;
    case 4:
        printf("voto nao obrigatorio\n");
        break;
    default:
        printf("digite um valor valido\n");
    }

    system ("pause");

    return 0;
}
