# Exercícios sobre Expressões aritméticas e If-Else


## A - A força de aceleração

A força de aceleração é uma energia no espaço-tempo que o Flash utiliza como fonte
dos seus poderes. Para alcançar a velocidade que deseja, o Flash absorve o espaço e o
tempo da força de aceleração e a transforma em velocidade. Sua tarefa é calcular a
velocidade do Flash, dado o espaço e o tempo.

### Entrada
A entrada possui dois números inteiros **E** (1 <= E <= 500) e **T** (1 <= T <= 100)
representando espaço e tempo, respectivamente.

### Saída
A saída consiste em uma única linha contendo a velocidade alcançada, sendo a
velocidade calculada da seguinte forma: **V = E/T**. *V* é um número inteiro.

| Entrada | Saída |
| --- | --- |
| 300 <br> 5 | 60 |
| 100 <br> 2 | 50 |


---


## B - Energia para transmutação

Em **Fullmetal Alchemist** alquimistas conseguem, com a ajuda de padrões
chamados círculos de transmutação, transformar um objeto em outro. Um
alquimista precisa saber qual a chance da transmutação que ele está querendo
realizar dar certo para que ele consiga transformar um objeto no objeto que ele
quer.

A quantidade de energia necessária para realizar uma transmutação (**E**) é dada pelo
nível da diferença entre os objetos (**D**) e pelo nível de imprecisão do círculo de
transmutação (**P**), tal que **E = D * P / (D + P + 1)**. Você foi contratado para, dados
o nível da diferença entre os objetos *D* e o nível de imprecisão do círculo de transmutação
*P*, descobrir qual é a quantidade de energia necessária para realizar a transmutação.

### Entrada
A entrada possui dois inteiros, separados por espaço. O primeiro valor é um inteiro
representando a diferença entre os objetos **D** (0 < D < 1000), e o segundo valor é um
inteiro representando a imprecisão do círculo de transmutação **P** (0 < P < 1000).

### Saída
A saída consiste em uma única linha contendo um número inteiro **E** que representa
a quantidade de energia necessária para realizar a transmutação em questão.

| Entrada | Saída |
| --- | --- |
| 12 15 | 6 |
| 100 72 | 41 |
| 643 11 | 10 |


---


## C - Contratos de bruxo

Um bruxo é alguém que caça monstros como profissão. Ele aceita contratos
de caça de monstros, e após concluí-los, coleta o pagamento. O bruxo também
pode negociar o seu pagamento, aplicando um bônus que é um fator de
multiplicação em cima do valor do contrato.

Um bruxo pediu a você que o ajude a calcular o seu ganho nos contratos.

### Entrada
A entrada é composta por dois inteiros, **a** (1 <= a <= 1000) e **b** (1.0 <= b <=
100.0), que representam o valor oferecido pelo contrato, e o fator de multiplicação do
bônus que o bruxo negociou, respectivamente.  
OBS: O valor de bônus é dado por um valor real (float) com apenas uma casa decimal,
que deve ser multiplicado pelo valor do contrato.

### Saída
A saída consiste em um número inteiro, representando o total ganho pelo bruxo
em seus contratos.

| Entrada | Saída |
| --- | --- |
| 100 1.2 | 120 |
| 700 1.6 | 1120 |
