#include<stdio.h>
#include<stdlib.h>

int main()
{
    int counter,idades,qntidade=10,maior=0;


    for (counter=1; counter<=qntidade; counter++)
    {
            printf("Digite %i idade \n", counter);
            scanf("%i", &idades);

            if (idades>=18)
            {
                maior++;
            }
    }

    printf("Pessoas com mais de 18 sao %i\n", maior);

    system ("pause");

    return 0;
}
