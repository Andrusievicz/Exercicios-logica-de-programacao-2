#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
//definição das variaveis
    float nota1,nota2,nota3,media;
    char nome[20];
//leituras das variaveis
    printf("Digite o nome do aluno ");
    scanf("%s", &nome);
    printf("Digite a primeira nota do aluno ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno ");
    scanf("%f", &nota3);
//declarando a media e printando os valores finais
    media = (nota1+nota2+nota3)/3;
    printf("O aluno %s com a primeira nota de %.2f a segunda de %.2f e a terceira de %.2f tem uma media de %.2f\n", nome,nota1,nota2,nota3,media);

    system ("pause");

    return 0;
}
