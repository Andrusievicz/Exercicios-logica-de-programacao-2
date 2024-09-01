#include<stdio.h>
#include<stdlib.h>

int main ()

{
    char nome[10];
    printf ("Digite seu nome:\n");
    scanf("%s", &nome);
    printf ("Nome: %s\n", &nome);

    system ("pause");

    return (0);
}
