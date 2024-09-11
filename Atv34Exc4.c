#include<stdio.h>
#include<stdlib.h>

int main ()
    {
        int counter, comparador, consulta, vetigual, vet[10]={10,20,30,40,50,60,70,80,90,100};

        for (counter=0; counter<3; counter++)
        {
            printf("Consulta do vetor %i\n", counter+1);
            scanf("%i", &consulta);

            for (comparador=0; comparador<10; comparador++)
            {
                if (consulta==vet[comparador])
                {
                    vetigual++;
                }
            }
            if (vetigual>0)
            {
                printf ("Matricula ja existente\n");
            }
            else
            {
                printf("Matricula ainda nao existe\n");
            }
            vetigual=0;
        }

        system ("pause");

        return 0;
    }
