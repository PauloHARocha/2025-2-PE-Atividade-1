#include <stdio.h>

/*
fgets()
Lê uma linha de um arquivo e armazena em um vetor de caracteres (string).
char *fgets(char *buffer, int tamanho, FILE *arquivo);
Retorna o endereço do buffer se conseguiu ler algo, ou NULL se chegar ao fim do arquivo (EOF).

fputs()
Escreve uma string em um arquivo (semelhante ao puts, mas sem adicionar '\n').
int fputs(const char *texto, FILE *arquivo);
Retorna um valor negativo em caso de erro na gravação.
*/

int main() {
    // Abre "entrada.txt" para leitura e "saida.txt" para escrita
    FILE *in  = fopen("entrada.txt", "r");
    FILE *out = fopen("saida.txt",   "w");

    // Verifica se a abertura dos arquivos foi bem-sucedida
    // Se fopen() falhar, retorna NULL (ex: arquivo inexistente ou permissão negada)
    if (in == NULL || out == NULL) {
        puts("Erro ao abrir arquivo.");
        // Fecha apenas os arquivos que foram abertos com sucesso
        if (in)
            fclose(in);
        if (out)
            fclose(out);
        return 1;
    }

    char linha[128];  // buffer para armazenar cada linha lida

    // fgets() lê uma linha do arquivo e devolve:
    //  o endereço do buffer (linha) se conseguiu ler algo
    //  NULL se chegou ao fim do arquivo (ou se ocorreu erro)
    while (fgets(linha, sizeof(linha), in) != NULL) {
        fputs(linha, out);  // escreve a mesma linha no arquivo de saída
    }

    // Fecha ambos os arquivos para garantir:
    //  - gravação correta dos buffers no disco
    //  - liberação dos recursos do sistema
    fclose(in);
    fclose(out);

    printf("Copia concluida em saida.txt\n");
    return 0;
}