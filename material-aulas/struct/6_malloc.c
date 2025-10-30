#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[30];
    int idade;
};

int main() {
    struct pessoa *p = malloc(sizeof(struct pessoa)); //reserva espaço na memória para uma struct pessoa

    if (p == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    strcpy(p->nome, "Maria"); // O operador "->" acessa campos de uma struct apontada por um ponteiro
    p->idade = 28;

    printf("Pessoa: %s - %d anos\n", p->nome, p->idade);
 
    strcpy((*p).nome, "Joao"); // A expressão (*p).campo é equivalente a p->campo
    (*p).idade = 29;

    printf("Pessoa: %s - %d anos\n", (*p).nome, (*p).idade);

    free(p); // libera a memória alocada
    return 0;
}