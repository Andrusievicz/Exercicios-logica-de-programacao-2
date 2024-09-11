#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //definição variavel
    int AUX, salario;
//menu para leitura da variavel
    printf("CONSULTA DE AUXILIO MENSAL\n");
    printf("ESCOLHA A OPCAO DE AUXILIO\n");
    printf("[1]CASADAS SEM FILHO\n");
    printf("[2]COM FILHO\n");
    printf("[3]SOLTEIRA\n");
    scanf("%i", &AUX);
//caso para variavel do auxilio
    switch (AUX)
    {
    case 1:
        printf("DIGITE O SALARIO \n");
        scanf("%i", &salario);
        AUX = salario*0.15;
        printf("O SALARIO COM VALOR DE %i TERA UM AUXILIO DE %i\n", salario, AUX);
        break;
    case 2:
        printf("DIGITE O SALARIO \n");
        scanf("%i", &salario);
        AUX = salario*0.35;
        printf("O SALARIO COM VALOR DE %i TERA UM AUXILIO DE %i\n", salario, AUX);
        break;
    case 3:
        printf("NAO TEM AUXILIO PARA ESSA OPCAO\n");
        break;
    default:
        printf("DIGITE UMA OPCAO VALIDA\n");
    }

    system ("pause");

    return 0;
}

