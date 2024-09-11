#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float lado1,lado2,lado3; //lados do triangulo
//leitura dos valores
    printf("digite o valor do primeiro lado do triangulo ");
    scanf("%f", &lado1);
    printf("digite o valor do segundo lado do triangulo ");
    scanf("%f", &lado2);
    printf("digite o valor do terceiro lado do triangulo ");
    scanf("%f", &lado3);
//condicionais
    if (lado1 == lado2 && lado1 == lado3)
    {
        printf("o triangulo eh equilatero \n");
    }
    else if (lado1 != lado2 && lado1 != lado3)
    {
        printf("o triangulo eh escaleno \n");
    }
    else
    {
        printf("o triangulo eh isoscele \n");
    }


    system ("pause");

    return 0;
}
