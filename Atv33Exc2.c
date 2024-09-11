#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //declaração das variaveis
    int counter, vet[10];
    //for para os valores
    for (counter=0; counter<10; counter++)
    {
        printf("Digite o %i valor ", counter+1);
        scanf("%i", &vet[counter]);
    }
    //mostrando os primeiros 5 e a soma deles
    printf("Os cinco primeiros valores escolhidos foram \n");
    printf("%i \n", vet[0]);
    printf("%i \n", vet[1]);
    printf("%i \n", vet[2]);
    printf("%i \n", vet[3]);
    printf("%i \n", vet[4]);
    printf("Resultado soma dos valores %i \n", vet[0]+vet[1]+vet[2]+vet[3]+vet[4]);

    system ("pause");

    return 0;
}
