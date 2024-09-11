#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int jog1,jog2,jog3,soma,maior,menor,medio;
    float media;

    printf("Digite a pontuacao do primeiro jogador ");
    scanf("%i", &jog1);
    printf("Digite a pontuacao do segundo jogador ");
    scanf("%i", &jog2);
    printf("Digite a pontuacao do terceiro jogador ");
    scanf("%i", &jog3);

    if (jog1>jog2 && jog1>jog3)
    {
        maior = jog1;
        if (jog2>jog3)
        {
            menor = jog3;
            medio = jog2;
        }
        else
        {
            menor = jog2;
            medio = jog3;
        }
    }else if (jog2>jog1 && jog2>jog3)
    {
        maior = jog2;
        if (jog1>jog3)
        {
            menor = jog3;
            medio = jog1;
        }
        else
        {
            menor = jog1;
            medio = jog3;
        }

    }else{
        maior = jog3;
        if (jog1>jog2)
        {
            menor = jog2;
            medio = jog1;
        }else
        {
            menor = jog1;
            medio = jog2;
        }
    }

    printf("\nos valores em ordem decrescente sao %i, %i e %i \n", maior, medio, menor);

    soma = jog1+jog2+jog3;
    media = soma/3;

    if (soma>100)
    {
        printf("Equipe foi classificada com uma media de %.3f\n", media);
    }
    if (soma<100)
    {
        printf("Equipe nao foi classificada\n");
    }


    system ("pause");

    return 0;
}

