/*
EXERCICIO 9 - LISTA DE REPETICOES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Solicite ao usu�rio dois valores num�ricos de 1 a 6.
 Simule o lan�amento de dois dados . Informe ao usu�rio
 quantos lan�amentos foram necess�rios para obter os
 valores escolhidos por ele.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h> //funcao Sleep (tempo em milissegundos)

int main()
{
    setlocale(LC_ALL,"");

    srand(time(NULL));                       // S� deve ser chamada uma �nica vez

    int NumAleat = 0, valor1, valor2, cont = 0;
    int r = rand();                     // Retorna um n�mero inteiro aleat�rio entre 0 and RAND_MAX, que chega a 32767, mas pode ser limitado

    printf("Digite duas vezes, valores de 1 a 6, que eu direi \n");
    printf("quantos lan�amentos de dados precisou pra chegar neles \n");

    printf("\n primeiro valor:  ");
    scanf("%d", &valor1);
    printf("\n segundo valor:  ");
    scanf("%d", &valor2);

    if(valor1 < 1 || valor1 > 6 || valor2 < 1 || valor2 > 6)    //IF que limita os numeros a 1 e 6
    {
        printf("\n s� podem n�meros de 1 a 6 \n");
        return 0;
    }


    printf("\n ROLAGEM DO PRIMEIRO: \n");               //PRIMEIRO DADO
    while(NumAleat != valor1)
    {
        Sleep(300);                             //Sleep para dar uma sensacao de que o dado esta sendo rolado (visual)
        NumAleat = (rand()%6 +1);               // rand()%6 -----> limita o numero at� 5, o +1 adiciona 1 a esse numero (podendo ir pra 6)
        printf(" %d ", NumAleat);
        cont ++;                                //cont que conta quantas rolagens darao no total
    }
     printf("\n foram necessarias %d rolagens para chegar em %d\n", cont, valor1);

    cont = 0;

    printf("\n -------------------------------------------------------- \n");

     Sleep(1000);
      printf("\n ROLAGEM DO SEGUNDO: \n");
    while(NumAleat != valor2)
    {
        Sleep(300);
        NumAleat = (rand()%6 +1);
        printf(" %d ", NumAleat);
        cont ++;
    }
     printf("\n foram necessarias %d rolagens para chegar em %d", cont, valor2);


}
