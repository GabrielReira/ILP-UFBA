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