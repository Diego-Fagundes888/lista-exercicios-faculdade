/*
JPA-57: A Central do Brinquedo Eletrônico

Um urso de pelúcia eletrônico tem um botão central. Cada vez que a criança aperta o botão, o
urso fala uma frase diferente dependendo da cor que acende na sua barriga.
O Exercício: Desenvolva a lógica do urso. O algoritmo deve receber uma palavra (texto) com a
cor que acendeu e exibir a fala do brinquedo:
"Verde": O urso diz: "Vamos brincar lá fora!"
"Amarelo": O urso diz: "Estou ficando com soninho..."
"Vermelho": O urso diz: "Estou com fome, hora do lanche!"
Caso seja outra cor: O urso apenas pisca as luzes (Mensagem: "Cor desconhecida").
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-57: A Central do Brinquedo Eletronico                *");
    printf("\n************************************************************\n\n");

    char cor[20];
    int opcao = 0;

    printf("Digite a cor que acendeu: ");
    scanf("%19s", cor);

    if (strcmp(cor, "Verde") == 0 || strcmp(cor, "verde") == 0)
    {
        opcao = 1;
    }
    else if (strcmp(cor, "Amarelo") == 0 || strcmp(cor, "amarelo") == 0)
    {
        opcao = 2;
    }
    else if (strcmp(cor, "Vermelho") == 0 || strcmp(cor, "vermelho") == 0)
    {
        opcao = 3;
    }

    switch (opcao)
    {
    case 1:
        printf("O urso diz: Vamos brincar la fora!");
        break;
    case 2:
        printf("O urso diz: Estou ficando com soninho...");
        break;
    case 3:
        printf("O urso diz: Estou com fome, hora do lanche!");
        break;
    default:
        printf("Cor desconhecida");
        break;
    }

}
