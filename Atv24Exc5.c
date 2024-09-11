#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
//variaveis
    int num1, num2, num3, maior, menor, medio;
//leitura das variaveis
    printf("digite o primeiro valor ");
    scanf("%i", &num1);
    printf("digite o primeiro valor ");
    scanf("%i", &num2);
    printf("digite o primeiro valor ");
    scanf("%i", &num3);
 //ordem dos valores
 if (num1>num2 && num1>num3)
    {
        maior = num1;
        if (num2>num3)
        {
            menor = num3;
            medio = num2;
        }
        else
        {
            menor = num2;
            medio = num3;
        }
    }
    else if (num2>num1 && num2>num3)
    {
        maior = num2;
        if (num1>num3)
        {
            menor = num3;
            medio = num1;
        }
        else

            menor = num1;
            medio = num3;
    }
else
    {
        maior = num3;
        if (num1>num2)
        {
            menor = num2;
            medio = num1;
        }
        else
        {
            menor = num1;
            medio = num2;
        }
    }

    printf("o maior eh %i e o menor eh %i \n", maior, menor);

    system ("pause");

    return 0;
}


