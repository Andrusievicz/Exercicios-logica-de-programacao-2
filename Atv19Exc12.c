#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float valor1,quadrado;

    printf("Digite um valor ");
    scanf("%f", &valor1);
    quadrado = pow(valor1,2);
    printf("O quadrado do valor eh: %.1f\n", quadrado);

    system ("pause");

    return 0;

}
