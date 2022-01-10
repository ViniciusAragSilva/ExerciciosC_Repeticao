#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max, min, fator, aux;
    printf("    Verificador de div. \n Coloque o valor minimo dos numeros: ");
    scanf("%d", &min);
    printf("\n coloque agora o valor maximo: ");
    scanf("%d", &max);
    printf("\n agora coloque o fator das divisoes, ENTRE 2 E 15: ");
    scanf("%d", &fator);
    printf("\n Numeros no intervalo divisiveis por esse fator: \n");

    if(fator< 2 || fator> 15)                               // if que limita o fator a ser maior que 2 e menor que 15
    {
        printf("\n perai tem que botar numeros entre 2 e 15 \n");
        return 0;
    }
    if(max<min)                                             // if que arruma se a ordem maximo minimo for invertida
    {
        aux = max;
        max = min;
        min = aux;
    }

    for(max=max; max>=min; max--)     // o maximo eh maximo. enquanto o maximo for maior que o minimo, o maximo vai diminuir -1, apos a condicao das chaves for cumprida
    {
        if(max%fator== 0)             // se o resto da divisao do maximo pelo fator der zero, ela aparece no printf
        {
            printf("%d \n", max);
        }
    }
}
