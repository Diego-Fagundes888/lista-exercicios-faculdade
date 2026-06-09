/*
JPA-43: Soma dos pares entre 1 e 100

Um professor propôs um desafio para calcular apenas os números pares de uma sequência.
O programa deve somar todos os números pares entre 1 e 100 utilizando while
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-43:  Soma dos pares entre 1 e 100                    *");                        
    printf("\n************************************************************\n\n");

    int i = 1, soma = 0;

    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
        i++;
    }

    printf("A soma dos pares de 1 ate 100 e : %d", soma);
}