#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    int exc1,exc2,exc3,exc4;

    printf("Digite o primeiro numero ");
    scanf("%i", &n1);
    printf("\nDigite o segundo numero ");
    scanf("%i", &n2);
    printf("\nDigite o terceiro numero ");
    scanf("%i", &n3);
    printf("\nDigite o quarto numero ");
    scanf("%i", &n4);
    printf("\nDigite o quinto numero ");
    scanf("%i", &n5);
    printf("\nDigite o sexto numero ");
    scanf("%i", &n6);
    printf("\nDigite o setimo numero ");
    scanf("%i", &n7);
    printf("\nDigite o oitavo numero ");
    scanf("%i", &n8);
    printf("\nDigite o nono numero ");
    scanf("%i", &n9);
    printf("\nDigite o decimo numero ");
    scanf("%i", &n10);

    exc1 = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
    exc2 = n6-n7-n8-n9-n10;
    exc3 = (n1+n2+n3+n4+n5+n6+n7+n8+n9)/n10;
    exc4 = (n1+n2+n3+n4+n5+n6+n7+n8+n9)*n10;

    printf("\nA adicao de todos os valores eh %i\n", exc1);
    printf("\nA subtracao dos ultimos 5 digitos eh %i\n", exc2);
    printf("\nA soma dos primeiros 9 digitos e divisao pelo ultimo digito eh %i\n", exc3);
    printf("\nA soma dos primeiros 9 digites e a multipliacao pelo o ultimo digito eh %i\n", exc4);

    system ("pause");

    return 0;

}

