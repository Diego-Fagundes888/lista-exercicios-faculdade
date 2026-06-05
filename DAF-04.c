// Diego Fagundes - 0027084
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-04 ... Consumo de Combustivel.              *");
    printf("\n************************************************************\n\n");

    float media, km, consumo;
    printf("a distancia percorrida do automovel\n");
    scanf("%f", &km);
    printf("o total de combustivel gasto\n");
    scanf("%f", &consumo);
    media = km / consumo;
    printf("consumo total gasto: %.2f\n", media);

    return 0;
}
