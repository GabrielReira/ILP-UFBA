# A - EXPRESSÕES ARITMÉTICAS


### A1 - Mercado do futuro
Ana é uma garota amante de jogos eletrônicos e não gosta de perder
tempo no mercado com o seu pai. Decidiu então desenvolver um programa
que diminua o seu tempo perdido nas filas do mercado. Seu dispositivo
registra suas compras e seu pai paga a conta sem precisar utilizar os caixas
do mercado. Ela deseja calcular o tempo perdido nos mercados para
convencer os seus amigos da eficiência do seu novo aparelho, que não
gasta tempo algum, é simples e prático.  
1. O mercado possui apenas 1 caixa para pagar pelas mercadorias.  
2. Cada mercadoria registrada aumenta o atraso em 2 segundos.  
3. O mercado possui diversos clientes na fila.  

#### Entrada:
A entrada possui uma única linha, contendo um número inteiro “C”
indicando o número de clientes na fila e um número inteiro “Q” indicando a
quantidade de produtos por cliente, nesta ordem.  
- 1 ≤ C ≤ 20;
- 1 ≤ Q ≤ 30.

#### Saída:
A saída consiste em uma linha com um número inteiro, indicando o
tempo perdido no mercado.  

| Entrada | Saída |
| --- | --- |
| 2 3 | 12 |
| 1 2 | 4 |
| 3 1 | 6 |
| 10 2 | 40 |
| 2 6 | 24 |
| 10 10 | 200 |



### A2 - Que os jogos comecem 1
Você foi transportado para um mundo de aventuras e fantasias! Neste mundo
você deve resolver questões para aumentar seu nível.  
Logo de cara você encontra O SER SUPREMO chamado **Malver**.  
Malver lhe desafia a resolver uma questão de matemática NÍVEL 3.  
Então vamos lá...É HORA DO DUELO:  
Resolva: **X + (25 - 1 + (-11 + 3) + 4)**

#### Entrada:
Você receberá um número inteiro ‘X’ (1 <= ‘X <= 1000).

#### Saída:
Imprima a frase “Resultado da questão é: ” seguido da resposta.

| Entrada | Saída |
| --- | --- |
| 20 | Resultado da questão é: 40 |
| 50 | Resultado da questão é: 70 |
| 70 | Resultado da questão é: 90 |
| 100 | Resultado da questão é: 120 |



### A3 - Que os jogos comecem 2
Hum.... Conheço você de algum lugar!!  
De onde será? HAAAAAAAAA....Não acredito que passou no meu teste de nível 3.  
Se prepare para o próximo desafio.  
Aliás, dessa vez vou pedir uma ajuda do meu amigo Sasuke.  
É HORA DO DUELO:  
Resolva:
- Questão 1: **X + (54 * (43 * 2) + (Y + 43))**;
- Questão 2: **Y * (24 * (12 * 3) - (X + 43))**;
- Total = **Questão 1 + Questão 2**.

#### Entrada:
Você receberá dois números inteiros ‘X’ e ‘Y’ (1 <= ‘X’, ‘Y’ <= 1000).

#### Saída:
Imprima as frases conforme a coluna SAÍDA informado na tabela abaixo.

| Entrada | Saída |
| --- | --- |
| 5 7 | Resultado da primeira questão é: 4699 <br> Resultado da segunda questão é: 5712 <br> Resultado final é: 10411 |
| 12 32 | Resultado da primeira questão é: 4731 <br> Resultado da segunda questão é: 25888 <br> Resultado final é: 30619  |
| 9 6 | Resultado da primeira questão é: 4702 <br> Resultado da segunda questão é: 4872 <br> Resultado final é: 9574  |
| 13 21 | Resultado da primeira questão é: 4721 <br> Resultado da segunda questão é: 16968 <br> Resultado final é: 21689  |



### A4 - Maratona Netflix
Jorginho está indo mal no colégio. Visando passar em todas as matérias, ele definiu um
sistema de recompensas próprio. Para cada hora de estudo, ele “ganha” duas horas de
Netflix.  
Como ele pretende terminar “Stranger Things”, Jorginho pediu que você desenvolvesse
um programa que recebe as horas estudadas durante a semana e retorna o número de
horas de lazer disponíveis para serem “resgatadas”, sabendo que ele não estudou no fim
de semana.  

#### Entrada:
A entrada consiste de cinco inteiros Ki, separados por espaços, correspondentes ao
número de horas estudadas em cada dia da semana.  
- 0 ≤ Ki ≤ 24;
- 0 < i ≤ 5.

#### Saída:
A saída é composta por uma única linha contendo um inteiro com o número de horas
disponíveis para assistir a série.

| Entrada | Saída |
| --- | --- |
| 5 4 3 2 1 | 30 |
| 0 0 2 5 0 | 14 |



### A5 - Game Of Thrones
O inverno está chegando no mundo de game of thrones, e Jon Snow precisa de sua ajuda para
salvar a vida do povo do norte.  
Com a chegada do inverno Jon precisa saber qual a quantidade
de comida que precisa ser estocada em Winterfell. Porém, fazer esses cálculos demanda algum
trabalho e Jon precisa pensar em outras coisas no momento, então sobrou para você a missão
de fazer um programa que faça todos os cálculos de forma rápida e clara.

#### Entrada:
A entrada possui 3 linhas, onde na primeira linha temos o número de pessoas no castelo
e a quantidade de comida que cada pessoa precisa, a segunda linha possui o número de
cavalos e a quantidade de comida para cada cavalo, a terceira linha será o número de
lobos e a quantidade de alimento que cada lobo consome.

#### Saída:
A saída consiste em uma linha informando o total de comida que
precisa ser estocada.

| Entrada | Saída |
| --- | --- |
| 500 20 <br> 200 40 <br> 50 20 | 19000 |



### A6 - Área do mapa
Você foi contratado por uma famosa empresa de desenvolvimento de
jogos e foi logo alocado para a parte de desenvolvimento.  
A empresa anda ocupada em desenvolver um novo jogo de mundo aberto com 
um mapa realmente grande. Você ficou responsável por implementar o
programa que, dados o comprimento e a largura do mapa, calcula a sua
área e a imprime na tela. Não desaponte seus novos chefes!

#### Entrada:
A entrada possui uma única linha, contendo dois números inteiros
**C e L, com 1 <= C <= L <= 10000**.

#### Saída:
A saída consiste em uma única linha contendo um número inteiro: A
área do mapa a ser calculada.

| Entrada | Saída |
| --- | --- |
| 10 10 | 100 |
| 46 900 | 41400 |
| 7 4 | 28 |



---



# B - IF/ELSE


### B1 - Dilema de Thanos
Thanos, o temido Titã do Universo Marvel, tem o objetivo de reequilibrar o universo eliminando
exatamente metade dos seres vivos existentes.  
O que poucas pessoas sabem é que, na verdade, Thanos sofre desde a infância com um problema:
ele não consegue lidar bem com matemática e odeia números pares. Por conta disso, ele decidiu
que só eliminará metade da população do universo caso essa quantidade seja um número par.  
Thanos consultou o Oráculo com o intuito de encontrar o programador com o maior potencial em
todo o Universo e que pudesse desenvolver seu programa. Após a consulta, você foi recrutado
para tal tarefa. O objetivo é criar um programa que, dado o número atual da população de todo o
Universo, ele diga a atitude que Thanos tomará. 

#### Entrada:
A entrada consiste de um número inteiro *N*.  
- 1 ≤ N ≤ 10¹⁵

#### Saída:
Seu Programa deve imprimir duas linhas. A primeira deverá conter o número analisado. A segunda
conterá somente uma das duas frases abaixo:
- Thanos nao poupara o Universo.
- Thanos poupara o Universo.

| Entrada | Saída |
| --- | --- |
| 10000 | 10000 <br> Thanos nao poupara o Universo. |
| 1912739 | 1912739 <br> Thanos poupara o Universo. |
| 1000000000008 | 1000000000008 <br> Thanos nao poupara o Universo. |



### B2 - Pokémon
A franquia de jogos de Pokémon consiste em um mundo onde as
pessoas convivem com “monstros”, construindo relação com eles,
capturando, batalhando, entre outras atividades. Um dos objetivos
principais dos jogos é capturar todos os Pokémon possíveis da região,
para ajudar o Professor a completar a enciclopédia chamada Pokédex.
Para capturar um Pokémon, é necessário enfraquecê-lo e, então, jogar a
Pokébola.  
Leaf é uma garota que está em missão para completar a Pokédex e
deseja saber se a quantidade de Pokébolas que ela tem no momento é
suficiente para capturar todos os Pokémon da área em que ela está.
Desconsiderando a chance de um Pokémon fugir da Pokébola e considerando
que cada área tem diversidade limitada de espécies de Pokémon, escreva um
programa que determina se Leaf tem Pokébolas suficientes para capturar
todos as espécies que podem aparecer ali e, se não tiver, quantas Pokébolas
ela precisa comprar.  

#### Entrada:
A entrada possui uma única linha, com dois números *E* e *P*, que
determinam, respectivamente, a quantidade de espécies diferentes de
Pokémon que aparecem naquela área e a quantidade de Pokébolas que Leaf
tem no momento.
- 0 ≤ E ≤ 50;
- 0 ≤ P ≤ 75.

#### Saída:
O programa deve imprimir “Ok!”, se Leaf tem Pokébolas suficientes
para capturar todas as espécies da área e, se sobrarem Pokébolas, deve
imprimir, em outra linha, um inteiro *S* indicando quantas sobraram. Caso
contrário, imprima um número inteiro *Q* indicando quantas ela precisa
comprar.

| Entrada | Saída |
| --- | --- |
| 10 12 | Ok! <br> 2 |
| 45 25 | 20 |
| 5 5 | Ok! |
