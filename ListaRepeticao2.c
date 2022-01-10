#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

     printf("Esse programa exibe numeros, de 1000 a 1999. \n esses numeros, divididos por 11, dao resto 5\n");
     printf("\n------------------------------------------------\n");

    for(i=1000; i<2000; i++)
    {
        if(i%11 == 5)
        {
            printf("%d \n", i);
        }
    }
     printf("\n------------------------------------------------\n");

}
