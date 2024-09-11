#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //definições das variaveis
    int num1, num2, soma, loop;
    //do para fazer a soma
    do
    {
        printf("Digite o primeiro numero ");
        scanf("%i", &num1);
        printf("Digite o segundo numero ");
        scanf("%i", &num2);
        soma = num1+num2;
        printf("\nA soma dos numeros eh %i", soma);

        printf("\n[1]Executar novamente [2]Fechar programa");
        scanf("%i", &loop);
        system("cls");//limpa tela
    }
    while (loop==1); //while do loop

    system ("pause");

    return 0;
}
