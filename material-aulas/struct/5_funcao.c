#include <stdio.h>
#include <math.h>  // para sqrt() e pow()

struct ponto {
    int x, y;
};

struct ponto cria_ponto(int a, int b) {
    struct ponto p;
    p.x = a;
    p.y = b;
    return p;
}

float distancia(struct ponto p1, struct ponto p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

int main() {
    struct ponto p1 = cria_ponto(10, 20);
    struct ponto p2 = cria_ponto(13, 24);

    printf("Ponto 1: (%d, %d)\n", p1.x, p1.y);
    printf("Ponto 2: (%d, %d)\n", p2.x, p2.y);
    printf("Distância entre os dois pontos = %.2f\n", distancia(p1, p2));

    return 0;
}

/*
Atividade
Crie uma struct chamada "Produto" com nome, preço e quantidade usando uma funcao cria_produto
Faça uma função valor_total que receba um Produto e retorne seu valor total (preço * quantidade).
*/