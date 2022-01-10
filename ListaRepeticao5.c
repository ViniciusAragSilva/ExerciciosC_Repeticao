#include <stdio.h>
#include <stdlib.h>

/* ------------------------------identificador de numeros primos, feito numa funcao------------------------------------------------- */

int numeroprimo(int num, int cont, int i)   //aqui se inicia a funcao, eh necessario botar a identificacao int em todas as variaveis
{
    cont=0;                                 //o contador realiza uma tarefa de verificacao, vista abaixo na funcao
    if(num== 1|| num==0)
        {
            printf("nao primo");            // anti-numeros 1 e 0 pra nao quebrar a funcao
            return 0;
        }
    for(i=2; i<=num/2; i++)                 // o for conta a variavel "i" ate a metade do numero colocado
    {
        if(num%i== 0)                       // se o resto do numero divido por i for zero, esse numero eh divisivel por algum anterior
            {
                printf("nao primo");
                cont++;                     // o cont soma mais 1 quando o numero NAO eh primo
                break;                      //o break para no mesmo momento em que o if detecta o numero nao primo
            }                               //se depois disso, o resto da divisao do numero por i nao der 0 em nenhum caso, nada eh feito
    }
    if(cont== 0){ printf("primo"); }        //por fim, se o cont se manter em 0, eh sinal que o numero eh primo mesmo
}

int main()
{
    int divisor, numero, contador;
     printf("Identificador de numeros primos. \n bote um numero inteiro ae:  ");
    scanf("%d", &numero);
    numeroprimo(numero, contador, divisor);
}





