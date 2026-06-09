/*
JPA-27: Tabuada de um número

Um estudante está treinando matemática e deseja visualizar rapidamente a tabuada de um número.
O programa deve receber um número digitado pelo usuário e mostrar sua tabuada de 1 a 10 usando for.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-27: Tabuada de um numero");
    printf("\n************************************************************\n\n");

    int number;

    printf("Escolha o numero da tabuada: ");
    scanf("%d", &number);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
}