#include<stdio.h>
#include<stdlib.h>

int main ()
{
//definição variavel
    int cargo,salario;
//leitura das variaveis
    printf("digite o salario\n");
    scanf("%i", &salario);
    printf("selecione o cargo\n");
    printf("[1] supervisor\n");
    printf("[2] tecnico\n");
    printf("[3] demais cargos\n");
    scanf("%i", &cargo);
//caso para definicao do salario
    switch (cargo)
    {
    case 1:
        salario = salario*1.3;
        printf("salario reajustado para %i no cargo de supervisor\n", salario);
        break;
    case 2:
        salario = salario*1.2;
        printf("salario reajustado para %i no cargo de tecnico\n", salario);
        break;
    case 3:
        salario = salario*1.1;
        printf("salario reajustado para %i no cargo de demais cargos\n", salario);
        break;
    default:
        printf("DIGITE UMA OPCAO VALIDA\n");
    }

    system ("pause");

    return 0;
}


