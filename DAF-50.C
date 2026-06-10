/*
JPA-50: Número positivo obrigatório

Um aplicativo bancário aceita apenas valores positivos para depósitos.
O programa deve pedir ao usuário um número positivo e continuar solicitando enquanto ele digitar valores
menores ou iguais a zero.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-50:    Número positivo obrigatório                       *");                        
    printf("\n************************************************************\n\n");

    int deposito;

    printf("Deposite um valor positivo: ");
    scanf("%d", &deposito);

    do
    {
        if (deposito <= 0)
        {
            printf("Deposite um valor positivo: ");
            scanf("%d", &deposito);
        }
        else
        {
            printf("Deposito realizado");
            break;
        }
        
        
    } while (deposito <= 0);
    


}
