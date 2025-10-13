#include <stdio.h>

/*
Funções de entrada e saída de strings em C

char *gets(char *texto);
- Insegura, foi removida do padrão C11.
- Lê caracteres do teclado até o ENTER.
- Não verifica o tamanho do vetor e pode causar "buffer overflow".
- Não guarda o '\n' na string.

int puts(char *texto);
- Imprime a string até o '\0'.
- Adiciona automaticamente um '\n' (pula linha) no final.

char *fgets(char *texto, int n, FILE *entrada);
- Substitui o gets.
- Lê até (n - 1) caracteres ou até encontrar ENTER.
- Guarda o '\n' dentro da string, se couber.
- Adiciona o '\0' no final.

int fputs(char *texto, FILE *saida);
- Imprime a string até o '\0', sem adicionar '\n' automaticamente.
- É a versão mais "literal" de saída: imprime exatamente o que está na string.
*/

int main() {
    char a[40], b[40];

    printf("Digite seu nome completo: ");
    gets(a);                 
    printf("printf: %s\n", a);
    puts(a);

    printf("Digite seu nome completo: ");
    fgets(b, 40, stdin);     
    printf("printf: \"%s\"\n", b);
    puts(b);                 
    fputs(b, stdout); 

    // Remove o '\n' manualmente
    for (int i = 0; i < 40; i++) {
        if (b[i] == '\n') {   
            b[i] = '\0';      
            break;            
        }
    }
    printf("printf apos remoção: \"%s\"\n", b);
    puts(b);                 
    fputs(b, stdout); 
    fputs("\n", stdout); 

    // Atividade
    // Leia um nome completo. Imprima o nome digitado e endereço de memória do primeiro caractere da string.

    return 0;
}

/*
Resumo:
- gets: insegura
- puts: imprime e quebra linha
- fgets: segura, mas guarda o '\n'
- fputs: imprime sem quebrar linha
*/