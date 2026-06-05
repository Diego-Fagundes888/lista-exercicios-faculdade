#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF- 35 ...     Números de Fibonacci (n termos).*");
    printf("\n************************************************************\n\n");

    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }
    
}