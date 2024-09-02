#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int valor1,soma,subtracao;

    printf("Digite um valor ");
    scanf("%i", &valor1);
    soma=valor1+1;
    subtracao=valor1-1;
    printf("\nO sucessor do valor eh %i e o antecessor eh %i\n", soma, subtracao);

    system ("pause");

    return 0;
}

