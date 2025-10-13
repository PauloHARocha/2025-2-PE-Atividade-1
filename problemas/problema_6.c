#include <stdio.h>

// Função iterativa para calcular Fibonacci
int fibo(int n) {
    int i, c, a = 0, b = 1;
    for (i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int n = 6;

    // printf("Digite um numero inteiro nao negativo: ");
    // scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci nao definido para numeros negativos.\n");
    } else {
        printf("Fibonacci(%d) = %d\n", n, fibo(n));
    }

    return 0;
}

/*
-------------------
 PSEUDOCÓDIGO ITERATIVO
-------------------

função fibo(n):
    a <- 0
    b <- 1
    para i de 0 até n-1 faça
        c <- a + b
        a <- b
        b <- c
    fim-para
    retorne a
fim-função

início
    leia n
    se n < 0 então
        escreva "Fibonacci não definido"
    senão
        resultado <- fibo(n)
        escreva "Fibonacci(", n, ") = ", resultado
    fim-se
fim
*/