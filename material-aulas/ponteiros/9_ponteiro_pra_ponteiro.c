#include <stdio.h>

int main() {
    int x = 10;
    int *p;
    int **pp;
    p = &x;   // p aponta para x
    pp = &p; // pp aponta para p

    printf("x = %d\n", x);
    printf("&x = %p\n", &x);
    printf("p = %p\n", p);
    printf("&p = %p\n", &p);
    printf("pp = %p\n\n", pp);

    printf("*p = %d\n", *p);       // valor de x
    printf("*pp = %p\n", *pp); // conteúdo de pp (endereço guardado em p)
    printf("**pp = %d\n", **pp);   // valor final de x via dupla desreferenciação

    return 0;
}