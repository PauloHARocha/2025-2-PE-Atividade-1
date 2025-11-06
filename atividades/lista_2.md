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

---


## Ponteiros

### Questão 18

Crie duas variáveis do tipo float com valores iniciais. Use apenas um ponteiro para fazer uma alteração nos valores das variáveis e exiba na tela os valores e endereços antes e depois da alteração.

---

### Questão 19

Crie uma função que receba dois ponteiros para char. A função deve trocar os valores das variáveis originais. No main, exiba os caracteres e seus endereços antes e depois da chamada da função.

---

### Questão 20

Implemente uma função chamada incrementa_pares() que receba um vetor de inteiros e seu tamanho. A função deve somar 1 a todos os elementos pares do vetor. Imprima o vetor antes e depois da chamada da função.

---

### Questão 21

Implemente uma função chamada conta_maiores() que receba um vetor de inteiros, o tamanho do vetor e um valor de referência. A função deve retornar quantos elementos do vetor são maiores que o valor informado.

---

### Questão 22

Escreva uma função que retorna o maior valor de um array de tamanho N. Escreva um programa que leia N valores inteiros, imprima o array com k elementos por linha, e o maior elemento. O valor de k também deve ser fornecido pelo usuário.


---

### Questão 23

Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usado para calcular o dobro, C o triplo e D o quádruplo.

---

### Questão 24

Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.

---

### Questão 25

Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente, então a função retornará ZERO (0). Caso a função seja concluída com sucesso, a mesma deve retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.

---

### Questão 26

Escreva uma função que, dado um número real passado como parâmetro, retorne a parte inteira e a parte fracionária deste número. Escreva um programa que chama esta função.
Protótipo:
void frac(float num, int* inteiro, float* frac);

---


## Alocação Dinâmica


### Questão 27

Escreva um programa que leia um número n, aloque dinamicamente um vetor de n floats, leia os valores digitados pelo usuário, calcule e exiba a média dos valores, e ao final libere a memória alocada.

---

### Questão 28

Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são ímpares.

---

### Questão 29

Faça um programa para armazenar em memória um vetor de dados contendo 1500 valores do tipo int, usando a função de alocação dinâmica de memória calloc:
(a) Faça um loop e verifique se o vetor contém realmente os 1500 valores inicializados com zero (conte os 1500 zeros do vetor).
(b) Atribua para cada elemento do vetor o valor do seu índice.
(c) Exiba na tela os 10 primeiros e os 10 últimos elementos do vetor.

---

### Questão 30

Faça um programa que leia uma quantidade qualquer de números armazenando-os na memória e pare a leitura quando o usuário entrar com um número negativo. Em seguida, imprima o vetor lido. Use a função realloc.

---

### Questão 31

Faça um programa que leia números do teclado e os armazene em um vetor alocado dinamicamente. O usuário irá digitar uma sequência de números, sem limite de quantidade. Os números serão digitados um a um, e caso ele deseje encerrar a entrada de dados, deverá digitar o número ZERO.
Os dados devem ser armazenados na memória deste modo: 
- inicie com um vetor de tamanho 10 alocado dinamicamente; 
- após, caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho anterior adicionando espaço para mais 10 valores (tamanho N+10, onde N inicia com 10); 
- copie os valores já digitados da área inicial para esta nova área maior e libere a memória da área inicial; 
- repita este procedimento de expandir dinamicamente com mais 10 valores o vetor alocado cada vez que ele estiver cheio. Assim o vetor irá ser ’expandido’ de 10 em 10 valores.

Ao final, exiba o vetor lido. Não use a função realloc.

--- 

### Questão 32

Faça um programa que receba do usuário o tamanho de uma string e chame uma função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo dessa string. O programa deve imprimir a string sem suas vogais.

---

## Structs

### Questão 33

Crie uma struct chamada Aluno com os campos: nome, curso e idade. Leia os dados de um aluno e imprima.

---

### Questão 34

Crie uma struct chamada Produto com nome, preço e quantidade usando uma função cria_produto.  
Faça uma função valor_total que receba um Produto e retorne seu valor total (preço * quantidade).

---

### Questão 35

Escreva um programa que crie os seguintes tipos de dados usando struct:
- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: composto de uma data, um horário e um texto que descreve o compromisso.

Após criar as estruturas, declare uma variável do tipo Compromisso, atribua valores aos campos de data, horário e texto, e exiba essas informações na tela.

---

### Questão 36

Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.  

---

### Questão 37

Construa uma estrutura Aluno com nome, número de matrícula e curso. Leia do usuário as informações de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.  

---

### Questão 38

Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.  
(a) Permita ao usuário entrar com os dados de 5 alunos.  
(b) Encontre o aluno com maior nota da primeira prova.  
(c) Encontre o aluno com maior média geral.  
(d) Encontre o aluno com menor média geral.  
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.  

---

### Questão 39

Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: matrícula, nome, código da disciplina, nota1 e nota2. Considere uma turma de até 10 alunos. Após ler todos os dados digitados e armazená-los em um vetor de estrutura, exiba na tela a listagem final dos alunos com as respectivas médias finais (use média ponderada: nota1 com peso 1.0 e nota2 com peso 2.0).  

---

### Questão 40

Faça um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionário de uma empresa, compostos de: nome, idade, sexo (M/F), CPF, data de nascimento, código do setor onde trabalha (0–99), cargo que ocupa (string de até 30 caracteres) e salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.  

---

### Questão 41

Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras), ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor que p. Repita este processo até que seja lido um valor p = 0. 

---

## Arquivos

### Questão 42
Faça um programa que grave duas linhas em um arquivo texto chamado "saida.txt". A primeira linha deve conter o seu nome e a segunda o nome do curso. Depois leia o conteúdo do arquivo e mostre no terminal

### Questão 43
Faça um programa que leia de um arquivo numeros.txt uma lista de inteiros, calcule a média e grave em um novo arquivo media.txt a média e a quantidade de valores lidos.

### Questão 44

Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas esse arquivo possui.

### Questão 45

Faça um programa que receba do usuário um arquivo texto e um caractere. Mostre na tela quantas vezes aquele caractere ocorre dentro do arquivo.

### Questão 46

Faça um programa que receba dois arquivos do usuário e crie um terceiro arquivo com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo).

### Questão 47

Faça um programa que leia o conteúdo de um arquivo texto e conte quantas palavras ele possui.
Uma palavra é definida como qualquer sequência de caracteres delimitada por espaços ou quebras de linha.


---

## Matrizes

### Questão 48
Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A × B.

### Questão 49
Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.

### Questão 50
Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal principal.

### Questão 51
Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz original e a matriz transformada.

### Questão 52
Leia uma matriz 3 x 3 e escreva o maior valor e o menor valor contidos nela, informando também suas respectivas posições (linha e coluna).

### Questão 53
Leia uma matriz 3 x 3 e verifique se ela é simétrica.

### Questão 54
Faça um programa que leia duas matrizes 2 x 2 com valores reais.
Ofereça ao usuário um menu de opções:
- somar as duas matrizes
- subtrair a primeira matriz da segunda
- adicionar uma constante às duas matrizes
- imprimir as matrizes.