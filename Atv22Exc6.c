#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float salario,prest,emprest;

    printf("digite o valor do salario bruto ");
    scanf("%f", &salario);
    printf("digite o valor da prestacao ");
    scanf("%f", &prest);

    emprest = salario*0.3;

    if (prest>emprest)
    {
        printf("o emprestimo nao pode ser concedido \n");
    }
    else
    {
        printf("o emprestimo pode ser concedido\n");
    }

    system ("pause");

    return 0;
}

