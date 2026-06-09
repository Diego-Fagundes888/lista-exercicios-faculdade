/*
JPA-18: Login simples

Uma escola criou um sistema simples para acesso à biblioteca digital.
O aluno deve informar usuário e senha corretos para entrar no sistema.
O programa deve verificar se os dados digitados estão corretos e mostrar uma mensagem de acesso
permitido ou negado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-18: Login simples");
    printf("\n************************************************************\n\n");

    char login[10] = "admin";
    char senha[12] = "572#999";
    char TenLogin[20], TenSenha[20];

    printf("Qual e o login: ");
    scanf("%19s", TenLogin);

    printf("Qual e a senha: ");
    scanf("%19s", TenSenha);

    if (strcmp(TenLogin, login) == 0 && strcmp(TenSenha, senha) == 0)
    {
        printf("Seja bem-vindo ao painel\n");
    }
    else
    {
        printf("Senha ou login errado. Tente novamente\n");
    }

    return 0;
}