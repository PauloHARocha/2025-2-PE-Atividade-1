#include <stdio.h>

// Programa que lê um número inteiro não negativo e calcula seu fatorial

int main() {
    int n, i;
    unsigned long long fatorial = 1; // usar tipo maior para evitar overflow em n grandes

    printf("Digite um numero inteiro nao negativo: ");
    n = 5;

    if (n < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            
            fatorial = fatorial * i;
            
        }
        printf("%d! = %llu\n", n, fatorial);
    }

    return 0;
}

/*
início
    leia n
    se n < 0 então
        escreva "Fatorial não definido"
    senão
        fatorial <- 1
        para i de 1 até n faça
            fatorial <- fatorial * i
        fim-para
        escreva n, "! = ", fatorial
    fim-se
fim
*/