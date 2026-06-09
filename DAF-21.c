/*
JPA-21: Número positivo ou negativo

Um aplicativo financeiro registra lucros e prejuízos.
Valores positivos representam lucro e valores negativos representam prejuízo.
O programa deve receber um número e informar se ele é positivo, negativo ou zero.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-21: Numero positivo ou negativo");
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