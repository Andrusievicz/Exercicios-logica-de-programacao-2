#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
//definição das variaveis
    int choice;
    float preco,cred,cred1,din,din1,deb,deb1;
//leitura das variaveis
    printf("Digite o valor da compra ");
    scanf("%f", &preco);
    printf("Escolha o metodo de pagamento\n");
    printf("[1]Cartao de credito acrescimo de 10%%\n");
    printf("[2]Dinheiro desconto de 5%%\n");
    printf("[3]Cartao de debito acrescimo de 3%%\n");
    scanf("%i", &choice);
//caso para escolher os descontos e acrescimos
    switch (choice)
    {
    case 1:
        cred = preco*1.10;
        cred1 = cred-preco;
        printf("O valor total da compra vai ser %.2f com o valor inicial de %.2f com acrescimo de %.2f no cartao de credito\n", cred,preco,cred1);
        break;
    case 2:
        din = preco*0.05;
        din1 = preco-din;
        printf("O valor total da compra vai ser %.2f com o valor inicial de %.2f com desconto de %.2f no dinheiro\n", din1,preco,din);
        break;
    case 3:
        deb = preco*0.03;
        deb1 = preco-deb;
        printf("O valor total da compra vai ser %.2f com o valor inicial de %.2f com desconto de %.2f no cartao de debito\n", deb1,preco,deb);
        break;

    }

    system("pause");

    return 0;

}
