// Diego Fagundes - 0027084
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-08 ... Maior de Dois Numeros.               *");
    printf("\n************************************************************\n\n");

    int n1, n2;

    printf("escolha o primeiro numero\n");
    scanf("%d", &n1);
    printf("escolha o segundo numero\n");
    scanf("%d", &n2);

    if(n1 >= n2){
        if(n1 == n2){
            printf("os dois numeros escolhidos sao iguas\n");
        }else{
            printf("o numero %d e o maior escolhido\n", n1);
        }
    }else{
        printf("o numero %d e o maior escolhido\n", n2);
    }

    return 0;
}
