/*
EXERCICIO 10 - LISTA DE REPETICOES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  Elabore um algoritmo que escreva os cinco primeiros n�meros perfeitos.
  S�o n�meros perfeitos, todos aqueles em que a soma dos seus divisores
  � igual ao n�mero em quest�o.
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
     printf ("\n Ser�o mostrados os 5 primeiros numeros perfeitos (soma dos divisores = numero)\n\n");

    unsigned long int divisor, numeroT, somadiv=0;             // divisor serao os numeros antes do num testado, e numeroT eh o numero de teste

    for ( numeroT=1; numeroT<= 13; numeroT=numeroT+2)        // FOR que conta todos os numeros que ser�o TESTADOS
    {
        somadiv = 0;                                   // soma dos divisores do numero que esta sendo testado = 0 no inicio
        
        divisor = pow(2, (numeroT - 1))*(pow(2,numeroT)-1);
        printf(" %lu ", divisor); 
}
}
