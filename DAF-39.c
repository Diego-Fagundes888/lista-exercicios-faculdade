#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF- 39 ...   Verificar se um numero e positivo.*");
    printf("\n************************************************************\n\n");

    int number;

    printf("Qual valor dejesa depositar: ");
    scanf("%d", &number);

    while (number < 0)
    {
        printf("Valor invalido digite novamente: ");
        scanf("%d", &number);
    }

    printf("Depositado");
}