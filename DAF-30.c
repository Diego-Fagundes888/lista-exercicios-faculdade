/*
JPA-30: Fatorial de um número

Um aluno de matemática precisa calcular o fatorial de alguns números para resolver exercícios escolares.
O programa deve receber um número e calcular seu fatorial utilizando for.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-30: Fatorial de um numero");
    printf("\n************************************************************\n\n");

    int number;
    int fatorial = 1;
    printf("Escolha um numero: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        fatorial = fatorial * i;
    }

    printf("%d", fatorial);
}