#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int counter=1;
    char numero[10],cep[10],nome[10],sobrenome[20],endereco[20],complemento[10],bairro[10],cidade[10],estado[10],telefone[20];

    do
    {
        system("cls");
        fflush(stdin);
        printf("Digite o nome ");
        gets(nome);
        printf("Digite o sobrenome ");
        gets(sobrenome);
        printf("Digite o endereco ");
        gets(endereco);
        printf("Digite o numero ");
        gets(numero);
        printf("Digite o complemento ");
        gets(complemento);
        printf("Digite o telefone ");
        gets(telefone);
        printf("Digite o CEP ");
        gets(cep);
        printf("Digite o bairro ");
        gets(bairro);
        printf("Digite o cidade ");
        gets(cidade);
        printf("Digite o estado ");
        gets(estado);

        system("cls");

        printf("Nome: %s\n", nome);
        printf("Sobrenome: %s\n", sobrenome);
        printf("Endereco: %s\n", endereco);
        printf("Numero: %s\n", numero);
        printf("Complemento: %s\n", complemento);
        printf("Telefone: %s\n", telefone);
        printf("CEP: %s\n", cep);
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

