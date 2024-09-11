#include<stdio.h>
#include<stdlib.h>

int main ()
{
//definição variavel
    int menu,menu2;
//menu para leitura da variavel
    printf("menu de calcados\n");
    printf("escolha a opcao\n");
    printf("[1]adulto\n");
    printf("[2]jovem\n");
    printf("[3]infantil\n");
    scanf("%i", &menu);
//caso para variavel
    switch (menu)
    {
    case 1:
        printf("escolha uma das opcoes\n");
        printf("[1] tenis masculino 42 por R$250\n");
        printf("[2] tenis feminio 32 por 150R$\n");
        scanf("%i", &menu2);

        switch (menu2)
        {
        case 1:
            printf("o tenis masculino 42 por R$250 sera enviado ao endereco\n");
            break;
        case 2:
            printf("o tenis feminino 32 por R$150 sera enviado ao endereco\n");
            break;
        }
        break;

        case 2:
            printf("escolha uma das opcoes\n");
            printf("[1] tenis jovem masculino 39 por R$200\n");
            printf("[2] tenis jovem feminino 30 por R$100\n");
            scanf("%i", &menu2);

            switch (menu2)
            {
            case 1:
                printf("tenis jovem masculino 39 por R$200 sera entregue ao endereco\n");
                break;
            case 2:
                printf("tenis jovem feminino 30 por R$100 sera entregue ao endereco\n");
                break;
            }
        break;

            case 3:
                printf("escolha uma das opcoes\n");
                printf("[1] tenis infantil masculino 30 por R$150\n");
                printf("[2] tenis infantil feminino 25 por R$145\n");
                scanf("%i", &menu2);

                switch (menu2)
                {
                case 1:
                    printf("o tenis infantil masculino 30 por R$150 sera entregue ao endereco\n");
                    break;
                case 2:
                    printf("o tenis infantil feminino 25 por R$145 sera entregue ao endereco\n");
                    break;
                }
        break;

    }

    system ("pause");

    return 0;
}



