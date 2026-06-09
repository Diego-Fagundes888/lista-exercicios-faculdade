/*
JPA-28: Soma dos 100 primeiros números naturais

Uma loja deseja calcular rapidamente a soma de uma sequência de números para um relatório simples.
O programa deve calcular a soma dos números de 1 até 100 utilizando um laço for.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-28: Soma dos 100 primeiros numeros naturais");
    printf("\n************************************************************\n\n");

    int soma = 0;

    for (int i = 1; i <= 100; i++)
    {
        soma += i;
        printf("%d\n", soma);
    }
    

}