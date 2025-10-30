#include <stdio.h>

struct elemento {
    char codigo[4];
    int numero;
    float valor;
};

int main() {
    struct elemento e = {"aXy", 123, 4.5};

    printf("Conteudo:\n");
    printf("codigo = %s\n", e.codigo);
    printf("numero = %d\n", e.numero);
    printf("valor = %.2f\n\n", e.valor);

    printf("Enderecos na memoria:\n");
    printf("&e = %p\n", &e);
    printf("&e.codigo = %p\n", &e.codigo);
    printf("&e.numero = %p\n", &e.numero);
    printf("&e.valor = %p\n", &e.valor);

    printf("\nTamanho total da struct: %d bytes\n", (int) sizeof(e));

    return 0;
}