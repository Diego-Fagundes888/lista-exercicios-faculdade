/*
JPA-49: Pedir senha até acertar

Uma escola criou um sistema simples para liberar o acesso ao laboratório de informática.
O programa deve solicitar a senha do usuário repetidamente até que ele digite a senha correta (1111).
Quando acertar, o sistema deve mostrar a mensagem “Acesso liberado!”.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-49:    Pedir senha até acertar                       *");                        
    printf("\n************************************************************\n\n");

    int senha = 1111, senhaTentativa;

    printf("Digite a senha correta: ");
    scanf("%d", &senhaTentativa);

    do 
    {
        printf("senha incorreta digite novamente: ");
        scanf("%d", &senhaTentativa);
    } while (senhaTentativa != senha);
    printf("Acesso liberado!");
}
