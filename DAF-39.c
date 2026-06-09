/*
JPA-39: Verificar se um número é positivo

Um sistema financeiro só aceita valores positivos para cadastro.
O programa deve continuar pedindo números até que o usuário digite um número positivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-39: Verificar se um numero e positivo");
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