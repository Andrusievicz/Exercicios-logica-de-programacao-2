#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //declaração das variaveis
    int counter, vet1[4], vet2[4], vet3[4], vet4[4], vet5[4], soma1=0, soma2=0, soma3=0, soma4=0, soma5=0, media1, media2, media3, media4, media5;
    int cont1=1, cont2=1, cont3=1, cont4=1, cont5=1;
    //for para fazer a media
    for (counter=0; counter<4; counter++)
    {
        printf("Digite a %i nota do %i aluno ", cont1+1, counter+1);
        scanf("%i", &vet1[counter]);
        soma1+=vet1[counter];
        cont1++;
        printf("Digite a %i nota do %i aluno ", cont2+1, counter+1);
        scanf("%i", &vet2[counter]);
        soma2+=vet2[counter];
        cont2++;
        printf("Digite a %i nota do %i aluno ", cont3+1, counter+1);
        scanf("%i", &vet3[counter]);
        soma3+=vet3[counter];
        cont3++;
        printf("Digite a %i nota do %i aluno ", cont4+1, counter+1);
        scanf("%i", &vet4[counter]);
        soma4+=vet4[counter];
        cont4++;
        printf("Digite a %i nota do %i aluno ", cont5+1, counter+1);
        scanf("%i", &vet5[counter]);
        soma5+=vet5[counter];
        cont5++;
    }

    media1 = soma1/4; //variavel para media
    media2 = soma2/4;
    media3 = soma3/4;
    media4 = soma4/4;
    media5 = soma5/4;

    if (media1>=7)
    {
        printf("Aluno aprovado\n");
    }
    else
    {
        printf("Aluno reprovado\n");
    }
    if (media2>=7)
    {
        printf("Aluno aprovado\n");
    }
    else
    {
        printf("Aluno reprovado\n");
    }
    if (media3>=7)
    {
        printf("Aluno aprovado\n");
    }
    else
    {
        printf("Aluno reprovado\n");
    }
    if (media4>=7)
    {
        printf("Aluno aprovado\n");
    }
    else
    {
        printf("Aluno reprovado\n");
    }
    if (media5>=7)
    {
        printf("Aluno aprovado\n");
    }
    else
    {
        printf("Aluno reprovado\n");
    }

    system ("pause");

    return 0;
}

