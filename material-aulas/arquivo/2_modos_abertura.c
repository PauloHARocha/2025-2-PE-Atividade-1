#include <stdio.h>

/*
Modos de abertura de arquivos (modo texto):
"r": Abre um arquivo para leitura. Se o arquivo não existir, fopen() retornará NULL.
"w": Cria um arquivo para gravação. Se o arquivo já existir, seu conteúdo será apagado e regravado.
"a": Abre um arquivo para gravação, posicionando o cursor no final. Se o arquivo não existir, ele será criado.
"r+": Abre um arquivo para leitura e gravação. O arquivo deve existir, caso contrário fopen() retornará NULL.
"w+": Cria um arquivo para leitura e gravação. Se o arquivo já existir, seu conteúdo será apagado.
"a+": Abre um arquivo para leitura e gravação, posicionando o cursor no final. Se não existir, será criado.
Observação: após usar o arquivo, feche-o sempre com fclose().
*/

int main() {
    FILE *fp;

    // // "w": cria/trunca e escreve 1a linha
    // fp = fopen("modos.txt", "w");
    // if (fp == NULL) { 
    //     puts("Erro ao abrir arquivo [w]"); 
    //     return 1; 
    // }
    // fputs("Linha 1 (criada com w)\n", fp);
    // fclose(fp);

    // // "a": acrescenta sem apagar o que já existe
    // fp = fopen("modos.txt", "a");
    // if (fp == NULL) { 
    //     puts("Erro ao abrir arquivo [a]");
    //     return 1; 
    // }
    // fputs("Linha 2 (acrescentada com a)\n", fp);
    // fputs("Linha 3 (acrescentada com a)\n", fp);
    // fclose(fp);

    // // "r": lê e mostra no console
    // fp = fopen("modos.txt", "r");
    // if (fp == NULL) { 
    //     puts("Erro ao abrir arquivo [r]"); 
    //     return 1; 
    // }

    char buf[80];
    // printf("Conteudo da primeira linha de modos.txt:\n");

    // // fgets() lê uma linha do arquivo e devolve:
    // //  o endereço do buffer (linha) se conseguiu ler algo
    // //  NULL se chegou ao fim do arquivo (ou se ocorreu erro)
    // fgets(buf, sizeof(buf), fp);
    // fputs(buf, stdout);  // escreve no console (stdout)

    // fclose(fp);

    fp = fopen("modos.txt", "r");
    if (fp == NULL) { 
        puts("Erro ao abrir arquivo [r]"); 
        return 1; 
    }

    printf("Conteudo total de modos.txt:\n");
    while (fgets(buf, sizeof(buf), fp) != NULL) {
        fputs(buf, stdout);  // escreve no console (stdout)
    }
    fclose(fp);

    return 0;
}

// Atividade
// Crie um programa que grave duas linhas em um arquivo texto chamado "saida.txt".
// A primeira linha deve conter o seu nome e a segunda o nome do curso.
// Depois leia o conteúdo do arquivo e mostre no terminal