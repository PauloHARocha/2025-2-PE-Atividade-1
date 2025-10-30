#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro {
    char titulo[50];
    int paginas;
};

struct livro* cria_livro(char *titulo, int paginas) {
    
    struct livro *l = malloc(sizeof(struct livro));

    if (l != NULL) {
        strcpy(l->titulo, titulo);
        l->paginas = paginas;
    }

    return l;
}

int main() {
    struct livro *livro1 = cria_livro("O Hobbit", 310);

    if (livro1 != NULL) {
        printf("Titulo: %s\n", livro1->titulo);
        printf("Paginas: %d\n", livro1->paginas);
        free(livro1);
    } else {
        printf("Erro de alocacao!\n");
    }

    return 0;
}