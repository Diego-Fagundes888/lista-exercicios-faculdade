#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-29 ...    Numeros pares de 0 a 50.          *");
    printf("\n************************************************************\n\n");



    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        
    }
    
}