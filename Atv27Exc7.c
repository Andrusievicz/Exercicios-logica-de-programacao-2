#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //introdução das variaveis
    int opcao, prato1, prato2, prato3, loop;
    //do para o menu
    do
    {
        printf("Menu restaurante senai");
        printf("\n[1] Executivo Frango");
        printf("\n[2] Executivo Bife");
        printf("\n[3] Executivo Alcatra\n");
        scanf("%i", &opcao);
        system("cls");//limpa tela
        //switch para as opcoes
        switch (opcao)
        {
        case 1:
            printf("\nExecutivo de frango acompanha: farofa, arroz feijao e batata por R$15,00");
            break;
        case 2:
            printf("\nExecutivo de Bife acompanha: arroz, feijao, batata, farofa e salada por R$18,00");
            break;
        case 3:
            printf("\nExecutivo de Alcatra acompanha: arroz, feijao, batata, farofa, salada e refrigerante por R$25,00");
            break;
        default:
            printf("\nEscolha uma opcao valida");
        }
        printf("\n[1] Cconsultar menu novamente [2] Sair\n");
        scanf("%i", &loop);
        system("cls");//limpa tela
    }
    while (loop==1);

    system ("pause");

    return 0;
}
