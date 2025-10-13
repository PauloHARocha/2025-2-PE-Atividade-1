#include <stdio.h>

// STRUCT:
// Uma struct permite AGRUPAR variáveis de tipos diferentes
// em um único bloco (estrutura). É útil para representar
// "objetos" do mundo real, como Pessoa, Aluno, Produto.
// Cada campo é armazenado em memória separada, mas unidos
// sob um mesmo nome.

struct Pessoa {
    char nome[50];   // string (array de char)
    int idade;       // número inteiro
};

int main() {
    struct Pessoa p1 = {"Maria", 20};  // inicialização

    printf("Nome: %s, Idade: %d\n", p1.nome, p1.idade);

    return 0;
}