#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-28 ...   Soma dos 100 primeiros números.    *");
    printf("\n************************************************************\n\n");

    int soma = 0;

    for (int i = 1; i <= 100; i++)
    {
        soma += i;
        printf("%d\n", soma);
    }
    

}