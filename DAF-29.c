/*
JPA-29: Números pares de 0 a 50

Um jogo educativo precisa mostrar apenas os números pares para ensinar matemática básica.
O programa deve exibir todos os números pares entre 0 e 50.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-29: Numeros pares de 0 a 50");
    printf("\n************************************************************\n\n");



    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        
    }
    
}