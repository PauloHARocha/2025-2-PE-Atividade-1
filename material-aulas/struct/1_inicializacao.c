#include <stdio.h>

// struct é uma forma de agrupar diferentes variáveis (campos) em um mesmo tipo.
// Cada campo pode ter um tipo diferente como int, float ou char.
// É muito usada para representar "objetos" do mundo real (ex: ponto, pessoa, produto).

// forma geral:
// struct nome_struct {
//     tipo1 campo1;
//     tipo2 campo2;
//     ...
//     tipon campoN;
// }

struct ponto { 
    int x, y; 
};

int main() {
    struct ponto p1 = {2, 5};
    printf("(%d, %d)\n", p1.x, p1.y);

    struct ponto p2 = {20, 52};
    printf("(%d, %d)\n", p2.x, p2.y);
}