#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int nota1,nota2,media;
    char nome[10];

    printf("digite a seu nome ");
    scanf("%s", &nome);
    printf("digite a nota da primeira prova ");
    scanf("%i", &nota1);
    printf("digite a nota da segunda prova ");
    scanf("%i", &nota2);

    media = (nota1+nota2)/2;

    printf("\n O aluno %s com a nota da primeira prova %i e da segunda prova %i \n", nome,nota1,nota2);

    if (media>=7)
    {
        printf("\n Esta aprovado com uma media de %i \n", media);
    }
    if (media<7 && media>=3)
    {
        printf ("\n Esta classificado para prova final com uma media de %i \n", media);
    }
    if (media<3)
    {
        printf("\n Esta reprovado com uma media de %i \n", media);
    }


    system ("pause");

    return 0;
}
