#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //introdução das variaveis
    int contador=0, num=0;
    //leitura da variavel
    printf ("Digite um numero: ");
    scanf ("%d",&num);

    printf ("\n");
    //while para fazer a tabuada
    while (contador<=9)
    {
        contador++;
        printf ("%d X %d = %d\n", contador, num, num*contador);
    }
    system ("pause");

    return 0;
}



