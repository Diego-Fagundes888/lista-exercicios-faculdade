/*
JPA-45: Menu até escolher sair

Um caixa eletrônico simples apresenta opções ao usuário.
O programa deve exibir um menu repetidamente até que a opção “sair” seja escolhida.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-45:   Menu até escolher sair                         *");                        
    printf("\n************************************************************\n\n");

    int op;

    printf("====== Menu ======\n");
    printf("1. perfil \n");
    printf("2. saldo\n");
    printf("3. sacar\n");
    printf("0. Sair \n");
    scanf("%d", &op);

    while (op != 0)
    {
        printf("====== Menu ======\n");
        printf("1. perfil \n");
        printf("2. saldo\n");
        printf("3. sacar\n");
        printf("0. Sair \n");
        scanf("%d", &op);
    }
    
}
