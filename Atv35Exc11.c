#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int mat[4][4],linha,coluna,tamanho, soma;

    tamanho=sizeof(mat)/sizeof(mat[0]);
    tamanho-=1;

    for (linha=0; linha<4; linha++)
        for (coluna=0; coluna<4; coluna++)
        {
            printf("Digite o valor da linha %i coluna %i ", linha, coluna);
            scanf("%i", &mat[linha][coluna]);
            if (linha==coluna || linha+coluna==tamanho)
            {
                soma+=mat[linha][coluna];
            }

        }

        printf("A soma das diagonais eh %i \n", soma);

    for (linha=0; linha<4; linha++)
    {
        printf("\n");

        for (coluna=0; coluna<4; coluna++)
        {

            if (linha==coluna || linha+coluna==tamanho)
            {
                printf("%i ", soma);
            }

            printf("\t");
        }

    }


    system ("pause");

    return 0;
}
