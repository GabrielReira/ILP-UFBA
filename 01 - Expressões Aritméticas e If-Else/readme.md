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


---


## G - Guessing Game

O Guessing Game é um jogo onde o jogador tenta adivinhar um número secreto
que é gerado pelo programa. Você foi contratado para desenvolver o Guessing Game.
O programa deve:

1. Receber o número secreto gerado pelo programa;
2. Receber o número escolhido pelo jogador;
3. Comparar os números (secreto e do jogador); e
4. Exibir uma mensagem informando se o jogador acertou o número ou não.

### Entrada
A entrada é composta por dois números inteiros **X** e **Y** (0 <= X, Y <= 100),
que representam, respectivamente, o **número secreto** e o **número do jogador**.

### Saída
O programa deve comparar os números e informar se o jogador acertou ou errou o
número secreto, imprimindo a frase “**Você errou!**” ou “**Você acertou!**”,
sem aspas.

| Entrada | Saída |
| --- | --- |
| 99 10 | Você errou! |
| 10 10 | Você acertou! |


---


## H - Aniversário

Olá! Queremos dar as boas-vindas aos nossos mais novos colegas de computação. Para
isso, queremos saber um pouquinho mais sobre você. Na verdade, queremos saber o mês
de seu aniversário, para que quando essa pandemia passar, possamos fazer a maior
festa que o DCC já viu.

Para isso, leia um valor inteiro entre 1 e 12, inclusive, correspondente ao mês do seu
aniversário. A seguir, você deverá mostrar o nome do mês do ano em que comemoraremos o
seu aniversário e a nossa festa.

### Entrada
A entrada contém um único valor inteiro, correspondente ao mês do seu aniversário.

### Saída
Imprima o nome do mês correspondente ao número fornecido na entrada, com a primeira
letra maiúscula, conforme exemplos abaixo.

| Entrada | Saída |
| --- | --- |
| 9 | Setembro |
| 4 | Abril |


---


## I - Pu-Dean!

Sam e Dean acabaram de voltar de sua aventura com o Scooby-Doo e decidiram fazer
uma festa de comemoração. Sam está querendo fazer uma surpresa para o Dean e sabendo
que ele é viciado em Pudim resolveu que seria um monte de pudins, mas não qualquer
pudim e sim o especial Pu-Dean!

Sam sabe que para se fazer **1 Pu-Dean** perfeito é preciso **1259 segundos** de
dedicação e dos seguintes ingredientes:

- 4 caixas de leite condensado;
- 8 ovos;
- 2 litros de leite;
- 1 xícara de açúcar (calda).

Sabendo que Sam tem **C** caixas de leite condensado, **O** ovos, **L** litros de leite,
**X** xícaras de açúcar, e que ele fará o máximo de Pu-Deans que puder com os ingredientes
que tem, ajude-o a descobrir qual o total de tempo que ele precisará dedicar na cozinha.

### Entrada
A entrada é composta por **4** números inteiros **C, O, L, X** (0 <= C, O, L, X <=
1000000000), representando caixas de leite condensado, ovos, litros de leite e xícaras de
açúcar, respectivamente.

### Saída
A saída deve conter **3** informações em números inteiros **H, M e S**, representando
respectivamente, **horas**, **minutos** e **segundos** gastos por Sam. A saída deve estar
no seguinte formato: ***H* h *M* m *S* s**.

| Entrada | Saída |
| --- | --- |
| 4 8 2 1 | 0 h 20 m 59 s |
| 17 24 13 14 | 1 h 2 m 57 s |


---


## J - Cai pro x1

Lucas está jogando x1 contra seu amigo Pedro no counter strike, porém ele está
com dificuldade em saber quem obteve a maior pontuação geral de abates.
Considerando que eles jogaram 3 partidas, sua tarefa é elaborar um programa que
dada a pontuação de Pedro e Lucas em cada uma das 3 partidas diga quem obteve o
maior número de abates total.

### Entrada
A entrada consiste em **3 linhas contendo 2 inteiros *L* e *P*** (1 <= ‘L’, ‘P’ <= 100)
em cada uma, sendo que **L** indica a pontuação de Lucas e **P** a pontuação de Pedro.

### Saída
A saída consiste em uma linha contendo a palavra “**Empate**”, caso os dois empatem,
o nome “**Pedro**” caso Pedro tenha obtido uma pontuação de abates total maior que a
de Lucas, ou o nome “**Lucas**”, caso Lucas tenha abates total maior que Pedro.


| Entrada | Saída |
| --- | --- |
| 20 32 <br> 16 50 <br> 100 0 | Lucas |
| 20 32 <br> 14 54 <br> 10 0 | Pedro |
| 16 0 <br> 0 8 <br> 4 12| Empate |


---


## K - Programa de cálculo de imposto

O Programa de Cálculo de Impostos é um sistema que permite ao trabalhador colocar
o seu salário e saber quanto de imposto será descontado. Você foi contratado para
desenvolver esta solução. O programa deve:

1. Permitir que o trabalhador insira o seu salário em reais(R$);
2. Calcular o imposto para cada faixa de salário baseado na seguinte regra:
    - O trabalhador que tiver salário **até R$ 3.000** pagará o imposto de **15%**;
    - O trabalhador que tiver salário **de R$ 3.001 a R$ 6.000** pagará imposto de
    **20%** da parte do salário nesta faixa e **15%** da parte do salário na faixa
    anterior;
    - O trabalhador que tiver salário **acima de R$ 6.000** pagará o imposto de
    **30%** da parte do salário nesta faixa, bem como **15%** e **20%** das partes
    do salário em cada uma das outras faixas, respectivamente.
3. Exibir uma mensagem informando o imposto que será pago e o salário final do
trabalhador, já com o desconto do imposto aplicado.

### Entrada
A entrada é composta apenas por um número inteiro **S** (500 <= S <= 10000) que se
refere ao salário do trabalhador em reais.

### Saída
O programa deve imprimir a frase “**Imposto: R$** ” seguida do valor do imposto a ser
pago. Na linha seguinte deverá ser impressa a frase “**Salário líquido: R$** ” seguida
do valor do salário final já com o imposto descontado. Lembre-se que nem sempre será
um valor inteiro, e não sendo, use duas casas decimais de precisão.

| Entrada | Saída |
| --- | --- |
| 1000 | Imposto: R$ 150 <br> Salário líquido: R$ 850 |
| 4000 | Imposto: R$ 650 <br> Salário líquido: R$ 3350 |
| 2950 | Imposto: R$ 442.50 <br> Salário líquido: R$ 2507.50 |


---


## L - Calculadora do IMC

O índice de massa corporal (**IMC**) é uma medida internacional usada para calcular
se uma pessoa está no peso ideal. O IMC é definido pela seguinte equação:
**IMC = massa / (altura * altura)**. A massa é dada em quilogramas e a altura, em metros.

Após aprender que o IMC é um importante indicador de como anda sua condição
física, e preocupado com sua saúde e de seus conhecidos, você teve a ideia de criar uma
calculadora para facilitar que todos possam acompanhar suas situações.

### Entrada
A entrada é composta por **dois números reais**: a “**massa**” (30 ≤ “massa” ≤ 150) e
a “**altura**” (1,30 ≤ “altura” ≤ 2,20).

### Saída
A saída é a situação, determinada a partir do IMC calculado com a massa e altura
informadas sempre com duas casas decimais de precisão, de acordo com a tabela
abaixo:

| Resultado | Situação |
| --- | --- |
| Abaixo de 17 | muito-abaixo-do-peso |
| Entre 17 e 18,49 | abaixo-do-peso |
| Entre 18,50 e 24,99 | peso-normal |
| Entre 25 e 29,99 | acima-do-peso |
| Entre 30 e 34,99 | obesidade-1 |
| Entre 35 e 39,99 | obesidade-2 |
| Acima de 40 | obesidade-3 |

### Exemplos
| Entrada | Saída |
| --- | --- |
| 50.00 1.70 | abaixo-do-peso |
| 55.00 1.50 | peso-normal |
| 90.56 1.75 | acima-do-peso |
| 110.00 1.85 | obesidade-1 |
