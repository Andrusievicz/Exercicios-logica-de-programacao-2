#include<stdio.h>
#include<stdlib.h>

int main()
{
    int counter,idades,qntidade=7,pesomaior90=0,pesos,mediaidade,somaidade;


    for (counter=1; counter<=qntidade; counter++)
    {
        printf("Digite %i idade \n", counter);
        scanf("%i", &idades);
        printf("Digite %i peso \n", counter);
        scanf("%i", &pesos);

        if (pesos>90)
        {
            pesomaior90++;
        }

        somaidade+=idades;

    }

    mediaidade = somaidade/7;

    printf("Pessoas com mais de 90kg sao: %i\n", pesomaior90);
    printf("Media das idades eh: %i\n", mediaidade);

    system ("pause");

    return 0;
}

