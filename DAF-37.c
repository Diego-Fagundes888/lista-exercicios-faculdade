#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF- 37 ...  Soma de números até digitar zero.  *");
    printf("\n************************************************************\n\n");

    int number, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &number);
    while (number != 0)
    {
        soma = soma + number;
        printf("A soma: %d\n", soma);
        printf("Digite um numero");
        scanf("%d", &number);
    }

    printf("Soma final: %d", soma);
}
