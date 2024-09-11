#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //declaração das variaveis
    int counter, vet[6];
    //for para os valores
    for (counter=0; counter<6; counter++)
    {
        printf("Digite o %i valor ", counter+1);
        scanf("%i", &vet[counter]);
    }

    printf("Os valores escolhidos foram \n");
    printf("%i \n", vet[0]);
    printf("%i \n", vet[1]);
    printf("%i \n", vet[2]);
    printf("%i \n", vet[3]);
    printf("%i \n", vet[4]);
    printf("%i \n", vet[5]);

    system ("pause");

    return 0;
}

