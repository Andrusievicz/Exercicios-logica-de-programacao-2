#include<stdio.h>
#include<stdlib.h>

int main()
{
    int counter,idades,qntidade=25,idademaior50=0,idades1020=0;
    float alturas,pesos,somaaltura=0,pesosmenos40;


    for (counter=1; counter<=qntidade; counter++)
    {
        printf("Digite %i idade ", counter);
        scanf("%i", &idades);
        printf("Digite %i altura ", counter);//metros
        scanf("%f", &alturas);
        printf("Digite %i peso ", counter);//kg
        scanf("%f", &pesos);

        if (idades>50)
        {
            idademaior50++;
        }
        else if (idades>=10 && idades<=20)
        {
           somaaltura+=alturas;
           idades1020++;
        }
        if (pesos<40)
        {
            pesosmenos40++;
        }
    }

    pesosmenos40 = (pesosmenos40*100)/25;
    somaaltura = somaaltura/idades1020;

    printf("Pessoas com mais de 50 sao: %i\n", idademaior50);
    printf("Media das alturas de 10 a 20 anos sao: %.2f\n", somaaltura);
    printf("Pessoas com menos de 40kg sao: %.2f%%\n", pesosmenos40);

    system ("pause");

    return 0;
}

