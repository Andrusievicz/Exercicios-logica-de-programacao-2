#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //declaração das variaveis
    int num1, contador, divisor;

    printf("numeros primos de 1 a 200\n\n");
    num1=1;
    //while para chegar ao 200
    while(num1<=200)
    {
        //while para identificar os primos
        while(contador<=num1)
        {
            if(num1 % contador == 0)
            {
                divisor++;
            }
            contador++;
        }
        if(divisor == 2)
        {
            printf("%i ", num1);
            num1++;
            divisor=0;
            contador=1;
        }
        else
        {
            num1++;
            divisor=0;
            contador=1;
        }
    }
            printf("\n");

    system ("pause");

    return 0;
}
