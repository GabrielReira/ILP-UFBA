# Exercícios sobre vetor/array

## A - Em busca da esmeralda

Sonic perdeu uma das Esmeraldas do Caos! Se essa jóia cair nas mãos do
Dr. Eggman ninguém sabe do que ele seria capaz. Sonic sabe que a
esmeralda está dentro de uma caixa que tem um determinado número. Sua
tarefa é, dada uma sequência de caixas e o número da Esmeralda do
Caos, determinar se Sonic pode recuperar a Esmeralda.

### Entrada
A entrada possui três linhas. A primeira linha contém um inteiro **N** (1 ≤ N ≤ 1000),
representando o número de caixas onde pode estar a Esmeralda do Caos. A segunda
linha contém uma sequencia de *N* inteiros **n1, n2, …, nn** representando os números
das esmeraldas que estão nas caixas, sendo **1 ≤ ni ≤ 1000**. Por fim, na terceira
linha será dado um inteiro **C** (1 ≤ N ≤ 1000) que é o número da Esmeralda do Caos.

### Saída
A saída consiste em uma única linha contendo um número inteiro: **O número da**
**Esmeralda do Caos**, caso ela se encontre na sequência de caixas dada, ou **-1**
caso contrário.

| Entrada | Saída |
| --- | --- |
| 8 <br> 1 2 4 3 5 6 7 8 <br> 4 | 4 |
| 10 <br> 12 1 4 7 9 8 1 2 3 90 <br> 6 | -1 |


---


## B - O mochileiro metódico

Will é um vendedor que mora na vila de Rynoka e sai em aventuras
desbravando masmorras para conseguir bons equipamentos e vendê-los em
sua loja. Mas Will é um rapaz muito metódico, e, toda vez que retorna de uma
jornada, ele esvazia a sua mochila retirando um item por vez, sempre do último
adquirido até o primeiro. Sua tarefa é fazer um programa que, dado uma lista
de itens na mochila de Will, você deve mostrar na tela a ordem deles após
Will retirá-los da mochila.

### Entrada
A primeira linha contém um inteiro **N** (1 <= N <= 103),
representando o número de itens na mochila de Will. A segunda linha
consiste de *N* inteiros **I** (1 <= I <= 103) representando os itens na
sequência em que foram colocados na mochila (podem existir itens
repetidos).

### Saída
A saída consiste de uma linha na qual você deverá imprimir os itens
na ordem que Will vai tirá-los da mochila.

| Entrada | Saída |
| --- | --- |
| 5 <br> 1 2 3 4 5 | 5 4 3 2 1 |
| 8 <br> 9 6 8 1 5 8 3 2 | 2 3 8 5 1 8 6 9 |
| 4 <br> 5 7 2 1 | 1 2 7 5 |
