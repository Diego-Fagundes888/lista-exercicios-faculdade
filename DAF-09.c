// Diego Fagundes - 0027084
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-09 ... Par ou Impar.                        *");
    printf("\n************************************************************\n\n");

    int numero;
    printf("Escolha um numero\n");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("o numero escolhido e par\n");
    }else{
        printf("o numero escolhido e impar\n");
    }

    return 0;
}
