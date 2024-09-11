#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int counter, vet[10];

    for (counter=0; counter<9; counter++)
    {
        printf("Digite 10 numeros inteiros  ");
        scanf("%i", &vet[counter]);
    }

    printf("Os numeros sao %i %i %i %i %i %i %i %i %i %i", vet[0], vet[1], vet[2], vet[3], vet[4], vet[5], vet[6], vet[7], vet[8], vet[9]);

    system ("pause");

    return 0;
}
