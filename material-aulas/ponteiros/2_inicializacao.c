#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;  // p aponta para x

    printf("x = %d\n", x);
    printf("&x = %p\n", &x);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p); // desreferenciar p

    *p = 20;  // altera x indiretamente (desreferenciar p)
    printf("x apos alteracao via ponteiro = %d\n", x);
    printf("&x = %p\n", &x);
    printf("p = %p\n", p);

    /*
    Atividade
    Crie duas variáveis float com valores iniciais.
    Use apenas um ponteiro para fazer uma alteracao nos valores das variáveis
    e exiba na tela os valores e endereços antes e depois da alteração.
    */

}