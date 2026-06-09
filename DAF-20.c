/*
JPA-20: Ano bissexto

Uma agenda digital precisa descobrir se determinado ano terá 366 dias.
O usuário informa um ano, e o programa deve verificar se ele é bissexto ou não.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-20: Ano bissexto");
    printf("\n************************************************************\n\n");

    int ano;

    printf("Escolha algum ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 != 0)
    {
        printf("E bissexto");
    }
    else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0)
    {
        printf("E bissexto");
    }
    else
    {
        printf("Nao e bissexto");
    }
    
    
    
    
    
    
}