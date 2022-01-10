/*
EXERCICIO 7 - LISTA DE REPETICOES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
Gere uma série de N numeros aleatórios,
com valores entre 0 e 1000, quantidade esta
definida pelo usuário. Exiba  na tela a série gerada
e, ao final:
a) O maior valor da série;
b) O menor valor da série;
c) A média aritmética da série;
d) A quantidade de números primos desta série.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>   // biblioteca que contem os arquivos de tempo, usados para realizar numeros aleatorios

int prime;                  //variavel global adicional, feita para identificar quantos numeros primos ha no intervalo


int numeroprimo(int num, int cont, int i)
   {
    cont=0;

    for(i=2; i<=num/2; i++)
    {
        if(num%i== 0)
            {
                cont++;
                break;
            }
    }
    if(cont== 0){prime++;}
   }

int main()
{
     setlocale(LC_ALL,"");

    srand(time(NULL));                       // Só deve ser chamada uma única vez

    int NumAleat = 0, Cont = 0, Interv, contador, divisor;
    int MaiorA = 0, MenorA = 1000;           // o maior e o menor servirao de comparacao a seguir
    float MediaA = 0;
    int r = rand();                         // Retorna um número inteiro aleatório entre 0 e RAND_MAX, que chega a 32767, mas pode ser limitado

    printf("Digite um intervalo N que serao realizadas varias operacoes: \n");
    scanf("%d", &Interv);

    for(Cont ==0; Cont < Interv; Cont ++)  // esse FOR limita a contagem ao intervalo dado
        {
            NumAleat = (rand()%1001);          //essa operacao atribui ao NumAleat valores entre 0 e 1000 (1001 - 1 eh o valor)
            printf(" %d ", NumAleat);

            if(NumAleat < MenorA)
                {MenorA = NumAleat;}      //se o numero aleatorio for MENOR que o numero que tinha antes, ele troca

            if(NumAleat > MaiorA)
                {MaiorA = NumAleat;}  //Se o numero aleatorio for MAIOR que o numero que tinha antes, ele troca

            numeroprimo(NumAleat, contador, divisor);

            MediaA = (MediaA + NumAleat);

        }
      printf("\n--------------------------------------------------------------------------");
      printf("\n a) --> %d é o MAIOR Numero dessa série \n", MaiorA);
      printf("\n b) --> %d é o MENOR Numero dessa série \n", MenorA);
      printf("\n c) --> %.2f é a MÉDIA Aritmética dessa série \n", MediaA/Interv);
      printf("\n d) --> temos %d primos nesse intervalo \n", prime);
}



