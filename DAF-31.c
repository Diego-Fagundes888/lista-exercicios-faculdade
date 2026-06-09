/*
JPA-31: Contagem regressiva

Uma competição escolar utiliza uma contagem regressiva antes da largada.
O programa deve mostrar os números de 10 até 1 na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-31: Contagem regressiva");
    printf("\n************************************************************\n\n");

    int number = 0;

    for (int i = 10; i >= number; i--)
    {
        printf("%d\n", i);
    }
    
}