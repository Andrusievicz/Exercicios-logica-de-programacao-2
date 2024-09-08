#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()

{
    float deposito,jan,fev,mar,ab,mai,jun,jul,ago,set,ou,nov,dez;

    printf("Informe o valor do deposito ");
    scanf("%f", &deposito);
    printf("Informe o valor dos juros de janeiro ");
    scanf("%f", &jan);
    printf("Informe o valor dos juros de fevereiro ");
    scanf("%f", &fev);
    printf("Informe o valor dos juros de marco ");
    scanf("%f", &mar);
    printf("Informe o valor dos juros de abril ");
    scanf("%f", &ab);
    printf("Informe o valor dos juros de maio ");
    scanf("%f", &mai);
    printf("Informe o valor dos juros de junho ");
    scanf("%f", &jun);
    printf("Informe o valor dos juros de julho ");
    scanf("%f", &jul);
    printf("Informe o valor dos juros de agosto ");
    scanf("%f", &ago);
    printf("Informe o valor dos juros de setembro ");
    scanf("%f", &set);
    printf("Informe o valor dos juros de outubro ");
    scanf("%f", &ou);
    printf("Informe o valor dos juros de novembro ");
    scanf("%f", &nov);
    printf("Informe o valor dos juros de dezembro ");
    scanf("%f", &dez);

    jan = deposito*(jan/100);
    fev = deposito*(fev/100);
    mar = deposito*(mar/100);
    ab = deposito*(ab/100);
    mai = deposito*(mai/100);
    jun = deposito*(jun/100);
    jul = deposito*(jul/100);
    ago = deposito*(ago/100);
    set = deposito*(set/100);
    ou = deposito*(ou/100);
    nov = deposito*(nov/100);
    dez = deposito*(dez/100);

    printf("\nO valor rendido em janeiro eh %.1f\n", jan);
    printf("\nO valor rendido em fevereiro eh %.1f", fev);
    printf("\nO valor rendido em marco eh %.1f", mar);
    printf("\nO valor rendido em abril eh %.1f", ab);
    printf("\nO valor rendido em maio eh %.1f", mai);
    printf("\nO valor rendido em junho eh %.1f", jun);
    printf("\nO valor rendido em julho eh %.1f", jul);
    printf("\nO valor rendido em agosto eh %.1f", ago);
    printf("\nO valor rendido em setembro eh %.1f", set);
    printf("\nO valor rendido em outrubro eh %.1f", ou);
    printf("\nO valor rendido em novembro eh %.1f", nov);
    printf("\nO valor rendido em dezembro eh %.1f\n", dez);




    system ("pause");

    return 0;

}

