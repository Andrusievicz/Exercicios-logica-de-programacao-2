#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float saldo,reajuste;

    printf("Digite o saldo da poupanca \n");
    scanf("%f", &saldo);
    reajuste = saldo*1.02;
    printf("\nO reajuste da poupanca eh: %.1f\n", reajuste);

    system ("pause");

    return 0;

}
