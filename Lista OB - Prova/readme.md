# Lista obrigatória - Prova


## A - Expressões aritméticas

### A1 - Live solidária

A pandemia provocada pelo novo Coronavirus (Covid-19) abalou a estrutura
econômica de vários países, inclusive do Brasil. Durante a crise provocada,
demissões em massa e até mesmo a falência de empresas fizeram com que a taxa
de desemprego aumentasse significantemente. Para contornar essa situação,
artistas e patrocinadores se uniram em transmissões ao vivo pela internet a
fim de angariar fundos para apoiar pessoas e instituições afetadas pela crise.

Em um modelo de live solidária, um cantor chamado Léo, prometeu, doar 10 cestas
básicas para comunidades carentes a cada 10.000 (dez mil) expectadores assistindo
sua live. Desenvolva um programa que auxilie Léo na sua empreitada. O programa
deve receber a quantidade de expectadores e retornar a quantidade de cestas
básicas a serem doadas.

#### Entrada
A entrada é composta por um inteiro, não nulo, **E** (1 <= E <= 10000000),
representando a quantidade de expectadores.

#### Saída
A saída deve ser dada por um número real **C**, com duas casas decimais, que
representa a quantidade de cestas básicas que serão doadas.

| Entrada | Saída |
| --- | --- |
| 10000 | 10.00 |
| 10 | 0.01 |
| 100 | 0.10 |


### A2 - Contador de segundos

Senku é um garoto muito inteligente e gosta de contar o tempo em segundos. Às
vezes, quando precisa contar um tempo muito longo, ele pode se perder e errar
a conta. Senku quer saber se contou o tempo de um determinado evento em segundos
corretamente, para isso ele precisa que você converta o tempo em segundos, que
ele calculou, para horas, minutos e segundos.

#### Entrada
Será dado um número inteiro **N** (1 <= N <= 100000000) que representa o tempo
do evento em segundos.

#### Saída
Contém o tempo dado em segundos convertido para horas, minutos e segundos,
como nos exemplos abaixo.

| Entrada | Saída |
| --- | --- |
| 4000 | 1h 6m 40s |
| 5200 | 1h 26m 40s |
| 59 | 0h 0m 59s |


---


## B - If-Else

### B1 - Aluno nota dez

No colégio do Chico o Programa Acadêmico é um sistema que permite à escola
saber se o aluno está reprovado ou aprovado. Você foi contratado para
desenvolver essa solução. O programa deve:

    1. Permitir que o professor insira 03 notas e o número de faltas;
    2. Calcular a situação final do aluno. As situações finais possíveis são:
    (i) Aprovado; (ii) Reprovado por falta; e (iii) Reprovado por nota. A
    média de aprovação é 7,0 e o limite aceitável de faltas é de 25% do total
    de aulas, que é sempre 68. A reprovação por falta se sobrepõe à por nota;
    3. Exibir uma mensagem informando a situação final do aluno.

#### Entrada
A entrada é composta por 3 números reais referentes às 03 notas e um número
inteiro referente às faltas.

#### Saída
O programa deve analisar os valores informados na entrada e imprimir a situação
do aluno conforme especificado no item 2. A reprovação por falta deve apenas
indicar este fato. Aprovação ou reprovação por nota deve indicar este fato e,
na mesma linha, separado por espaço, imprimir a média do aluno, com uma casa
decimal de precisão.

| Entrada | Saída |
| --- | --- |
| 6.0 8.0 10.0 <br> 10 | Aprovado 8.0 |
| 5.0 6.0 4.0 <br> 15 | Reprovado por nota 5.0 |
| 6.0 2.0 6.0 <br> 23 | Reprovado por falta |


### B2 - Fazendo um gol

O jogo favorito de Lucas é Bomba Patch. Atualmente, ele está desenvolvendo uma
forma de saber qual é o melhor lado para driblar o zagueiro adversário e chutar para o
gol. Por isso ele pediu sua ajuda para desenvolver um programa que vai receber as
direções que o zagueiro e o goleiro tentarão defender, e as direções que o atacante irá
tentar driblar o zagueiro e chutar para gol, e diga se o atacante terá sucesso ou não.

#### Entrada
A entrada é composta por apenas duas linhas contendo dois caracteres em cada. Na primeira
linha temos **z** e **g**, sendo *z* a direção que o zagueiro irá para tentar bloquear o drible do
atacante e *g* a direção que o goleiro irá tentar defender o chute do atacante. A segunda linha
contém dois caracteres **d** e **c**, que são, respectivamente, a direção que o atacante irá tentar
driblar o zagueiro e, se passar pelo zagueiro, a direção que o atacante irá chutar para o gol. Saiba
que os valores possíveis para *z*, *g*, *d* e *c* são esquerda ou direita, representados pelos
caracteres ‘e’ e ‘d’, respectivamente.

#### Saída
A saída depende das seguintes situações:
- No caso do zagueiro e atacante irem na mesma direção, só haverá uma linha na saída e deve-se
imprimir a frase "**Bloqueado**";
- No caso de zagueiro e atacante irem em direções opostas, a frase impressa na primeira linha será
"**Driblado**";
- Caso o atacante tenha passado pelo zagueiro e o atacante chute na mesma direção que o goleiro
foi para tentar defender, a frase impressa na segunda linha será "**...e o goleiro pega**";
- Caso o atacante chute para um lado e goleiro vá para o outro a frase na segunda linha será
"**Gol**".

**Obs.: Só há a segunda linha na saída se o atacante passar pelo zagueiro. Sempre**
**interprete os dados na perspectiva de cada jogador.**

| Entrada | Saída |
| --- | --- |
| e e <br> e d | Driblado <br> ...e o goleiro pega |
| d d <br> d d | Driblado <br> Gol |
| e d <br> d d | Bloqueado |
