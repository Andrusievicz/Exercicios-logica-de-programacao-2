#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int mat1[2][2],mat2[2][2],soma[2][2],linha,coluna;

    printf("Digite o valor da primeira matriz \n");

    for(linha=0; linha<2; linha++)
        for(coluna=0; coluna<2; coluna++)
        {
            printf("Informe o valor da lina %i coluna %i ", linha,coluna);
            scanf("%i", &mat1[linha][coluna]);
        }

    printf("Digite o valor da segunda matriz \n");

    for(linha=0; linha<2; linha++)
        for(coluna=0; coluna<2; coluna++)
        {
            printf("Informe o valor da lina %i coluna %i ", linha,coluna);
            scanf("%i", &mat2[linha][coluna]);
        }

    for(linha=0; linha<2; linha++)
        for(coluna=0; coluna<2; coluna++)
        {
            soma[linha][coluna]=mat1[linha][coluna]+mat2[linha][coluna];
        }

    printf("A soma da primeira com a segunda matriz eh \n");

    for(linha=0; linha<2; linha++)
    {
        printf("\n");

        for(coluna=0; coluna<2; coluna++)
        {
            printf("%i\t", soma[linha][coluna]);
        }
    }



    system ("pause");

    return 0;
}
