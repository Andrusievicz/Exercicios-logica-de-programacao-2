#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()

{

  float celsius,fahrenheit;

  printf("Conversor de celsius para fahrenheit\n");
  printf("Digite o valor desejado em celsius\n");
  scanf("%f", &celsius);
  fahrenheit = ((9*celsius)+160)/5;
  printf("O valor em fahrenheit eh: %.1f\n", fahrenheit);

  system ("pause");

  return 0;

}
