#include<stdio.h>
#include<stdlib.h>

int main ()
{
    struct boletim
    {
        char nome[20];
        char disciplina[20];
        float media;
        float nota[4];
    };
    struct boletim escola[5];

    int coluna,linha;

    for (linha=0; linha<5; linha++)
    {
        escola[linha].media=0;
        printf("Digite o nome do aluno %i ", linha+1);
        fflush(stdin);
        fgets(escola[linha].nome, 20, stdin);
        printf("Digite a disciplina do aluno %i ", linha+1);
        fflush(stdin);
        fgets(escola[linha].disciplina, 20, stdin);

        for (coluna=0; coluna<4; coluna++)
        {
            printf("Digite a %i nota ", coluna+1);
            scanf("%f", &escola[linha].nota[coluna]);
            escola[linha].media+=escola[linha].nota[coluna];
        }

        escola[linha].media/=4;
    }

    for(linha=0; linha<5; linha++)
    {
        printf("O aluno %s ", escola[linha].nome);
        printf("da disciplina %s ", escola[linha].disciplina);
        printf("com a media %.1f ", escola[linha].media);
        if(escola[linha].media>=6.9)
        {
            printf("APROVADO");
        }
        else if (escola[linha].media>=4)
        {
            printf("RECUPERACAO");
        }
        else
        {
            printf("REPROVADO");
        }
    }


    system("pause");

    return 0;
}
