#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //introdução da variavel
    int counter=1,num1;
    //leitura da variavel
    printf("Digite um valor ");
    scanf("%i", &num1);
    //for para tabuada
    for (counter=1; counter<=10; counter++)
    {
        printf ("%d X %d = %d\n", counter, num1, num1*counter);
    }

    system ("pause");

    return 0;
}
