/*
JPA-23: Maior de dois números

Dois atletas registraram suas pontuações em uma prova.
O sistema precisa identificar qual foi a maior pontuação.
O programa deve receber dois números e mostrar qual deles é o maior.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-23: Maior de dois numeros");
    printf("\n************************************************************\n\n");

    int jogador1, jogador2;

    printf("Escolha a pontuacao do jogador 1: ");
    scanf("%d", &jogador1);
    printf("Escolha a pontuacao do jogador 2: ");
    scanf("%d", &jogador2);

    if (jogador1 > jogador2)
    {
        printf("jogador 1 com %d pontos e o maior", jogador1);
    }
    else if (jogador1 == jogador2)
    {
        printf("Ambos jogadores tem a mesmo pontuacao");
    }
    else
    {
        printf("jogador 2 com %d pontos e o maior", jogador2);
    }
    
    
}