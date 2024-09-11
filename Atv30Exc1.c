#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //varariavel até 1000
    int counter=1000;
   //for para printar até 3000 com multiplos de 11 de resto 5
    for (counter; counter<=3000; counter++)
    {
        if (counter%11==5)
        {
        printf("%i ", counter);
        }
    }

    system("pause");

    return 0;
}
