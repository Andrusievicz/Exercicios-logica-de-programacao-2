#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int mat[3][3],linha,coluna,tamanho;

    tamanho=sizeof(mat)/sizeof(mat[0]);
    tamanho-=1;

    for (linha=0; linha<3; linha++)
        for (coluna=0; coluna<3; coluna++)
        {
            printf("Digite o valor da linha %i coluna %i ", linha, coluna);
            scanf("%i", &mat[linha][coluna]);
        }

    for (linha=0; linha<3; linha++)
    {
        printf("\n");

        for (coluna=0; coluna<3; coluna++)
        {

            if (linha==coluna || linha+coluna==tamanho)
        {
            printf("%i ", mat[linha][coluna]);
        }

        printf("\t");
        }

    }


    system ("pause");

    return 0;
}
