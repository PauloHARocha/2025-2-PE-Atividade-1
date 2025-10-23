#include <stdio.h>

void soma10(int n) {
    n = n + 10;
}

void soma10_por_referencia(int *p) {
    *p = *p + 10;
}

int main() {
    int x = 5;

    soma10(x);
    printf("Apos soma10: x = %d\n", x); 

    soma10_por_referencia(&x);
    printf("Apos soma10_por_referencia: x = %d\n", x); 

}