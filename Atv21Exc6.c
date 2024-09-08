#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()

{
    float car,ICMS,IPI,COFINS,PIS,IPVA,car1;

    printf("Informe o valor do veiculo ");
    scanf("%f", &car);
    printf("Informe os juros do ICSM ");
    scanf("%f", &ICMS);
    printf("Informe os juros do IPI ");
    scanf("%f", &IPI);
    printf("Informe os juros do COFINS ");
    scanf("%f", &COFINS);
    printf("Informe os juros do PIS ");
    scanf("%f", &PIS);
    printf("Informe os juros do IPVA ");
    scanf("%f", &IPVA);

    ICMS = car*(ICMS/100);
    IPI = car*(IPI/100);
    COFINS = car*(COFINS/100);
    PIS = car*(PIS/100);
    IPVA = car*(IPVA/100);

    car1 = car-ICMS-IPI-COFINS-PIS-IPVA;


    printf("\nICSM eh %.1f\n", ICMS);
    printf("IPI eh %.1f\n", IPI);
    printf("COFINS eh %.1f\n", COFINS);
    printf("PIS eh %.1f\n", PIS);
    printf("IPVA eh %.1f\n", IPVA);
    printf("O valor do carro sem os impostos eh %.1f\n\n", car1);


    system ("pause");

    return 0;

}

