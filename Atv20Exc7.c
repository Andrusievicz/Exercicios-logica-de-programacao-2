#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float valorpres,juros,periodo,valorfinal,valormes;

    printf("COBRANCA DE PRESTACAO EM ATRASO\n");
    printf("DIGITE O VALOR DA PRESTACAO ATRASADA ");
    scanf("%f", &valorpres);
    printf("DIGITE A PORCENTAGEM DE JUROS POR MES ");
    scanf("%f", &juros);
    printf("DIGITE A QUANTIDADE DE MESES EM ATRASO ");
    scanf("%f", &periodo);
    juros = (juros/100)+1;
    valorfinal = valorpres*juros;
    valormes = valorfinal-valorpres;
    printf("O valor da prestacao atrasada eh %.1f, o periodo de atraso eh %.1f, os juros cobrados por mes sao de %.1f, o valor total com os juros eh %.1f", valorpres,periodo,valormes,valorfinal);

    system ("pause");

    return 0;

}
