#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //declaração das variaveis
    int counter, vet[5], soma=0;
    //for para fazer a soma
    for (counter=0; counter<5; counter++)
    {
        printf("Digite o %i valor ", counter+1);
        scanf("%i", &vet[counter]);
        soma+=vet[counter];
    }

    printf("A soma dos valores eh %i \n", soma);

    system ("pause");

    return 0;
}
