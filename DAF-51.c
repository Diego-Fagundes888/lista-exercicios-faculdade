/*
JPA-51: Contagem regressiva de 10 até 1

Uma corrida escolar utiliza uma contagem regressiva antes da largada.
O programa deve mostrar os números de 10 até 1 em ordem decrescente utilizando do...while.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-51: Contagem regressiva de 10 ate 1                  *");
    printf("\n************************************************************\n\n");

    int numero = 10;

    do
    {
        printf("%d\n", numero);
        numero--;
    } while (numero >= 1);

}
