#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int valor1,valor2,subtracao;

    printf("Digite o primeiro valor ");
    scanf("%i", &valor1);
    printf("Digite o segundo valor ");
    scanf("%i", &valor2);
    subtracao=valor1-valor2;
    printf("\nA subtracao dos valores eh %i\n", subtracao);

    system ("pause");

    return 0;
}


