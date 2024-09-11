#include<stdio.h>
#include<stdlib.h>

int main()
{
    int counter;
    float numerohab=0,qntfilhos,mediaqntfilhos,maiorsalario,somasalario,mediasalario,somafilho,porcensalario,salario;
    printf("Digite a quantidade de habitantes \n");
    scanf("%f", &numerohab);

    for (counter=1; counter<=numerohab; counter++)
    {
        printf("Digite %i salario \n", counter);
        scanf("%f", &salario);
        printf("Digite %i numero de filhos \n", counter);
        scanf("%f", &qntfilhos);

        somasalario+=salario;
        somafilho+=qntfilhos;

        if(salario>maiorsalario)
        {
            maiorsalario=salario;
        }
        if (salario<=900)
        {
            porcensalario++;
        }
    }

    porcensalario = (porcensalario*100)/numerohab;
    mediasalario = somasalario/numerohab;
    mediaqntfilhos = somafilho/numerohab;

    printf("Media de salario dos habitantes: %.2f \n", mediasalario);
    printf("Media de numero de filhos: %.2f \n", mediaqntfilhos);
    printf("Maior salario: %.2f \n", maiorsalario);
    printf("Porcentagem de pessoas com salarios ateh 900: %.2f %%\n", porcensalario);

    system ("pause");

    return 0;
}


