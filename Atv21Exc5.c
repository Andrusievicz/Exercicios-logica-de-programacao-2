#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()

{
    float deposito,rend1,rend2,total;

    printf("Informe o valor do deposito ");
    scanf("%f", &deposito);
    printf("Informe o rendimento do primeiro trimestre ");
    scanf("%f", &rend1);
    printf("Informe o rendimento do segundo trimestre ");
    scanf("%f", &rend2);

    rend1 = deposito*(rend1/100);
    rend2 = deposito*(rend2/100);
    total = rend1+rend2;

    printf("O deposito de %.1f rendeu %.1f no primeiro trimestre e %.1f no segundo com um total de %.1f\n", deposito,rend1,rend2,total);


    system ("pause");

    return 0;

}
