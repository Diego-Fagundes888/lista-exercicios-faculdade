/*
JPA-59: O Assistente de Direção (GPS Sem Mapa)

Um robô de entregas autônomo está andando por uma fábrica. Ele lê placas com letras que
indicam para qual direção ele deve virar nas esquinas dos corredores.
O Exercício: Faça um programa que leia uma letra maiúscula digitada e exiba o comando de voz
do robô:
'N': "Seguir para o Norte."
'S': "Seguir para o Sul."
'L': "Virar à Leste (Direita)."
'O': "Virar à Oeste (Esquerda)."
Qualquer outra letra: "Comando inválido! Pare o robô."
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-59: O Assistente de Direcao                          *");
    printf("\n************************************************************\n\n");

    char direcao;

    printf("Digite a direcao (N, S, L ou O): ");
    scanf(" %c", &direcao);

    switch (direcao)
    {
    case 'N':
        printf("Seguir para o Norte.");
        break;
    case 'S':
        printf("Seguir para o Sul.");
        break;
    case 'L':
        printf("Virar a Leste (Direita).");
        break;
    case 'O':
        printf("Virar a Oeste (Esquerda).");
        break;
    default:
        printf("Comando invalido! Pare o robo.");
        break;
    }

}
