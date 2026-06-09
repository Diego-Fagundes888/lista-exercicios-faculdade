/*
JPA-17: O Sensor do Parque Temático

Você foi contratado para programar o sistema de segurança de uma nova montanha-russa em um parque de
diversões. Por motivos de segurança, existe uma altura mínima de 140 centímetros (1,40m) para poder
entrar no brinquedo.
Na entrada, há um sensor digital que mede a altura da criança em centímetros. O seu trabalho é criar o
algoritmo que lê essa altura e decide se o painel vai acender a luz verde (liberado) ou a luz vermelha
(barrado).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-17: O Sensor do Parque Tematico");
    printf("\n************************************************************\n\n");

    int altura;

    printf("Qual a sua altura(cm): ");
    scanf("%d", &altura);

    if (altura >= 140)
    {
        printf("Luz verde");
    }
    else
    {
        printf("Luz vermelha");
    }
    
}
