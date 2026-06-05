// Diego Fagundes - 0027084
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-01 ... Dinheiro para cinema.                *");
    printf("\n************************************************************\n\n");

    float din;

    printf("QUANTO DINHERO VOCE TEM?");
    scanf("%f", &din);

    if(din > 50){
        printf("AMIGAO VA AO CINEMA, VOCE ESTA RICO");
    }else{
        printf("AMIGAO FIQUE EM CASA ASSISTINDO FAUSTAO");
    }

    return 0;
}
