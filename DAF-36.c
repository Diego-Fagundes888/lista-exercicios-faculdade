/*
JPA-36: Contar até 10 com while

Uma criança está aprendendo contagem numérica no computador.
O programa deve imprimir os números de 1 até 10 usando while.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-36: Contar ate 10 com while");
    printf("\n************************************************************\n\n");

    int number = 0;

    while (number <= 10)
    {
        printf("%d\n", number);
        number++;
    }
    
}