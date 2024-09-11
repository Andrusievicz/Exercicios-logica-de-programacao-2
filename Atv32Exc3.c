#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //declaração das variaveis
    int counter, vet[5], soma=0, media;
    //for para fazer a media
    for (counter=0; counter<5; counter++)
    {
        printf("Digite a %i nota ", counter+1);
        scanf("%i", &vet[counter]);
        soma+=vet[counter];
    }

    media = soma/5; //variavel para media

    printf("A media das notas eh %i \n", media);

    system ("pause");

    return 0;
}
