#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //declara��o das davariaveis
    int num1,loop;
    //do para fazer a regress�o
    do
    {
        printf("Digite um valor ");
        scanf("%i", &num1);

        while (num1!=1)//while da regress�o
        {
            printf("%i ", num1);
            num1--;
        }
        printf("\nDigite 1 para voltar e 2 para sair");
        scanf("%i", &loop);
        system("cls");//limpa tela
    }
    while (loop==1); //while pra fazer o loop

    system ("pause");

    return 0;
}
