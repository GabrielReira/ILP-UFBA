# Exercícios sobre expressões aritméticas


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


---


## D - Grandes tesouros

Luffy e o Bando dos Chapéus de Palha são um bando de piratas que encontram
tesouros a cada ilha que passam. Luffy está precisando de um tesoureiro,
alguém que faça as contas dos tesouros encontrados. Para isso, o bando
precisa da sua ajuda.

### Entrada
A entrada possui uma sequência de **6** números (**t1, t2, …, t6**), sendo
(**1 <= ti <= 10**) representando os valores em ouro dos tesouros encontrados
até agora. Sua tarefa é dizer o valor total de tesouros do bando.

### Saída
A saída consiste em uma única linha contendo um número inteiro: A soma do valor
de todos os tesouros dos Chapéus de Palha.

| Entrada | Saída |
| --- | --- |
| 1 2 3 4 5 6 | 21 |
| 2 4 7 9 8 10 | 40 |


---


## E - Rocket League

Rocket League é um famoso jogo de carrinhos jogando futebol. Os jogadores
dirigem veículos turbinados e tentam acertar as bolas para fazer os gols,
ou praticar defesas épicas.

Ivan Salnicov é um grande jogador de Rocket League. Para saber o rendimento dele
em uma partida, ele pretende contratar um programador para calcular quantos pontos ele
conseguiu fazer. Para isso, será dada a quantidade de **gols, defesas épicas, defesas**
**normais, chutem em gol e explosão de outros carrinhos** provocadas por ele, sabendo que
cada um desses eventos valem, respectivamente, **100pts, 75pts, 50pts, 10pts, 100pts**.

### Entrada
A entrada contém 5 inteiros, **X, Y, Z, H, L** (0 <= X, Y, Z, H, L <= 100) que
representam, respectivamente, a **quantidade de gols, defesas épicas, defesas normais,**
**chutes em gol e explosão de outros carrinhos**.

### Saída
A saída vai conter apenas uma linha indicando a **quantidade de pontos** que Ivan fez
naquela partida.

| Entrada | Saída |
| --- | --- |
| 2 1 3 0 5 | 925 |
| 0 2 2 5 10 | 1300 |


---


## F - Busca do Tesouro Perdido

Em One Piece, a tripulação dos chapéu de palha está tentando pegar
o tesouro deixado pelo antigo rei dos piratas, Gol D. Roger. Para
alcançar esse objetivo, eles avançam na grande linha sem se
importar com as leis impostas pelo governo mundial, muitas vezes
encarando a própria marinha.

Como o bando de Luffy é da pior geração, a marinha vive aumentando a
recompensa pela captura dos seus membros. Cansados de recalcular a
recompensa do bando toda vez que as recompensas individuais mudam, dadas
as recompensas atuais pela tripulação, calcule qual a recompensa total
pelo bando.

### Entrada
A entrada possui **5** valores (**1 < L, Z, N, U, S < 10⁹**) separados
por espaço, que representam as recompensas pelos cinco piratas do
bando, em bellies, a moeda do mundo de one piece.

### Saída
A saída consiste em uma única linha contendo um número que representa
o valor total da recompensa pelo bando do chapéu de palha, que é a
**soma das recompensas dos 5 piratas**.

| Entrada | Saída |
| --- | --- |
| 300000000 120000000 16000000 30000000 77000000 | 543000000 |
| 500000000 320000000 66000000 200000000 177000000 | 1263000000 |
