#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int idade;

    printf("Digite a idade do nadador ");
    scanf("%i", &idade);

    if (idade>=5 && idade<=7)
    {
        printf("\nCategoria do nadador eh infantil A \n");
    }
    if (idade>=8 && idade<=10)
    {
        printf("\nCategoria do nadador eh infantil B \n");
    }
    if (idade>=11 && idade<=13)
    {
        printf("\nCategoria do nadador eh juvenil A \n");
    }
    if (idade>=14 && idade<=17)
    {
        printf("\nCategoria do nadador eh juvenil B \n");
    }
    if (idade>=18)
    {
        printf("\nCategoria do nadador eh senior \n");
    }
    if (idade<5)
    {
        printf("\nIdade invalida");
    }


    system ("pause");

    return 0;
}
