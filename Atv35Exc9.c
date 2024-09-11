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

        printf("%i \n", mat[0][0]);
        printf("%i \n", mat[1][0]);


    system ("pause");

    return 0;
}
