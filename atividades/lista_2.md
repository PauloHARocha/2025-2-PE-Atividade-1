## Busca e Ordenação

## Questão 1

Implemente as funções de busca e ordenação:
1. busca_sequencial(int v[], int n, int x)
2. busca_binaria(int v[], int n, int x)
3. selection_sort(int v[], int n)
4. bubble_sort(int v[], int n)

Leia um vetor e crie um menu para o usuário escolher qual função deseja testar e mostre o resultado após cada execução.

---

## Questão 2

Escreva um programa que leia um vetor de inteiros e um número qualquer. Verifique se o número está presente no vetor usando busca sequencial. Mostre a posição onde foi encontrado ou uma mensagem informando que não está presente.

---

## Questão 3

Escreva um programa que leia um vetor de inteiros ordenado e um número qualquer, e o procure utilizando busca binária.
Mostre a posição onde o número foi encontrado ou uma mensagem informando que não está no vetor.

---

## Questão 4

Escreva um programa que leia um vetor de inteiros e verifique se ele está em ordem crescente.
Imprima “ORDENADO” se estiver, ou “NÃO ORDENADO” caso contrário.

---

## Questão 5

Crie um programa que, dada uma string, ordene as letras em ordem alfabética crescente utilizando o algoritmo Bubble Sort.

---

## Questão 6

Faça um programa que leia `n` nomes e os ordene pelo tamanho (número de caracteres), utilizando o algoritmo Selection Sort.

---

## Questão 7

Implemente um programa que realize um teste prático com os seguintes métodos de ordenação: Selection Sort, Bubble Sort e Insertion Sort.

Utilize as seguintes sequências de dados de entrada:

- 2, 4, 6, 8, 10, 12
- 11, 9, 7, 5, 3, 1
- 5, 7, 2, 8, 1, 6
- 2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1
- 2, 4, 6, 8, 10, 12, 1, 3, 5, 7, 9, 11
- 8, 9, 7, 9, 3, 2, 3, 8, 4, 6
- 89, 79, 32, 38, 46, 26, 43, 38, 32, 79

Para cada sequência, o programa deve:
- Aplicar os três métodos de ordenação;
- Contar e exibir o número de comparações e trocas (ou movimentos) realizadas por cada método;
- Mostrar o vetor inicial e o vetor ordenado.

---


## String

### Questão 8

Inicialize uma string com a palavra `Pernambuco`, imprima apenas `Perna`.

---

### Questão 9

Leia um nome completo. Imprima o nome digitado e o endereço de memória do primeiro caractere da string.

---

### Questão 10

Leia duas palavras armazenando em strings diferentes, copie para uma terceira string aquela que for menor e imprima.

---

### Questão 11
Leia duas frases (a e b). Construa `c = "a b"` usando `strcpy` e `strcat`, e imprima `c`.

---

### Questão 12

Leia duas frases (a e b). Use `strcmp` para dizer qual vem primeiro em ordem alfabética ou se são iguais.

---

### Questão 13
Crie um programa que calcula o comprimento de uma string (não use a função `strlen`).

---

### Questão 14
Faça um programa que receba uma palavra e a imprima de trás-para-frente.

---

### Questão 15

Leia uma frase e contar quantos caracteres são espaços em branco. Lembre-se que uma frase é um conjunto de caracteres (vetor).

---

### Questão 16

Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando que um palíndromo é uma palavra que tenha a propriedade de poder ser lida
tanto da direita para a esquerda como da esquerda para a direita. Exemplo:

```
ovo
arara
```

---

### Questão 17

Construa um programa que leia duas strings fornecidas pelo usuário e verifique se a segunda string lida esta contida no final da primeira, retornando o resultado da verificação.