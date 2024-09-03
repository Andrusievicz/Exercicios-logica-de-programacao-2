#include<stdio.h>
#include<stdlib.h>

int main ()

{
    float valor1,valor2,valor3,media;

    printf("Digite o primeiro valor ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor ");
    scanf("%f", &valor2);
    printf("Digite o terceiro valor ");
    scanf("%f", &valor3);
    media=(valor1+valor2+valor3)/3;
    printf("\nA media dos valores eh %.1f\n", media);

    system ("pause");

    return 0;
}



