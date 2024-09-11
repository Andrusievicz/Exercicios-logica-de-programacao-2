#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //definição variavel
    int choice;
//menu e leitura da variavel
    printf("***** receitas do senai *****\n");
    printf("escolha uma das opcoes do menu\n");
    printf("1 - bolo de fuba\n");
    printf("2 - bolo de laranja\n");
    printf("3 - bolo de cenoura\n");
    scanf("%i", &choice);
//utiliação da variavel para caso
    switch (choice)
    {
    case 1:
        printf("1 passo - Com auxilio de uma peneira, coloque 2 xicaras de cha de fuba, 1 xicara de cha de farinha de trigo e 1 colher de sopa de fermento em po em um recipiente. Misture e reserve.\n");
        printf("2 passo - No liquidificador, coloque 3 ovos, 1 xicara de cha de leite, 1 xicara de cha de oleo e 2 xicaras de cha de acucar. Bata ate ficar homogeneo.\n");
        printf("3 passo - Junte a mistura do liquidificador com os ingredientes peneirados e misture.\n");
        printf("4 passo - Transfira a massa para uma forma untada com manteiga e polvilhada com fuba.\n");
        printf("5 passo - Leve para assar em forno preaquecido a 180 graus Celsius por 30 minutos.\n");
        break;
    case 2:
        printf("1 passo - Em uma tigela, coloque 3 ovos, 2 colheres de sopa de margarina e 1 xicara de acucar. Misture.\n");
        printf("2 passo - Em seguida, acrescente 2 xicaras de farinha de trigo e misture novamente.\n");
        printf("3 passo - Depois, despeje 1 xicara de suco de laranja na tigela e misture novamente.\n");
        printf("4 passo - Por fim, adicione 1 colher de sopa de fermento e misture novamente.\n");
        printf("5 passo - Transfira a massa para uma forma redonda com furo.\n");
        printf("6 passo - Leve para assar em forno preaquecido a 180 graus Celsius por 30 minutos.\n");
        break;
    case 3:
        printf("1 passo - No liquidificador, coloque 3 cenouras medias, 3 ovos, 1 xicara de oleo de canola e 2 xicaras de acucar. Bata ateh ficar homogeneo.\n");
        printf("2 passo - Em uma tigela, coloque 2 xicaras de farinha de trigo, 1 pitada de sal e 1 colher de sopa de fermento quimico. Misture.\n");
        printf("3 passo - Em seguida, adicione a mistura do liquidificador na tigela.\n");
        printf("4 passo - Com um fouet, misture ateh ficar homogeneo.\n");
        printf("5 passo - Transfira a massa para uma forma untada e enfarinhada.\n");
        printf("6 passo - Leve para assar em forno preaquecido a 180 graus Celsius por 40 minutos.\n");
        break;

    }

    system ("pause");

    return 0;
}

