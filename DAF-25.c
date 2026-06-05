#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-25 ...    Notas e aprovação.                *");
    printf("\n************************************************************\n\n");

    int notaFinal;

    printf("Qual a nota final do aluno: ");
    scanf("%d", &notaFinal);

    if (notaFinal >= 6)
    {
        printf("Aluno aprovado");
    }
    else
    {
        printf("Aluno reprovado");
    }
    
    
}