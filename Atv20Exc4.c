#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float salario,reajuste;

    printf("Digite o valor do salario atual \n");
    scanf("%f", &salario);
    printf("Digite o porcentagem do reajuste \n");
    scanf("%f", &reajuste);
    reajuste = (reajuste/100)+1;
    salario = salario*reajuste;
    printf("O salario com reajuste eh: %.1f\n", salario);

    system ("pause");

    return 0;

}
