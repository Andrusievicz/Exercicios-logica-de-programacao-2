#include<stdio.h>
#include<stdlib.h>

int main ()

{
    float valor1,valor2,soma,subtracao,divisao,multipliacao;

    printf("Digite o primeiro valor ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor ");
    scanf("%f", &valor2);
    soma = valor1+valor2;
    subtracao = valor1-valor2;
    divisao = valor1/valor2;
    multipliacao = valor1*valor2;
    printf("\nO resultado da soma eh %.1f da subtracao eh %.1f da divisao eh %.1f e da multipliacao eh %.1f\n", soma,subtracao,divisao,multipliacao);

    system ("pause");

    return 0;
}




