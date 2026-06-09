/*
JPA-40: Tabuada com while

Um aluno deseja praticar multiplicação usando repetição.
O programa deve receber um número e mostrar sua tabuada de 1 a 10 utilizando while.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-40: Tabuada com while");
    printf("\n************************************************************\n\n");

    int number;
    int i = 0;

    printf("Escolha o numero da tabuada: ");
    scanf("%d", &number);

    while (i <= 10)
    {
        printf("%d x %d = %d\n", i, number, number * i);
        i++;
    }
    
}