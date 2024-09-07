#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()

{
    float preco,juros,valorfinal;

    printf("Digite o valor da tv ");
    scanf("%f", &preco);
    printf("Digite o valor dos juros no credito ");
    scanf("%f", &juros);
    juros = preco*(juros/100);
    valorfinal = preco+juros;
    printf("\nO valor a vista da tv eh %.1f com juros de %.1f o valor final com juros eh %.1f\n", preco,juros,valorfinal);


    system ("pause");

    return 0;

}


