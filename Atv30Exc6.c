#include<stdio.h>
#include<stdlib.h>

int main()
{
    int counter,numeros,qntnumeros=10,numeroscounter=0;


    for (counter=1; counter<=qntnumeros; counter++)
    {
        printf("Digite %i numero \n", counter);
        scanf("%i", &numeros);

        if (numeros>=30 && numeros<=90)
        {
            numeroscounter++;
        }

    }

    printf("Numeros entre 30 a 90 sao: %i\n", numeroscounter);

    system ("pause");

    return 0;
}

