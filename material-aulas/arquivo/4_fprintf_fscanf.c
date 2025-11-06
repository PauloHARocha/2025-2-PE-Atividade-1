#include <stdio.h>

/*
fprintf()
Escreve dados formatados em um arquivo (semelhante ao printf).
int fprintf(FILE *arquivo, char *formato, ...);
retorna o número de caracteres gravados, ou valor negativo em caso de erro.

fscanf()
Lê dados formatados de um arquivo (semelhante ao scanf).
int fscanf(FILE *arquivo, char *formato, ...);
retorna a quantidade de itens lidos com sucesso, ou EOF se alcançar o fim do arquivo.
fscanf() lê até encontrar um espaço, quebra de linha ou fim do arquivo. Para ler linhas inteiras, use fgets().
*/

int main() {
    FILE *in  = fopen("clima.txt", "r");
    FILE *out = fopen("relatorio_clima.txt", "w");

    if (in == NULL || out == NULL) {
        puts("Erro ao abrir arquivo.");
        // Fecha apenas os arquivos que foram abertos com sucesso
        if (in)
            fclose(in);
        if (out)
            fclose(out);
        return 1;
    }

    int dia;
    char cidade[32];     
    float temperatura;
    float soma = 0;
    int total = 0;

    // Lê até o final do arquivo (fscanf retorna EOF ao final)
    while (fscanf(in, "%d %31s %f", &dia, cidade, &temperatura) != EOF) {
        fprintf(out, "Dia %02d - %-10s - %.1f°C\n", dia, cidade, temperatura);
        soma += temperatura;
        total++;
    }

    if (total > 0) {
        fprintf(out, "\nTemperatura média: %.1f°C\n", soma / total);
        printf("Relatorio gerado: relatorio_clima.txt (%d registros)\n", total);
    } else {
        printf("Nenhum dado encontrado no arquivo.\n");
    }

    fclose(in);
    fclose(out);
    return 0;
}

// Atividade
// Crie um programa que leia de um arquivo numeros.txt uma lista de inteiros, 
// calcule a média e grave em um novo arquivo media.txt a média e a quantidade de valores lidos.