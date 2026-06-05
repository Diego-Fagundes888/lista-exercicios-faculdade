#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF- 30 ...    Fatorial de um número.           *");
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