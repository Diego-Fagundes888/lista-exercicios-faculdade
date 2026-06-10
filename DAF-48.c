/*
JPA - 48. Menu com opção de sair

Faça um programa mostrando um menu de opções. Ele fica pedindo para o usuário escolher entre duas opções
(digitar 1 para mostrar uma mensagem ou 2 para sair) até que o usuário escolha a opção 2. O fluxo de execução é o
seguinte:
O programa exibe o menu com as opções: "1 - Mensagem" ou "2 - Sair".
Se o usuário escolher 1, ele imprime a mensagem "Você escolheu a mensagem!".
O programa continuará executando o menu até que o usuário escolha 2 para sair.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-48:    Menu com opção de sair                        *");                        
    printf("\n************************************************************\n\n");

    int op;

            printf("==== menu ====\n");
            printf("1 - Mensagem\n");
            printf("2 - Sair\n");
            scanf("%d", &op);

            do
            {
                {
                if (op == 1)
                {
                    printf("Voce escolheu a mensagem!\n");
                    op--;
                }
                else
                {
                    printf("==== menu ====\n");
                    printf("1 - Mensagem\n");
                    printf("2 - Sair\n");
                    scanf("%d", &op);
                }  
            }
            }while (op != 2);
            
            
    
}
