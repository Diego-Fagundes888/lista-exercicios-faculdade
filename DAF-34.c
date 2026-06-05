#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF- 34 ...     Verificar se um numero e primo. *");
    printf("\n************************************************************\n\n");

       int number, Primo = 1;
    
    printf("Digite um numero: ");
    scanf("%d", &number);
    
    if (number <= 1) {
        Primo = 0;
    } else {
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                Primo = 0;  
                break;        
            }
        }
    }
    
    if (Primo == 1)
        printf("%d e um numero primo\n", number);
    else
        printf("%d nao e um numero primo\n", number);
    
}