/*
JPA-24: Pode votar?

Um sistema de cadastro eleitoral precisa verificar se uma pessoa já possui idade para votar.
O usuário informa sua idade, e o programa deve dizer se ele pode ou não votar.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-24: Pode votar?");
    printf("\n************************************************************\n\n");

    int idade;

    printf("qual e a idade de quem vai votar?: ");
    scanf("%d", &idade);

    if (idade >= 16)
    {
        printf("Pode votar");
    }
    else
    {
        printf("Nao pode votar");
    }
    
    
}