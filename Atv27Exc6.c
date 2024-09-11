#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //definições das variaveis
    int idade, loop;
    //do para definir a idade
    do
    {
        printf("Digite a idade ");
        scanf("%i", &idade);

        if (idade>=16 || idade<=17)
        {
            printf("Voto facultativo");
        }
        else if (idade>=18 || idade<=65)
        {
            printf("Voto obrigatorio");
        }
        else if (idade>=66)
        {
            printf("Voto facultativo");
        }
        printf("\n[1] Cadastrar novamente [2] Sair\n");
        scanf("%i", &loop);
        system("cls");//limpa tela
    }
    while (loop==1);

    system ("pause");

    return 0;
}

