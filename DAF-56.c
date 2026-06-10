/*
JPA-56 . O Menu do Fast-Food Digital

Você está programando o totem de autoatendimento de uma lanchonete. O cliente vê uma tela
com as opções de combos e digita o número do seu pedido.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-56: O Menu do Fast-Food Digital                      *");
    printf("\n************************************************************\n\n");

    int op;

    printf("1: Combo Hambarguer + Batata + Refri - R$ 30,00\n");
    printf("2: Combo Pizza Brotinho + Refri - R$ 25,00\n");
    printf("3: Combo Salada + Suco Natural - R$ 22,00\n");
    printf("4: Combo Balde de Frango + Molho - R$ 35,00\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("combo 1 escolhido valor: R$30,00");
        break;
    case 2:
        printf("combo 2 escolhido valor: R$25,00");
        break;
    case 3: 
        printf("combo 3 escolhido valor: R$22,00");
        break;
    case 4: 
        printf("combo 4 escolhido valor: R$35,00");
        break;
    default:
        printf("Opçao invalida! Escolha de 1 a 4.");
        break;
    }
}
