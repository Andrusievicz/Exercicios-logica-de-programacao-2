#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float saldo,cred;

    printf("Digite o saldo medio do ultimo ano ");
    scanf("%f", &saldo);

    if (saldo<=500)
    {
        printf("o saldo de %.2f nenhum credito disponivel \n", saldo);
    }
    if (saldo<=1000 && saldo>500)
    {
        cred = saldo*1.3;
        printf("o valor do saldo medio de %.2f tera um credito de %.2f\n", saldo,cred);
    }
    if (saldo<=3000 && saldo>1000)
    {
        cred = saldo*1.4;
        printf("o valor do saldo medio de %.2f tera um credito de %.2f\n", saldo,cred);
    }
    if(saldo>3000)
    {
        cred = saldo*1.5;
        printf("o valor do saldo medio de %.2f tera um credito de %.2f\n", saldo,cred);
    }

    system ("pause");

    return 0;
}
