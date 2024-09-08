#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()

{
    float ano,consumo,km_l,km_lL,km;
    char modelo[10];

    printf("Informe o modelo do carro ");
    scanf("%s", &modelo);
    printf("Informe o ano do carro ");
    scanf("%f", &ano);
    printf("Informe o consumo por litro do carro ");
    scanf("%f", &km_lL);
    km = 736;
    km_l = km/km_lL;

    printf("O carro %s do ano %.1f com consumo de %.1f serao necessarios %.1f para percorrer 736km\n", modelo,ano,km_lL,km_l);

    system ("pause");

    return 0;

}


