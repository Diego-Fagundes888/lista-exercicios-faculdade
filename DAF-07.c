// Diego Fagundes - 0027084
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-07 ... Positivo Negativo ou Zero.           *");
    printf("\n************************************************************\n\n");

    int numero;

    printf("escolha um numero negativou ou positivo\n");
    scanf("%d", &numero);

    if(numero >= 0){
        if(numero == 0){
            printf("o numero escolhido e zero\n");
        }else{
            printf("o numero escolhido e positivo\n");
        }
    }else{
        printf("o numero escolhido e negativo\n");
    }

    return 0;
}
