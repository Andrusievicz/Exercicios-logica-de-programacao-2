#include<stdio.h>
#include<stdlib.h>

int main ()

{
    float valor1,valorfinal;

    printf("Digite um valor ");
    scanf("%f", &valor1);
    valorfinal=valor1/4;
    printf("\n1/4 do valor eh: %.1f\n", valorfinal);

    system ("pause");

    return 0;
}


