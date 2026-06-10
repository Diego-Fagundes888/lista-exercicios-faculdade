/*
JPA-60: O Validador de Dias Úteis

O sistema de catracas de uma empresa precisa saber se um funcionário pode entrar no prédio.
No sábado e no domingo a empresa fecha, e a entrada só é permitida de segunda a sexta-feira.
O Exercício: Crie um script que receba um número de 1 a 7 (onde 1 é Domingo, 2 é Segunda, e
assim por diante). O programa deve agrupar os casos e exibir se é um dia de trabalho ou
descanso:
2, 3, 4, 5, 6: Exibir "Dia Útil. Acesso liberado para o trabalho."
1, 7: Exibir "Fim de Semana. Prédio fechado."
Outros números: "Número de dia inválido".
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-60: O Validador de Dias Uteis                        *");
    printf("\n************************************************************\n\n");

    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Dia Util. Acesso liberado para o trabalho.");
        break;
    case 1:
    case 7:
        printf("Fim de Semana. Predio fechado.");
        break;
    default:
        printf("Numero de dia invalido.");
        break;
    }

}
