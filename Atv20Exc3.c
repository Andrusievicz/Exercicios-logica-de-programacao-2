#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{

    float valor,desc,valordesc,valordesc1;

    printf("Digite o valor do produto \n");
    scanf("%f", &valor);
    printf("Digite o valor do desconto \n");
    scanf("%f", &desc);
    desc = desc/100;
    valordesc = valor*desc;
    valordesc1 = valor-valordesc;
    printf("O valor do desconto eh %.1f e o valor do produto ja com o desconto eh %.1f\n1", valordesc,valordesc1);

    system ("pause");

    return 0;

}
