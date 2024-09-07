#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()

{
    float salario,aumento,salariofinal;

    printf("Digite o salario do funcionario ");
    scanf("%f", &salario);
    printf("Digite a porcentagem do aumento ");
    scanf("%f", &aumento);
    aumento = salario*(aumento/100);
    salariofinal = salario+aumento;
    printf("O salario de %.1f com porcentual de aumento de %.3f e o salario final %.1f\n", salario,aumento,salariofinal);



    system ("pause");

    return 0;

}

