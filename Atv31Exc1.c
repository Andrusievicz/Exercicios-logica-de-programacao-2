#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int numero,cep,counter=1;
    char nome[10],sobrenome[20],endereco[20],complemento[10],bairro[10],cidade[10],estado[10],telefone[20];

    do
    {
        system("cls");

        printf("Digite o nome ");
        fflush(stdin);
        scanf("%[^\n]", &nome);
        printf("Digite o sobrenome ");
        fflush(stdin);
        scanf("%[^\n]", &sobrenome);
        printf("Digite o endereco ");
        fflush(stdin);
        scanf("%[^\n]", &endereco);
        printf("Digite o numero ");
        scanf("%i", &numero);
        printf("Digite o complemento ");
        fflush(stdin);
        scanf("%[^\n]", &complemento);
        printf("Digite o telefone ");
        fflush(stdin);
        scanf("%[^\n]", &telefone);
        printf("Digite o CEP ");
        scanf("%i", &cep);
        printf("Digite o bairro ");
        fflush(stdin);
        scanf("%[^\n]", &bairro);
        printf("Digite o cidade ");
        fflush(stdin);
        scanf("%[^\n]", &cidade);
        printf("Digite o estado ");
        fflush(stdin);
        scanf("%[^\n]", &estado);

        system("cls");

        printf("Nome: %s\n", nome);
        printf("Sobrenome: %s\n", sobrenome);
        printf("Endereco: %s\n", endereco);
        printf("Numero: %i\n", numero);
        printf("Complemento: %s\n", complemento);
        printf("Telefone: %s\n", telefone);
        printf("CEP: %i\n", cep);
        printf("Bairro: %s\n", bairro);
        printf("Cidade: %s\n", cidade);
        printf("Estado: %s\n", estado);

        printf("[1]Para cadastrar novamente [2]Para sair");
        scanf("%i", &counter);
    }
    while (counter==1);

    system("pause");

    return 0;
}
