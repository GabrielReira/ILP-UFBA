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
