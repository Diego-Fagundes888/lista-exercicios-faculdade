#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF- 33 ...     Múltiplos de 3 entre 1 e 30.  *");
    printf("\n************************************************************\n\n");

    for (int i = 1; i <= 30; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
        
    }
    
}