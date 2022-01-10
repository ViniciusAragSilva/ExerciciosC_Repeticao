#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

     printf("Esse programa exibe 15 numeros multiplos de 7\n");
     printf("\n------------------------------------------------\n");

    for(i=7; i<=105; i++)
    {
        if(i%7 == 0)
        {
            printf("%d\n", i);
        }

    }
    printf("------------------------------------------------\n");
}
