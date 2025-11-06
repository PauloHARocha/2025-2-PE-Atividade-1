#include <stdio.h>

/*
fopen()
Abre (ou cria) um arquivo e devolve um ponteiro do tipo FILE.
FILE *fopen(const char *nome_arquivo, const char *modo);
Retorna NULL se ocorrer erro na abertura (ex: arquivo inexistente, permissão negada).
O segundo parâmetro define o modo de abertura: "r", "w", "a", etc.

fclose()
Fecha o arquivo aberto e libera os recursos do sistema.
int fclose(FILE *arquivo);
Retorna 0 se for fechado com sucesso, ou EOF se ocorrer erro.
É importante sempre fechar arquivos abertos para garantir a gravação dos buffers no disco.
*/

int main() {
    FILE *arquivo;

    // abre para escrita
    arquivo = fopen("hello_arquivo.txt", "w");
    if (arquivo == NULL) {
        puts("Erro ao abrir para escrita");
        return 1;
    }

    fputs("Ola, arquivo!\n", arquivo);  // grava 1 linha
    fclose(arquivo);                    // fecha arquivo

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