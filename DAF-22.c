#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-22 ...  Par ou ímpar.                       *");
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