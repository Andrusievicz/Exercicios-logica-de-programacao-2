#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int mat[3][3],linha,coluna,soma,tamanho;

    for (linha=0; linha<3; linha++)
        for (coluna=0; coluna<3; coluna++)
        {
            printf("Digite o valor da linha %i coluna %i ", linha, coluna);
            scanf("%i", &mat[linha][coluna]);
        }

    soma=mat[0][0]+mat[0][1]+mat[0][2];

    printf("A soma da linha 0 eh %i ", soma);



    system ("pause");

    return 0;
}
