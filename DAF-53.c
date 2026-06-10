/*
JPA-53: Confirmar saída com 's'

Um programa de cadastro possui um menu simples de opções.
Após cada operação, o sistema deve perguntar se o usuário deseja sair. O menu continuará aparecendo até
que o usuário digite a letra "s".
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-53: Confirmar saida com 's'                          *");
    printf("\n************************************************************\n\n");

    int opcao;
    char sair;

    do
    {
        printf("1 - Cadastrar usuario\n");
        printf("2 - Consultar usuario\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        printf("Opcao %d selecionada.\n", opcao);

        printf("Deseja sair? Digite s para sair: ");
        scanf(" %c", &sair);

    } while (sair != 's');

    printf("Programa encerrado.");

}
