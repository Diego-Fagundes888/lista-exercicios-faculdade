#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-27 ...    Tabuada de um número.             *");
    printf("\n************************************************************\n\n");

    int number;

    printf("Escolha o numero da tabuada: ");
    scanf("%d", &number);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
}