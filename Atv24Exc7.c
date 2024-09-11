#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
//declaração das variaveis
    int idade;
//leitura da variavel
    printf("digite a idade da pessoa ");
    scanf("%i", &idade);
//condição para doar sangue
    if (idade<18 || idade>67)
    {
        printf("nao pode doar sangue\n");
    }
    else
    {
        printf("pode doar sangue\n");
    }
    system ("pause");

    return 0;
}


