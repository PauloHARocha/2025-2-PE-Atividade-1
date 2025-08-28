#include <stdio.h>

/*
   Exemplo de uso do laço do-while em C.
   Diferente do while, o do-while garante que o bloco de código
   será executado pelo menos uma vez, mesmo que a condição seja falsa
   logo na primeira verificação.

   Neste exemplo, pedimos para o usuário digitar a senha correta.
   O laço continua enquanto a senha estiver errada.
*/


int main() {
    int senha;
    int tentativas = 0;

    // O bloco é executado pelo menos uma vez
    do {
        printf("Digite a senha (1234): ");
        scanf("%d", &senha);
        tentativas++; // Conta quantas vezes o usuário tentou
    } while (senha != 1234); // Condição: repete enquanto for diferente de 1234

    printf("Senha correta após %d tentativa(s)!\n", tentativas);

    return 0;
}