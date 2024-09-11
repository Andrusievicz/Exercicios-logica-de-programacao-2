#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
//variavel para a senha
    int senha;
//leitura da variavel
    printf("digite a senha ");
    scanf("%i", &senha);
//condicional para verificar senha
    if (senha == 1234)
    {
        printf(" ACESSO PERMITIDO \n");
    }
    else
    {
        printf(" ACESSO NEGADO \n");
    }

    system ("pause");

    return 0;
}

