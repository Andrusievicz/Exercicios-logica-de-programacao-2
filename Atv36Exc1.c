#include<stdio.h>
#include<stdlib.h>

int main ()
{
    struct  formulario
    {
        char nome[50];
        int idade;
        int cpf;
        int telefone;
        char endereco[50];
        int num;
        char complemento[50];
        int cep;
        char bairro[50];
        char cidade[50];
        char estado[10];
    };
    struct formulario form;

    printf("--- Cadastro de dados ---- \n");

    printf("Informe o nome  ");
    fflush(stdin);
    fgets(form.nome, 50, stdin);

    printf("Informe a idade ");
    scanf("%i", &form.idade);

    printf("Informe o CPF ");
    scanf("%i", &form.cpf);

    printf("Informe o telefone ");
    scanf("%i", &form.telefone);

    printf("Informe o endereco ");
    fflush(stdin);
    fgets(form.endereco, 50, stdin);

    printf("Informe o numero ");
    scanf("%i", &form.num);

    printf("Informe o complemento ");
    fflush(stdin);
    fgets(form.complemento, 50, stdin);

    printf("Informe o CEP ");
    scanf("%i", &form.cep);

    printf("Informe o bairro ");
    fflush(stdin);
    fgets(form.bairro, 50, stdin);

    printf("Informe a cidade ");
    fflush(stdin);
    fgets(form.cidade, 50, stdin);

    printf("Informe o estado ");
    fflush(stdin);
    fgets(form.estado, 10, stdin);

    system("cls");

    printf("Dados do cadastro \n");
    printf("Nome: %s\n", form.nome);
    printf("Idade: %i\n", form.idade);
    printf("CPF: %i\n", form.cpf);
    printf("Telefone: %i\n", form.telefone);
    printf("Endereco: %s\n", form.endereco);
    printf("Numero: %i\n", form.num);
    printf("Complemento: %s\n", form.complemento);
    printf("CEP: %i\n", form.cep);
    printf("Bairro: %s\n", form.bairro);
    printf("Cidade: %s\n", form.cidade);
    printf("Estado: %s\n", form.estado);


    system("pause");

    return 0;
}
