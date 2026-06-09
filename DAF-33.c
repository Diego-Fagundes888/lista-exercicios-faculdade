/*
JPA-33: Múltiplos de 3 entre 1 e 30

Um aplicativo educacional deseja destacar os números múltiplos de 3 para os alunos.
O programa deve listar todos os múltiplos de 3 entre 1 e 30.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-33: Multiplos de 3 entre 1 e 30");
    printf("\n************************************************************\n\n");

    for (int i = 1; i <= 30; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
        
    }
    
}