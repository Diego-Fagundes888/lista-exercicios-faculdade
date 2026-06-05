// Diego Fagundes - 0027084
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-05 ... Valor com Taxa.                      *");
    printf("\n************************************************************\n\n");

    float ta, te, vp;

    printf("isira o valor da taxa\n");
    scanf("%f", &ta);
    te = 0.8 * ta;
    vp = ta + te;
    printf("o valor a ser pago e: %.2f\n", vp);

    return 0;
}
