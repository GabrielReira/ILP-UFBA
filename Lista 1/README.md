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



### B3 - Drone da Amazonia
A loja Amazonia decidiu fazer suas entregas utilizando drones, porém, ainda é necessário implementar a parte do código que irá dizer ao drone se ele está na posição determinada para entrega
ou não. Você deve escrever um programa que dadas as coordenadas de entrega e atual do drone,
diga se o drone pode ou não soltar o pacote.

#### Entrada:
A primeira linha da entrada consiste de dois inteiros, Xe e Ye, correspondentes as coordenadas de
entrega. A segunda linha consiste de dois inteiros, Xd e Yd, correspondentes as coordenadas do
drone.
- 1 ≤ Xe, Ye, Xd, Yd ≤ 1000.

#### Saída:
Seu programa deve imprimir em uma única linha dizendo “Soltar pacote” caso as
coordenadas de entrega e do drone sejam iguais, ou “Nao soltar pacote”, caso
sejam diferentes.

| Entrada | Saída |
| --- | --- |
| 5 20 <br> 5 20 | Soltar pacote |
| 3 4 <br> 2 4 | Nao soltar pacote |



### B4 - O Microverso
Rick e Morty estão em mais uma de suas aventuras intergalácticas quando Rick
precisa fazer uma pausa e checar se a bateria da nave está funcionando nos conformes.  
Essa bateria, entretanto, é nada mais nada menos que um universo em miniatura cujos
habitantes trabalham para gerar energia para a bateria da nave do Rick. Ele agora precisa
da sua ajuda, pois só quer dar partida na nave se tiver certeza de que os habitantes do
Microverso estão trabalhando para gerar energia e se houver energia suficiente produzida
até o momento para que eles possam chegar ao planeta onde tudo é espiga sem ter que
fazer paradas pelo caminho.

#### Entrada:
A entrada possui duas linhas.  
A primeira linha contém uma variável *T* que informa
se os habitantes estão trabalhando (ela deve receber 1 caso estejam trabalhando e 0
caso contrário).  
A segunda linha contém três inteiros: *EB*, *EP* e *EN*; sendo *EB* a
quantidade de energia que a bateria já possui (0 ≤ EB ≤ 5000), *EP* é a energia
produzida até então pelos habitantes e que poderá ser utilizada (0 ≤ EP ≤ 3000) e *EN*
que é a energia necessária para que Rick e Morty cheguem ao planeta onde tudo é
espiga (0 ≤ *EN* ≤ 10000).

#### Saída:
A saída consiste em uma única linha contendo a frase: “VAI!” caso a energia total
seja suficiente para chegar ao destino e os habitantes do Microverso estejam trabalhando,
ou em caso contrário, imprima: “FICA!”

| Entrada | Saída |
| --- | --- |
| 0 <br> 1000 200 7800 | FICA! |
| 1 <br> 4000 50 4020 | VAI! |



### B5 - As 7 Esferas do Dragão
As Esferas do Dragão são bolas laranjas e
cristalinas que podem invocar o Deus Dragão Shenlong, que
tem habilidades de conceder desejos para quem conseguir
juntar todas as 7 Esferas do Dragão da Terra. Shenlong pode
realizar qualquer desejo a não ser que ele exceda o poder de
seu Criador, que obrigatoriamente deve estar vivo.  
Para saber se pode realizar um desejo, Shenlong precisa da sua
ajuda. Dada a quantidade *P* de poder necessária para realizar
um desejo e a informação *C* de que o criador está vivo ou não,
informe se Shenlong conseguirá realizar o desejo.  
Um desejo pode ser realizado se a quantidade de poder necessária for
menor ou igual a 7000 e o Criador estiver vivo.

#### Entrada:
A entrada possui uma única linha, contendo um número inteiro *P*
indicando a quantidade de poder necessária para realizar o desejo,
e um caractere *C* indicando se o Criador está vivo ou morto.
- 1 ≤ P ≤ 7x10⁹;
- C = ‘V’, se o Criador está vivo;
- C = ‘M’, se o Criador está morto.

#### Saída:
Imprima “Sim, o desejo pode ser realizado!”, caso o desejo possa ser realizado ou
“Nao, o desejo nao pode ser realizado :(”, caso contrário.

| Entrada | Saída |
| --- | --- |
| 500 V | Sim, o desejo pode ser realizado! |
| 7000 M | Nao, o desejo nao pode ser realizado :( |
| 15000 V | Nao, o desejo nao pode ser realizado :( |
| 500000 M  | Nao, o desejo nao pode ser realizado :( |



### B6 - Chakra
No universo de Naruto, cada indivíduo nasce com
afinidade a um elemento específico no chakra que
corresponde ao estilo de jutsu que ele pode utilizar (estilo
**fogo**, estilo **água**, estilo **ar**, estilo **terra**
ou estilo **raio**). Os ninjas podem ser capaz de moldar seu
chakra a outros estilos através de muito treinamento, podendo
até juntar estilos e criar um elemento completamente novo.  
A vila de Konoha desenvolveu um método de
descobrir com que elemento um ninja possui afinidade
através de pedaços de papel que reagem de maneiras
especificas para cada estilo, porém fica complicado de
identificar quando um ninja domina mais de um. Por isso, a
vila de Konoha entrou em contato com os alunos de
programação da UFBA para que fizessem um programa
que facilitasse essa identificação.  
Dado um valor inteiro para um determinado chakra,
ele domina aquele elemento cujo inteiro correspondente
seja seu divisor. **Considere os estilos fogo, água, ar,**
**terra e raio** correspondentes, respectivamente, aos
inteiros **2, 3, 5, 7 e 11**. 

#### Entrada:
A entrada possui uma única linha, contendo um
número inteiro que corresponde ao valor numérico do
chakra de um certo ninja. É garantido que haverá pelo
menos um chakra.

#### Saída:
A saída consiste no nome de cada estilo que o ninja
domina, um por linha, na ordem que foram apresentados
acima e sem acentuação

| Entrada | Saída |
| --- | --- |
| 11 | raio |
| 45 | agua <br> ar |
| 26 | fogo |
| 28  | fogo <br> terra |



### B7 - Quadriláteros
Entre os quadriláteros notáveis, temos 3 com definições bem
semelhantes: os quadrados, retângulos e losangos. Cirinho é um aluno de
geometria que recebeu como tarefa diferenciar quadriláteros pelas suas
medidas e pediu sua ajuda para isso.  
Escreva um programa que define se o quadrilátero é exclusivamente
um retângulo, exclusivamente um losango, ou exclusivamente um quadrado,
dadas as medidas de seus lados e de seus ângulos internos (soma dos
ângulos internos tem que ser 360 graus).  

#### Entrada:
A entrada possui duas linhas, cada uma contendo 4 inteiros.  
A primeira linha contém 4 inteiros: L1, L2, L3 e L4, indicando as
medidas dos lados do quadrilátero, sendo que L1 é paralelo a L4 e L2 é
paralelo a L3.  
A segunda linha contém 4 inteiros: A1, A2, A3 e A4, indicando as
medidas dos ângulos do quadrilátero, sendo que A1 é oposto a A4 e A2 é
oposto a A3.  

#### Saída:
A saída consiste em uma linha.  
Se a figura for exclusivamente um retângulo, imprimir: “Retangulo.”,
se a figura for exclusivamente um losango, imprimir: “Losango.”, se a figura
for exclusivamente um quadrado, imprimir: “Quadrado.”, se a figura não se
encaixar na definição de nenhuma das formas, imprima: “Nenhuma das
formas procuradas.” 

| Entrada | Saída |
| --- | --- |
| 12 12 12 12 <br> 90 90 90 90 | Quadrado. |
| 13 30 30 13 <br> 90 90 90 90 | Retangulo. |
| 8 8 8 8 <br> 45 135 135 45 | Losango.  |
| 14 15 21 10 <br> 67 33 120 140 | Nenhuma das formas procuradas. |




---



# C - LOOP


### C1 - Média das idades
O professor Rubisley gostaria de saber qual é a média de idade entre
seus alunos do curso de programação. Para isto, ele pediu que você
desenvolva um programa que tendo como entrada as idades dos alunos,
informe a média entre elas. O programa deve ser encerrado quando for
digitado uma idade menor ou igual a zero.

#### Entrada:
Serão dados vários inteiros representando as idades dos alunos. O
programa só deve parar a leitura de idades quando o inteiro informado for
menor ou igual a zero.

#### Saída:
A saída do programa consiste da média inteira entre as idades
digitadas.

| Entrada | Saída |
| --- | --- |
| 15 <br> 20 <br> 30 <br> 0 | 21 |
| 15 <br> 15 <br> 15 <br> 0 | 15 |
| 13 <br> 12 <br> 5 <br> -2 | 10 |
| 18 <br> 0 | 18 |
| 20 <br> 10 <br> 12 <br> 14 <br> 16 <br> 12 <br> 0 | 14 |
| 60 <br> 10 <br> 20 <br> 15 <br> 12 <br> -20 | 23 |



### C2 - Exame Chunin
O Exame Chunin é uma série de testes em
que ninjas iniciantes (genins) tem que passar para
se tornarem ninjas experientes (chunins).
Geralmente, a primeira fase é uma prova escrita, a segunda
fase é uma fase de campo e, por último, existe uma
fase de luta entre os que sobraram para ver quem
merece subir de patente no mundo ninja.  
É importante dizer que, mesmo que um genin perca uma
luta na última fase, ele ainda pode ser considerado apto para
se tornar um chunin. O resultado da luta ajuda na hora da
decisão, mas caso o genin seja considerado merecedor
pelos avaliadores, ele pode se tornar um chunin. Outra
curiosidade é que o vencedor da luta final também
pode ser desclassificado.  
Naruto e seus amigos estavam prontos para realizar o Exame. Entretanto,
infelizmente, o Exame não pôde ser terminado por conta da invasão a Konoha
comandada por Orochimaru com a ajuda de ninjas da Areia.  
Tsunade, a nova Hokage (líder do País do Fogo), precisa da sua ajuda
para saber quem passou no Exame.  
Um genin passa no exame se a média de suas pontuações obtidas nas fases for
maior que 60.

#### Entrada:
A primeira linha da entrada indica a quantidade *N* (1 ≤ N ≤ 100) de ninjas que
participaram do Exame Chunin.
Em cada uma das *N* linhas seguintes serão dados três inteiros *E*, *C*, *L* (0 ≤ E,
C, L ≤ 100), que indicam, respectivamente, a pontuação de cada ninja na primeira,
segunda e terceira fase do seu Exame.

#### Saída:
Para cada ninja, imprima “Ninja K: passou no Exame Chunin com X de pontuacao”,
onde *K* é o número do ninja e *X* é a pontuação final daquele ninja caso ele tenha passado
no Exame, e imprima “Ninja K: nao passou no Exame Chunin”, caso o genin não tenha
passado no exame. Os ninjas são numerados de 1 a N.  
A pontuação final X deve ser impressa com uma casa decimal após a vírgula.

| Entrada | Saída |
| --- | --- |
| 2 <br> 100 95 0 <br> 50 50 50 | Ninja 1: passou no Exame Chunin com 65.0 de pontuacao <br> Ninja 2: nao passou no Exame Chunin |
| 3 <br> 75 50 75 <br> 100 100 100 <br> 0 0 0 | Ninja 1: passou no Exame Chunin com 66.7 de pontuacao <br> Ninja 2: passou no Exame Chunin com 100.0 de pontuacao <br> Ninja 3: nao passou no Exame Chunin |
