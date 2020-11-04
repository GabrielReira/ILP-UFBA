# D - VETORES


### D1 - Em busca da esmeralda

Sonic perdeu uma das Esmeraldas do Caos!! Se essa jóia cair nas mãos do
Dr. Eggman ninguém sabe do que ele seria capaz. Sonic sabe que a
esmeralda está dentro de uma caixa que tem um determinado número. Sua
tarefa é, dada uma sequência de caixas e o número da Esmeralda do
Caos, determinar se Sonic pode recuperar a Esmeralda.

#### Entrada:
A entrada possui três linhas. A primeira linha contém um inteiros *N* (1 ≤ N ≤ 1000),
representando o número de caixas onde pode estar a Esmeralda do Caos. A segunda linha
contém uma sequencia de *N* inteiros *n1, n2, …, n* representando os números das
esmeraldas que estão nas caixas, sendo 1 ≤ ni ≤ 1000. Por fim, na terceira linha será
dado um inteiro *C* (1 ≤ C ≤ 1000) que é o número da Esmeralda do Caos.

#### Saída:
A saída consiste em uma única linha contendo um número inteiro: O número da
Esmeralda do Caos, caso ela se encontre na sequência de caixas dada, ou -1 caso
contrário.

| Entrada | Saída |
| --- | --- |
| 8 <br> 1 2 4 3 5 6 7 8 <br> 4 | 4 |
| 10 <br> 12 1 4 7 9 8 1 2 3 90 <br> 6 | -1 |



### D2 - Mário Bros

Bowser sequestrou a princesa Peach (mais uma vez), agora cabe à
Mário resgatá-la. Para recuperar Peach, mário precisa passar por uma série
de fases, cada fase possui uma sequência de caixas as quais contém
moedas de ouro. Mário salta através da caixas, mas sempre com um pulo de
tamanho fixo, de duas em duas caixas, por exemplo. Sua tarefa é, dadas a
sequência de caixas com seus valores (quantidade de moedas na caixa) e o
tamanho do salto do Mário, determine a pontuação máxima de Mário ao fim
da fase. É garantido que Mário sempre começa a partir da primeira caixa e
sempre coleta as moedas desta caixa, a partir daí pula para a próxima caixa
de acordo com o tamanho do pulo, e assim sucessivamente.

#### Entrada:
A entrada possui três linhas. A primeira linha contém um inteiro *N* (*1*
*≤ N ≤ 1000*) indicando o número de caixas com as moedas de ouro. A
segunda linha contém uma sequencia de *N* inteiros *C1, C2, …, Cn*
representando a quantidade de moedas em cada caixa, com *1 ≤ Ci ≤ 1000*.
Por último, na terceira linha será dado um inteiro *K* (*1 ≤ K ≤ 1000*) que é o
tamanho do pulo de Mário.

#### Saída:
A saída consiste em uma única linha contendo um número inteiro: A
pontuação de Mário ao fim da fase.

| Entrada | Saída |
| --- | --- |
| 4 <br> 1 3 7 9 <br> 2 | 8 |
| 6 <br> 1 3 7 8 2 2 <br> 10 | 1 |
| 10 <br> 4 6 2 5 3 1 1 3 9 0 <br> 3 | 10 |



### D3 - Jogo da memória

Ana e Maria sempre foram garotas interessadas por jogos de memória. Desde pequenas, sempre
tiveram paixão por esses tipos de jogo. Porém, em um determinado dia, depois de falarem uma
enorme sequência de milhares de números e solicitar algum deles, se deram conta de que não seria
tão fácil relembrar todos eles. Com isso, decidiram pedir sua ajuda para criar uma espécie de
inspetor para verificar se a oponente havia de fato informado o valor correto. O jogo funciona
de uma maneira fácil. Dada uma sequência de números e uma posição, o outro jogador deverá
informar o valor que estava naquela posição.

#### Entrada:
A primeira linha do problema contêm um inteiro *N*, representando o número total de valores do
jogo da memória. A linha seguinte conterá *N* números, que são os valores que fazem parte do jogo.
Em seguida, na última linha, conterá o valor *M* do índice do número que se deseja verificar.
- 1 ≤ N ≤ 100;
- 1 ≤ M ≤ N.

#### Saída:
Você deverá imprimir o valor correto do n-ésimo elemento da sequência do jogo da memória.

| Entrada | Saída |
| --- | --- |
| 5 <br> 1 8 5 3 6 <br> 3 | 5 |
| 8 <br> 9 6 5 7 5 2 3 5 <br> 7 | 3 |



### D4 - Fila

Na loja de celulares de Bernardo, os clientes com senhas ímpares são atendidos antes que os
clientes de senhas pares, por isso, Bernardo pediu que você escrevesse um programa que, dado um
conjunto de senhas, retorne as senhas na ordem correta (primeiro as ímpares e depois as pares).

#### Entrada:
A primeira linha consiste em um inteiro *N*, o número de senhas emitidas por Bernardo. As *N*
linhas seguintes contém cada uma um inteiro *S*, correspondente a uma senha emitida.
- 1 ≤ S, N ≤ 100.

#### Saída:
O programa deverá imprimir as senhas na ordem correta (primeiro as ímpares e depois as pares).

| Entrada | Saída |
| --- | --- |
| 5 <br> 1 2 3 4 5 | 1 <br> 3 <br> 5 <br> 2 <br> 4 |
| 2 <br> 2 4 | 2 <br> 4 |



### D5 - Dr. Strange e as multidimensões

Não é novidade para ninguém que o Dr. Strange, o famoso mago da
Marvel, tem a incrível habilidade de viajar entre dimensões. Mas poucos
sabem que realizar tal feito não é tão fácil quanto parece.

Primeiro, Dr. Strange precisa pensar na dimensão que ele quer
chegar. Para isso, ele pensa em um número inteiro **N ≥ 2**, indicando o
número da dimensão de destino. Por exemplo, se o Dr. Strange deseja viajar
para a sexta dimensão, **N = 6**, significa que cada ponto dessa dimensão
pode ser especificado por uma sequência de seis números **s =**
**(n1,n2,n3,n4,n5,n6)**. Assim, se Dr. Strange deseja viajar para a
**N-ésima** dimensão, cada ponto dessa dimensão pode ser especificado por
uma sequência de *N* números **s = (n1, n2, …, nn)**, onde **ni** é um
número real qualquer, para **1 ≤ i ≤ n**.

O próximo passo é mais complicado. Escolhida a dimensão, Dr. Strange escolhe o ponto dessa
dimensão para onde ele deseja viajar, denotado **D**. A questão é que Dr. Strange não pode viajar
diretamente para **D**, primeiro ele deve viajar para um ponto intermediário, e de lá viajar para
**D**. Essa operação de viajar para um ponto e depois para o seu destino pode ser especificada como
uma **soma de sequências** na mesma dimensão, ou seja, dado o destino **D** e duas sequências **u**
e **v**, todos na dimensão **N**, sua tarefa é descobrir se a soma das duas sequências irá levar Dr.
Strange para o ponto **D**. A soma de duas sequências é definida da seguinte forma:
- u = (a1,a2, …, an);
- v = (b1, b2, …, bn);
- u + v = (a1+b1, a2+b2, …, an + bn).

#### Entrada:
A primeira linha da entrada contém um inteiro *N* (1 ≤ N ≤ 1000). Indicando a dimensão
para a qual Dr. Strange deseja viajar. As próximas três linhas indicam, respectivamente,
os *N* números inteiros de cada uma das sequências *u*, *v*, e do ponto *D*.

#### Saída:
A saída é composta de uma única linha com as possíveis respostas sem aspas: **“OK”**, se
Dr. Strange consegue viajar para *D*, ou **“NOPE :(”**, caso contrário.

| Entrada | Saída |
| --- | --- |
| 4 <br> 1 2 3 4 <br> 4 7 9 1 <br> 5 9 12 5 | OK |
| 3 <br> 1 2 4 <br> 1 56 22 <br> 1 2 4 | NOPE :( |



### D6 - Escolha as caixas

Póvoa está tentando desenvolver um novo jogo de azar. Uma das ideias que lhe veio à
mente foi a de distribuir inteiros aleatórios em caixas numeradas e pedir ao jogador que
selecionasse algumas destas caixas. **Caso a soma das caixas escolhidas pelo jogador for**
**um múltiplo de 3, ele vence, caso contrário, o vencedor será Póvoa.** Sua tarefa é ajudar
na implementação do jogo descrito.

#### Entrada:
A entrada é composta por 3 linhas. A primeira linha é composta por dois inteiros **N** e
**M**, respectivamente, o número de caixas dispostas e o número de caixas selecionadas. A
segunda linha contém *N* inteiros separados por espaços onde o *i-ésimo* inteiro
representa o conteúdo da *i-ésima* caixa. Analogamente, a terceira linha consiste dos *M*
identificadores das caixas selecionadas. A numeração das caixas começa em 1.
- 1 ≤ N, M < 100.

#### Saída:
Seu programa deve imprimir uma única linha que diz **“povoa”** ou **“jogador”**, com base
naquele que tiver vencido.

| Entrada | Saída |
| --- | --- |
| 3 1 <br> 1 2 3 <br> 3 | jogador |
| 5 2 <br> 7 12 4 3 1 <br> 2 5 | povoa |
| 5 3 <br> 2 2 2 5 9 <br> 1 2 3 | jogador |



### D7 - Lobo de Wall Street

Rubisley é um grande investidor da bolsa de valores. Todos os dias, após o fechamento da bolsa,
Rubis anota em sua agenda o quanto obteve de lucro após a venda de suas ações. Como ele não
pode tirar os olhos de seu Home Broker, pediu a sua ajuda para construir um programa que, dados
os valores registrados na sua agenda, responde a consultas de lucro total num intervalo de dias.

#### Entrada:
A primeira linha da entrada é composta por dois inteiro **N** e **C**, correspondente ao número de
dias que Rubisley registrou e ao número de consultas que devem ser realizadas no sistema. Em seguida,
são fornecidos *N* inteiros **L**, correspondentes ao lucro de um dia de movimentações. Por fim, as
próximas *C* linhas são compostas por dois inteiros **I** e **F**, correspondentes ao primeiro e ao
último dia do intervalo consultado.
- 1 ≤ N ≤ 10⁵;
- 1 ≤ I ≤ F ≤ N;
- 1 ≤ C ≤ 5 ∗ 10⁵;
- 1 ≤ L ≤ 10⁴.

#### Saída:
O programa deverá imprimir em cada linha a resposta de cada consulta realizada ao sistema.

| Entrada | Saída |
| --- | --- |
| 5 3 <br> 300 200 150 400 500 <br> 1 2 <br> 2 5 <br> 5 5 | 500 <br> 1250 <br> 500 |
| 6 2 <br> 500 700 320 610 900 80 <br> 1 3 <br> 4 6 | 1520 <br> 1590 |



### D8 - Brasileirão

O campeonato brasileiro de futebol, organizado pela CBF, é um campeonato no formato de
pontos corridos, utilizando a pontuação gerada pelos **(n-1)²** jogos resultantes do
double round-robin, onde **n** é o número de times.

A CBF sofreu um ataque hacker e perdeu o arquivo que dizia a rodada dessa semana,
e pediu sua ajuda para recriar essa rodada. Porém, nem tudo está perdido. Eles têm uma
lista dos times que jogam toda semana, e é através dessa lista que se gera os jogos.

Nessa lista, os times jogam entre si seguindo a seguinte lógica: sejam os **n** times do
campeonato os **i** times da competição, os times **1 ≤ i ≤ n/2** jogam com o time 
**n - i + 1**, onde o nome que vem primeiro é o mandante. Imprima a tabela da semana
segundo a especificação.

#### Entrada:
A entrada é composta por um inteiro **N**, seguido de uma lista de *N* strings (N é par),
um nome por linha. Nenhuma string terá mais de 50 caracteres.
- 1 < N ≤ 1000;

#### Saída:
**N/2 linhas**, cada linha no formato **"Time *i* X Time *n-i+1*"**.

| Entrada | Saída |
| --- | --- |
| 6 <br> Flamengo <br> Athletico Paranaense <br> Gremio <br> Bahia <br> Palmeiras <br> Vasco da Gama | Flamengo X Vasco da Gama <br> Athletico Paranaense X Palmeiras <br> Gremio X Bahia |
