// Diego Fagundes - 0027084
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-06 ... Percentual de Faltas e Presenca.     *");
    printf("\n************************************************************\n\n");

    int tf, tp, ta;
    float pf, pp;

    printf("digite o total de faltas\n");
    scanf("%d", &tf);
    printf("digite o total de presenca\n");
    scanf("%d", &tp);

    ta = tf + tp;
    pf = (float) tf / ta;
    pp = (float) tp / ta;

    printf("o percentual de faltas foi de: %.2f\n", pf*100);
    printf("o percentual de presenca foi de: %.2f\n", pp*100);

    return 0;
}
