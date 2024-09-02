#include<stdio.h>
#include<stdlib.h>

int main()
{
    float valor1,valor2;

    printf("Digite o primeiro valor ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor ");
    scanf("%f", &valor2);
    printf ("Os valores digitados foram %.1f e %.1f\n", valor1, valor2);

    system ("pause");

    return 0;
}
