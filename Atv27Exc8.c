#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //introdução das variaveis
    int loop;
    float altura, peso, imc;
    char nome[20];
    //leitura das variaveis com do para fazer o imc
    do
    {
        printf("Digite o nome do paciente ");
        fflush(stdin);
        scanf("%[^\n]", &nome);
        printf("Digite a altura do paciente ");
        scanf("%f", &altura);
        printf("Digite o peso do paciente ");
        scanf("%f", &peso);
        system ("cls");

        imc = peso/pow(altura, 2);

        printf("O paciente %s com altura %.2f e peso %.2f possui um imc de %.1f", nome, altura, peso, imc);

        printf("\n\n[1] Consultar menu novamente [2] Sair\n");
        scanf("%i", &loop);
        system("cls");//limpa tela
    }
        while (loop==1);

    system ("pause");

    return 0;
}

