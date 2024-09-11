#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //definições das variaveis
    int idade, loop;
    char nome[20];
    //do para ler as variaveis com os ifs
    do
    {
        printf("Digite o nome do atleta ");
        fflush(stdin);
        scanf("%[^\n]", &nome);
        printf("Digite a idade do atleta ");
        scanf("%i", &idade);

        if (idade>=10 && idade<=14)
        {
            printf("O atleta %s com a idade %i esta categorizado na modalidade Infanto Juvenil\n", nome, idade);
        }
        if (idade>=15 && idade<=17)
        {
            printf("O atleta %s com a idade %i esta categorizado na modalidade Juvenil\n", nome, idade);
        }
        if (idade>=18 && idade<=25)
        {
            printf("O atleta %s com a idade %i esta categorizado na modalidade Profissional\n", nome, idade);
        }
        if (idade>=26 && idade<=40)
        {
            printf("O atleta %s com a idade %i esta categorizado na modalidade Juvenil\n", nome, idade);
        }
        printf("\n[1] Cadastrar novamente [2] Sair");
        scanf("%i", &loop);
        system("cls");//limpa tela
    }
    while (loop==1);

    system ("pause");

    return 0;
}

