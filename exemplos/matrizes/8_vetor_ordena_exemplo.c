#include <stdio.h>

#define TAMANHO 50

// ordena em ordem crescente (seleção simples)
void ordena(int lista[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (lista[i] > lista[j]) {
                int temp = lista[j];
                lista[j] = lista[i];
                lista[i] = temp;
            }
        }
    }
}

int main() {
    int Tab[TAMANHO];
    int i;

    // leitura até digitar 0 (zero não entra na lista)
    for (i = 0; i < TAMANHO; i++) {
        int x;
        printf("Digite numero ou zero para terminar: ");
        if (scanf("%d", &x) != 1) return 0; // fim abrupto
        if (x == 0) break;
        Tab[i] = x;
    }

    // ordena por referência: passamos o endereço do primeiro elemento
    ordena(Tab, i);

    // imprime em ordem crescente
    for (int j = 0; j < i; j++) {
        printf("%d\n", Tab[j]);
    }
    return 0;
}