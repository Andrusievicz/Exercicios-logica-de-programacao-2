#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float base,altura,perimetro,area;

    printf("Digite a altura do triangulo \n");
    scanf("%f", &altura);
    printf("Digite a base do triangulo \n");
    scanf("%f", &base);
    perimetro = 2*(base+altura);
    area = base*altura;
    printf("O perimetro do triangulo eh: %.1f e a area eh: %.1f\n", perimetro,area);

    system ("pause");

    return 0;

}
