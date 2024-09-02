#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int valor1,valor2,valor3,media;

    printf("Digite o primeiro valor ");
    scanf("%i", &valor1);
    printf("\nDigite o segundo valor ");
    scanf("%i", &valor2);
    printf("\nDigite o terceiro valor ");
    scanf("%i", &valor3);
    media = (valor1 + valor2 + valor3)/3;
    printf("\nA media aritmetica eh: %i\n", media);

    system ("pause");

    return 0;
}

