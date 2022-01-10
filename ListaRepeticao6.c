#include <stdio.h>
#include <stdlib.h>

// --------------------------------------Encontrador de numeros primos em um intervalo----------------------------------------------------------

int prime;                  //variavel global adicional, feita para identificar quantos numeros primos ha no intervalo


int numeroprimo(int num, int cont, int i)           // todas as variaveis devidamente identificadas nessa funcao
{
    cont=0;
    if(num== 1|| num==0)                            // esse if tira o erro do numero ser 1 ou 0
        {
            printf("nao primo");
            return 0;
        }
    for(i=2; i<=num/2; i++)                         // a variavel i conta ate a metade do numero colocado
    {
        if(num%i== 0)                               // o if ve se o resto do numero colocado dividido por i eh 0, isso ate i ser a metade do numero
            {
                printf("\n %d nao primo", num);     // se for 0 em algum caso, o numero nao eh primo (um numero eh divisivel por ele)
                cont++;                             // o cont eh soma 1 quanto NAO EH PRIMO
                break;
            }
    }
    if(cont== 0)                                    // se depois de tudo, nao houver resto de num/i igual a zero, cont nao soma, e cont fica zero
    {
            printf("\n %d primo", num);             // logo, se cont ficou ZERO, o numero eh PRIMO
            prime++;                                // o prime soma +1 quando o numero nao eh primo
    }
}

int main()
{
    int max, min, troca, contador, divisor, total;
    total = 0;                                      // o total eh o total de numeros primos no intervalo, igual zero no inicio
    printf("digite o intervalo de numeros que eu vejo quais sao primos:  \n");
    printf("\n minimo: ");
    scanf("%d", &min);
    printf("\n maximo: ");
    scanf("%d", &max);

    if(min > max)                               // se alguem botar o maximo MENOR que o minimo, esse if arruma
    {
        troca = min;
        min = max;
        max = troca;
    }
    for(contador = min; contador <= max; contador++)        // o contador eh o numero minimo, enquanto ele nao for o maximo, ele vai somar +1 e vai...
    {
        numeroprimo(contador, troca, divisor);              // identificar se contador eh primo ou nao

    }
     printf("\n temos %d primos nesse intervalo", prime);   // no fim, prime dira quantos primos teve nesse intervalo
}






