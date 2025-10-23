#include <stdio.h>

void soma10(int n) {
    n = n + 10;
}

int soma20(int n){
    n = n + 20;
    return n;
}
int main() {
    int x = 5;
    soma10(x);
    printf("x = %d\n", x);

    soma20(x);
    printf("x = %d\n", x);

    x = soma20(x);
    printf("x = %d\n", x);

    return 0;
}