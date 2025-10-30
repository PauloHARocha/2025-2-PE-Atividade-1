#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// typedef cria um novo nome (apelido/alias) para um tipo existente.
// É muito usado com struct para simplificar declarações.
// Exemplo: em vez de "struct pessoa", podemos escrever apenas "Pessoa".
// Forma geral do typedef:
// typedef tipo_existente novo_nome;

struct pessoa{
    char nome[30];
    int idade;
};

typedef struct pessoa Pessoa;
// typedef struct {
//     char nome[30];
//     int idade;
// } Pessoa;


// Protótipo da função
Pessoa* cria_pessoa(char *nome, int idade);

int main() {
    Pessoa p1 = {"Marcos", 30};
    printf("%s - %d anos\n", p1.nome, p1.idade);

    Pessoa *p2 = cria_pessoa("Joao", 25);

    printf("%s - %d anos\n", p2->nome, p2->idade);

    free(p2); // libera a memória alocada
    return 0;
}

// Implementação da função
Pessoa* cria_pessoa(char *nome, int idade) {
    Pessoa *p = malloc(sizeof(Pessoa));  // aloca espaço para uma Pessoa

    if (p != NULL) {
        strcpy(p->nome, nome);
        p->idade = idade;
    }

    return p;
}