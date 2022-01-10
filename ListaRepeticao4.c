#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;


    for(i=0; i<100; i++)
    {

         if(i%6==0)             //esse esquema de if-else eh bem util para fazer essa troca, numa sequencia. Vlw Rocha!!!!
         {
             printf("xx \n");

         }else
         {
             printf("%d \n", i);
         }
    }
}
