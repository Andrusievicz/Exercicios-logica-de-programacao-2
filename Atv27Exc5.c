#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //definições das variaveis
    int nota1, nota2, nota3, nota4, med, loop;
    //do para ler as notas
    do
    {
        printf("Digite a nota do primeiro bimestre ");
        scanf("%i", &nota1);
        printf("Digite a nota do segundo bimestre ");
        scanf("%i", &nota2);
        printf("Digite a nota do terceiro bimestre ");
        scanf("%i", &nota3);
        printf("Digite a nota do quarto bimestre ");
        scanf("%i", &nota4);

        med = (nota1+nota2+nota3+nota4)/4;
        //if para media
        if (med>=70)
        {
            printf("O aluno esta aprovado");
        }
        else
        {
            printf("O aluno esta reprovado");
        }
        printf("\n[1] Cadastrar novamente [2] Sair\n");
        scanf("%i", &loop);
        system("cls");//limpa tela
    }
    while (loop==1);

    system ("pause");

    return 0;
}

