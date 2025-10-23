#include <stdio.h>
#include <stdlib.h>


int* cria_estatico() {
    int x = 500;
    printf("[cria_estatico] x = %d, endereço = %p\n", x, &x);
    return &x; 
}

int* cria_dinamico() {
    int *p = malloc(sizeof(int));  
    *p = 20;
    printf("[cria_dinamico] *p = %d, endereço = %p\n", *p, p);
    return p;  
}

int main() {
    int *a = cria_estatico();
    int *b = cria_dinamico();

    printf("\n[main] Apos retorno das funcoes:\n");
    printf("a: endereço = %p, valor = %d (valor indefinido / lixo)\n", a, *a);
    printf("b: endereço = %p, valor = %d (valor válido)\n", b, *b);

    free(b);
    return 0;
}

/*
Atividade
    Escreva um programa que:
    1. Peça ao usuário um número n.
    2. Aloque dinamicamente um vetor de n floats.
    3. Leia os valores, calcule e exiba a média.
    4. Libere a memória ao final.
*/