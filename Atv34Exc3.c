#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int counter, tamanho;

    printf("Digite a quantidade do vetor ");
    scanf("%i", &tamanho);

    int vetor[tamanho];

    vetor[tamanho-1]=999;

    for (counter=0; counter<tamanho-1; counter++)
    {
        printf ("Informe um numero ");
        scanf("%i", &vetor[counter]);
    }

    for (counter=tamanho-2; counter>=0; counter--)
    {
        printf("\nVetor %i Valor %i ", counter, vetor[counter]);
    }


        system ("pause");

        return 0;
    }

