#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF- 32 ...    Quadrado dos números de 1 a 10.  *");
    printf("\n************************************************************\n\n");

    int number = 10;

    for (int i = 0; i <= number; i++)
    {
        printf("o numero %d ao quadrado e: %d\n",i , i * i);
    }
    
}