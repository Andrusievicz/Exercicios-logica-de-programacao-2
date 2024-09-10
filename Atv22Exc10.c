#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int num1,num2,num3,menor,medio,maior;

    printf("digite o primeiro valor ");
    scanf("%i", &num1);
    printf("digite o segundo valor ");
    scanf("%i", &num2);
    printf("digite o terceiro valor ");
    scanf("%i", &num3);

    if(num1>num2 && num1>num3)
    {
        maior=num1;
        if(num2>num3)
        {
            menor=num3;
            medio=num2;
        }
        else
        {
            menor=num2;
            medio=num3;
        }
    }
    else if(num2>num1 && num2>num3)
    {
        maior=num2;
        if(num1>num3)
        {
            menor=num3;
            medio=num1;
        }
        else
        {
            menor=num1;
            medio=num3;
        }
    }
    else
    {
        maior=num3;
        if(num1>num2)
        {
            menor=num2;
            medio=num1;
        }
        else
        {
            menor=num1;
            medio=num2;
        }
    }
    printf("os numeros em ordem crescente sao: %i, %i e %i\n", menor,medio,maior);

    system ("pause");

    return 0;
}
