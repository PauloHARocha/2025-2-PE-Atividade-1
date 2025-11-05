#include <stdio.h>

int main() {
    FILE *arquivo;

    // abre para escrita
    arquivo = fopen("hello_arquivo.txt", "w");
    if (arquivo == NULL) {
        puts("Erro ao abrir para escrita");
        return 1;
    }

    fputs("Ola, arquivo!\n", arquivo);  // grava 1 linha
    fclose(arquivo);                    // sempre feche

    // reabre para leitura
    arquivo = fopen("hello_arquivo_2.txt", "r");
    if (arquivo == NULL) {
        puts("Erro ao abrir para leitura");
        return 1;
    }

    char linha[64];
    if (fgets(linha, sizeof(linha), arquivo) != NULL) { // fgets mantem o '\n' se couber
        printf("Conteudo lido: %s", linha);  
    }

    fclose(arquivo);
    return 0;
}