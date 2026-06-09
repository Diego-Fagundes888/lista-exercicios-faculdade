/*
JPA-22: Par ou ímpar

Em um jogo educativo, o participante digita um número para descobrir sua classificação.
O programa deve verificar se o número informado é par ou ímpar.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-22: Par ou impar");
    printf("\n************************************************************\n\n");

    int number;

    printf("Escolha um numero: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("par");
    }
    else
    {
        printf("impar");
    }
    
    
}