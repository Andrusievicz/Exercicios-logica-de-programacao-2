#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int mat[5][3],linha,coluna;

    for (linha=0; linha<5; linha++)
        for (coluna=0; coluna<3; coluna++)
        {
            printf("Digite o valor da linha %i coluna %i ", linha, coluna);
            scanf("%i", &mat[linha][coluna]);
        }

    for (linha=0; linha<5; linha++)
    {
        printf("\n");

        for (coluna=0; coluna<3; coluna++)
        {
            printf("%i\t ", mat[linha][coluna]);
        }

    }


    system ("pause");

    return 0;
}
