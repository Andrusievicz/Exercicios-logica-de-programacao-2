#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //introdução da variavel
    int counter=0, variable;
    //leitura da variavel
    printf("Digite um valor acima de 100,000 ");
    scanf("%i", &variable);
    //for pra multiplos de 10 sobre a variavel
    for (counter; counter<=variable; counter++)
    {
        if(counter%10==0)
        {
            printf("%i ", counter);
        }
    }

    system("pause");

    return 0;
}
