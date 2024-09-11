#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float salario,desc1,desc2,desc3;

    printf("digite o salario ");
    scanf("%f", &salario);

    desc1 = salario*0.2;
    desc2 = salario*0.25;
    desc3 = salario*0.3;

    if (salario<=600.00)
    {
        printf("\nsalario eh isento de desconto\n");
    }
    if (salario>600.00 && salario<=1200.00)
    {
        printf("\nsalario possui desconto de %.5f\n", desc1);
    }
    if (salario>1200.00 && salario<=2000.00)
    {
        printf("\nsalario possui desconto de %.5f\n", desc2);
    }
    if (salario>2000.00)
    {
        printf("\nsalario possui desconto de %.5f\n", desc3);
    }

    system ("pause");

    return 0;
}
