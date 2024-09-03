#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int tel;
    char nome[20], end[20];

    printf("Informe o nome ");
    fflush(stdin);
    scanf("%[^\n]", &nome);
    printf("\nInforme o endereco ");
    fflush(stdin);
    scanf("%[^\n]", &end);
    printf("\nInforme o telefone ");
    scanf("%i", &tel);

    printf("\nNome: %s", nome);
    printf("\nEndereco: %s", end);
    printf("\nTelefone: %i\n", tel);

    system ("pause");

    return 0;
}
