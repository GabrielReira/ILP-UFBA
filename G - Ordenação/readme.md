# Exercícios sobre ordenação

## A - Quem vai ser o milionário?

Uma loja de tortas e doces muito engraçadinha resolveu angariar clientes com um sorteio. Os clientes
que fossem consumir algo na loja recebiam uma ficha com um número aleatório, o cliente que recebesse
um número exatamente no meio da ordem de números distribuída ganharia um MILHÃO. Isso mesmo, um milho
BEM grande (imperdível!). Então por exemplo, se dona Joana tirasse o número 13 quando a loja tivesse
outros 6 clientes cujos números são (1, 22, 10, 5, 16, 14), ela seria a vencedora pois o 13 está
exatamente no meio (depois de 1, 5, 10 e antes de 14, 16, e 22).

O dono da padaria, Sr. Monopoly, gostaria que você escrevesse um programa onde dados os números de
suas fichas do sorteio, calcule o vencedor.

### Entrada
A primeira linha é um inteiro **N** ímpar (**1 <= N < 10000**) que
corresponde a quantidade de clientes na loja no momento.
A segunda linha recebe *N* inteiros **M** (**1 <= M < 100000**) não
repetidos que correspondem aos números de cada ficha recebida por cada
cliente.

### Saída
A saída possui uma linha com o número da ficha do vencedor do
sorteio.

| Entrada | Saída |
| --- | --- |
| 7 <br> 12 5 1 16 23 11 2 | 11 |
| 5 <br> 10 9 8 7 6 | 8 |


---


## B - Ordenando a pilha de livros

Sendo bem organizado, Jubileu resolveu organizar uma pilha de livros de
diversos tamanhos diferentes, de forma que um livro de tamanho menor fique
sempre em cima dos maiores, ou seja, ele quer manter a organização na sua
prateleira de forma decrescente de cima para baixo.

### Entrada
A primeira linha de entrada contém um número inteiro **N (1 ≤ N ≤ 1000)**,
representando a quantidade de livros a serem organizados. Cada uma das
próximas *N* linhas contém uma sequência de **1 a 50 caracteres '*'**,
representando o tamanho do livro.

### Saída
A saída consiste em imprimir *N* linhas que mostram a organização dos livros
após a ordenação de Jubileu.

| Entrada | Saída |
| --- | --- |
| 3 <br> *** <br> * <br> ** | * <br> ** <br> *** |
| 10 <br> ***** <br> **** <br> ***** <br> ****** <br> ******* <br> ******* <br> ******** <br> ******** <br> * <br> ********** | * <br> **** <br> ***** <br> ***** <br> ****** <br> ******* <br> ******* <br> ******** <br> ******** <br> ********** |
