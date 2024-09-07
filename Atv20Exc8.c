#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{

    float dolar,real;

    printf("CONVERSAO DE DOLAR PARA REAL \n");
    printf("DIGITE O VALOR DESEJADO EM DOLARES \n");
    scanf("%f", &dolar);
    real = dolar*4.89;
    printf("\nO VALOR EM REAIS EH %.3f\n", real);


    system ("pause");

    return 0;

}
