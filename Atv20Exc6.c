#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float tempo,velom,distancia,litros;

    printf("Calculo para quantidade de litros consumidos na viagem com um carro que faz 12 litros por km rodado\n");
    printf("Digite o tempo percorrido\n");
    scanf("%f", &tempo);
    printf("Digite a velocidade media \n");
    scanf("%f", &velom);
    distancia = tempo*velom;
    litros = distancia/12;
    printf("A distancia percorrida eh %.1f e a quantidade de litros consumida foi %.2f\n", distancia,litros);

    system ("pause");

    return 0;

}
