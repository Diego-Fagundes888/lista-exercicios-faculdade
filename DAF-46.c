/*
JPA-46: Contar de 1 a 10

Uma escola está ensinando estruturas de repetição para iniciantes em programação.
O programa deve imprimir os números de 1 até 10, um por linha, utilizando do...while.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-46:   Contar de 1 a 10                               *");                        
    printf("\n************************************************************\n\n");

    int number = 1;

    do
    {
        printf("%d\n", number);
        number++;
    } while (number <= 10);
    
}
