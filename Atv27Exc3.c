#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //definições das variaveis
    int num1, num2;
    //do para ler a variavel
    do
    {
        printf("digite 1 ou 0 \n");
        scanf("%i", &num1);
        system("cls");//limpa tela
    }
    while (num1<0 || num1>1); // while para dizer que o numero não é 1 nem 0

    system ("pause");

    return 0;
}

