/*
JPA-47: Tabuada de um número

Um estudante quer praticar multiplicação usando a estrutura do...while.
O programa deve receber um número e exibir sua tabuada de 1 até 10.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-47:   Tabuada de um número                           *");                        
    printf("\n************************************************************\n\n");

    int number, i = 0;

    printf("Escolha um numero: ");
    scanf("%d", &number);

    do
    {
        printf("%d x %d = %d\n", i, number, number * i);
        i++;
    } while (i <=10);
    
}
