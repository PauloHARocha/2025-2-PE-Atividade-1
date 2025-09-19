# Atividade 2 – Vetores e Maior Valor

**Aluno:** `<Edrey Miguel de Lima Silva>`

Objetivo: praticar vetores em C e construção de fluxograma.

---

## Parte 1 – Fluxograma (Draw.io)

1. Construa um **fluxograma** que represente a lógica de encontrar o maior valor em um vetor de 10 inteiros
2. Faça no [**Draw.io**](https://app.diagrams.net) 


---
[Diagrama sem nome.drawio.pdf](https://github.com/user-attachments/files/22434576/Diagrama.sem.nome.drawio.pdf)

## Parte 2 – Encontrar o maior valor em um vetor de 10 inteiros

1. Crie um programa em C chamado `vetor_maior.c`.
2. Inicialize o vetor abaixo:
   ```c
   int v[10] = {12, 7, 45, 3, 22, 21, 0, 89, 5, 90};
   ```
3. Seu programa deve:
   - Percorrer o vetor e **encontrar o maior valor**.
   - Exibir o **maior valor** e a **posição** do valor no vetor.

4. Compile e execute para testar:
   ```bash
   gcc vetor_maior.c -o vetor_maior
   ./vetor_maior
   ```
---
#include <stdio.h>

int main() {
    int v[10] = {12, 7, 45, 3, 22, 21, 0, 89, 5, 90};
    int maior = v[0];
    int posicao = 0;

    for (int i = 1; i < 10; i++) {
        if (v[i] > maior) {
            maior = v[i];
            posicao = i;
        }
    }

    printf("O maior valor do vetor eh: %d\n", maior);
    printf("Ele esta na posicao: %d\n", posicao);

    return 0;
}


## Entregáveis

- `vetor_maior.c` 
- Arquivo do fluxograma (PNG ou PDF) feito no Draw.io.
