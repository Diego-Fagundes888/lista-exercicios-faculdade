#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-21 ...  Número positivo ou negativo.        *");
    printf("\n************************************************************\n\n");

    int money;

    printf("Qual valor: ");
    scanf("%d", &money);

    if (money > 0)
    {
        printf("Adicionado Valor possitivo");
    }
    else if (money < 0)
    {
        printf("Adicionado Valor negativo");
    }
    else
    {
        printf("O Valor escolhido e zero");
    }
    
    
    
}