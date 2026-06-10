/*
JPA-54: Validar número entre 1 e 5

Um jogo educativo aceita apenas níveis de dificuldade entre 1 e 5.
O programa deve pedir ao usuário um número dentro desse intervalo e continuar solicitando enquanto o
valor digitado for inválido.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-54: Validar numero entre 1 e 5                       *");
    printf("\n************************************************************\n\n");

    int nivel;

    do
    {
        printf("Digite um nivel entre 1 e 5: ");
        scanf("%d", &nivel);

    } while (nivel < 1 || nivel > 5);

    printf("Nivel %d selecionado.", nivel);

}
