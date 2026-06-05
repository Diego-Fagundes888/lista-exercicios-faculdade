// Diego Fagundes - 0027084
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-03 ... Idade em Dias.                       *");
    printf("\n************************************************************\n\n");

    int idade;

    printf("programa que calcula idade em dias\n");
    printf("qual e sua idade\n");
    scanf("%d", &idade);

    idade = idade * 365.25;

    printf("Sua idade em dias e: %d\n", idade);

    return 0;
}
