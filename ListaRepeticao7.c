/*
EXERCICIO 7 - LISTA DE REPETICOES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
Gere uma s�rie de N numeros aleat�rios,
com valores entre 0 e 1000, quantidade esta
definida pelo usu�rio. Exiba  na tela a s�rie gerada
e, ao final:
a) O maior valor da s�rie;
b) O menor valor da s�rie;
c) A m�dia aritm�tica da s�rie;
d) A quantidade de n�meros primos desta s�rie.
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

    srand(time(NULL));                       // S� deve ser chamada uma �nica vez

    int NumAleat = 0, Cont = 0, Interv, contador, divisor;
    int MaiorA = 0, MenorA = 1000;           // o maior e o menor servirao de comparacao a seguir
    float MediaA = 0;
    int r = rand();                         // Retorna um n�mero inteiro aleat�rio entre 0 e RAND_MAX, que chega a 32767, mas pode ser limitado

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
      printf("\n a) --> %d � o MAIOR Numero dessa s�rie \n", MaiorA);
      printf("\n b) --> %d � o MENOR Numero dessa s�rie \n", MenorA);
      printf("\n c) --> %.2f � a M�DIA Aritm�tica dessa s�rie \n", MediaA/Interv);
      printf("\n d) --> temos %d primos nesse intervalo \n", prime);
}



