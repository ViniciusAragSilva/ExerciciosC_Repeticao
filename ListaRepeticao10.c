/*
EXERCICIO 10 - LISTA DE REPETICOES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  Elabore um algoritmo que escreva os cinco primeiros números perfeitos.
  São números perfeitos, todos aqueles em que a soma dos seus divisores
  é igual ao número em questão.
  EX: 6 = 1 + 2 + 3.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL,"");
     printf ("\n Calculadora de Numeros Perfeitos\n");
     printf ("\n Serão mostrados os 5 primeiros numeros perfeitos (soma dos divisores = numero)\n\n");

    unsigned long int divisor, numeroT, somadiv=0;             // divisor serao os numeros antes do num testado, e numeroT eh o numero de teste

    for ( numeroT=1; numeroT<= 13; numeroT=numeroT+2)        // FOR que conta todos os numeros que serão TESTADOS
    {
        somadiv = 0;                                   // soma dos divisores do numero que esta sendo testado = 0 no inicio
        
        divisor = pow(2, (numeroT - 1))*(pow(2,numeroT)-1);
        printf(" %lu ", divisor); 
}
}
