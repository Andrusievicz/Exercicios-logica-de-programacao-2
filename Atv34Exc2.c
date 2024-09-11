#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int counter, vet[10], comparador;

    for (counter=0; counter<10; counter++)
    {
matricula:
        printf("Informe a matricula do aluno : %i ", counter+1);
        scanf("%i", &vet[counter]);
        for (comparador=9; comparador>=0; comparador--)
        {
            if (vet[counter]==vet[comparador] && counter!=comparador)
            {
                printf("Esta matricula ja eh existente\n");
                system ("pause");
                system ("cls");
                goto matricula;
            }
            }
        }

        for (counter=0; counter<10; counter++)
        {
            printf("\n Matricula %i do aluno %i\n", vet[counter], counter+1);
        }

        system ("pause");

        return 0;
    }

