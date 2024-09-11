#include<stdio.h>
#include<stdlib.h>

int main ()
{
//definições das variaveis
    char nome[10],endereco[20],cidade[10],estado[10];
    int telefone,cpf,rg;
// leitura das variaveis
    printf("----- CADASTRO PARA CREDITO -----\n");
    printf("Entre com as informacoes a seguir\n");
    printf("Nome: ");
    fflush(stdin);
    scanf("%[^\n]", &nome);
    printf("Telefone: ");
    scanf("%i", &telefone);
    printf("CPF: ");
    scanf("%i", &cpf);
    printf("RG: ");
    scanf("%i", &rg);
    printf("Endereco: ");
    fflush(stdin);
    scanf("%[^\n]", &endereco);
    printf("Cidade: ");
    fflush(stdin);
    scanf("%[^\n]", &cidade);
    printf("Estado: ");
    fflush(stdin);
    scanf("%[^\n]", &estado);

    system ("cls");

    printf("CADASTRO COMPLETO\n");
    printf("Nome: %s\n", nome);
    printf("Telefone %i\n", telefone);
    printf("CPF: %i\n", cpf);
    printf("RG: %i\n", rg);
    printf("Endereco: %s\n", endereco);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);

    system ("pause");

    return 0;

}
