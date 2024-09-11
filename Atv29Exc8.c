#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //introdução da variavel
    int counter=1,num1;
    //leitura da variavel para fazer a tabela
    printf("Digite um valor ");
    scanf("%i", &num1);
    printf("IMPARES\t PARES\n");//formato tabela
    //for para fazer a tabela
    for (counter=1; counter<=num1; counter++)
    {
        if (counter%2==1)
        {
            printf("%i\t ", counter);
        }
        else
        {
            printf("%i\n ", counter);
        }
    }

    system ("pause");

    return 0;
}


