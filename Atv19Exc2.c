#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int valor1,valor2,produto;

    printf("Digite o primeiro valor ");
    scanf("%i", &valor1);
    printf("Digite o segundo valor ");
    scanf("%i", &valor2);
    produto = valor1 * valor2;
    printf("O produto dos dois numeros eh: %i\n", produto);

    system ("pause");

    return 0;
}
