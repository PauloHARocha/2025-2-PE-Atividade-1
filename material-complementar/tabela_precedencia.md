# Precedência de Operadores em C

**Maior precedência acima**  
**Menor precedência abaixo**

| Operador         | Descrição                                                                 |
|------------------|----------------------------------------------------------------------------|
| ++ --            | Pré-incremento/decremento                                                  |
| ()               | Parênteses (chamada de função)                                             |
| []               | Elemento de array                                                          |
| .                | Elemento de struct                                                         |
| ->               | Conteúdo de elemento de ponteiro para struct                               |
| ++ --            | Pós-incremento/decremento                                                  |
| + -              | Adição e subtração unária                                                  |
| ! ~              | Não lógico e complemento bit a bit                                         |
| (tipo)           | Conversão de tipos (*type cast*)                                           |
| *                | Acesso ao conteúdo de ponteiro                                             |
| &                | Endereço de memória do elemento                                            |
| sizeof           | Tamanho do elemento                                                        |
| * / %            | Multiplicação, divisão e módulo (resto)                                    |
| + -              | Adição e subtração                                                         |
| << >>            | Deslocamento de bits à esquerda e à direita                                |
| < <=             | “Menor do que” e “menor ou igual a”                                        |
| > >=             | “Maior do que” e “maior ou igual a”                                        |
| == !=            | “Igual a” e “diferente de”                                                 |
| &                | E bit a bit                                                                |
| ^                | OU exclusivo                                                               |
| \|               | OU bit a bit                                                               |
| &&               | E lógico                                                                   |
| \|\|             | OU lógico                                                                  |
| ?:               | Operador ternário                                                          |
| =                | Atribuição                                                                 |
| += -=            | Atribuição por adição ou subtração                                         |
| *= /= %=         | Atribuição por multiplicação, divisão ou módulo (resto)                    |
| <<= >>=          | Atribuição por deslocamento de bits                                        |
| &= ^= \|=        | Atribuição por operações lógicas                                           |
| ,                | Operador vírgula                                                           |