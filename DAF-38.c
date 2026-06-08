#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF- 38 ...   Senha correta.                    *");
    printf("\n************************************************************\n\n");

    int senha = 5547;
    int tentativa;

    printf("Digite a senha: ");
    scanf("%d", &tentativa);

    while (tentativa != senha)
    {
        printf("Senha incorreta tente novamente: ");
        scanf("%d", &tentativa);
    }
    printf("Logado");
}