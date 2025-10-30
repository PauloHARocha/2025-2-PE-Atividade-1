#include <stdio.h>

// union permite armazenar diferentes tipos no mesmo espaço de memória.
// Todos os campos compartilham a mesma área, então apenas um valor é válido por vez.
// O tamanho total da union é o do maior de seus campos.
union valor {
    int i;
    float f;
    char c;
};

int main() {
    union valor v;

    v.i = 42;
    printf("Inteiro: %d\n", v.i);

    v.c = 'A';
    printf("Caractere: %c\n", v.c);

    v.f = 3.14;
    printf("Float: %.2f\n", v.f);

    printf("\nApós escrever v.c, os outros campos mudaram:\n");
    printf("Inteiro agora: %d\n", v.i);
    printf("Char agora: %c\n", v.c);
}