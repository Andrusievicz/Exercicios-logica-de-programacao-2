#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int mat[2][2],linha,coluna;

    for (linha=0; linha<2; linha++)
        for (coluna=0; coluna<2; coluna++)
        {
            printf("Digite o valor da linha %i coluna %i ", linha, coluna);
            scanf("%i", &mat[linha][coluna]);
        }

    for (linha=0; linha<2; linha++)
    {
        printf("\n");

        for (coluna=0; coluna<2; coluna++)
        {
            if (mat[linha][coluna]%2==0)
                printf("%i\t ", mat[linha][coluna]);
        }

    }


    system ("pause");

    return 0;
}
