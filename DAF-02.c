// Diego Fagundes - 0027084
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-02 ... Area do Circulo.                     *");
    printf("\n************************************************************\n\n");

    float area, raio;
    

    printf("PROGRAMA QUE CALCULA A AREA DO CIRCULO\n");
    printf("INFORME O RAIO DO CIRCULO\n");
    scanf("%f", &raio);
    area = 3.14 * (raio * raio);
    printf("A AREA DO CIRCULO E: %.2f\n", area);

    return 0;
}
