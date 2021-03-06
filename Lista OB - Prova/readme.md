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


---


## C - Loop

### C1 - No meio do caminho

Carlão da Verdade era um senhor que gostava de caminhar por bosques. Certo dia,
Carlão decidiu seguir o caminho do bosque que levava a uma cachoeira.
Carlão temia que no meio do caminho pudesse encontrar uma pedra grande o suficiente
para tornar o percurso perigoso demais para ele. Caso houvesse uma pedra dessa magnitude,
ele teria que desistir de sua caminhada e retornar para casa.

Segundo Carlão, se a altura de uma pedra em seu caminho for maior que *K*, ele não
poderá passar por ela.

Como ele não quer perder tempo, ele pediu a sua ajuda para descobrir se no meio do
caminho haverá uma pedra que o impossibilitará de chegar à cachoeira. Para isso, lhe foram
dadas informações sobre as *N* pedras que se encontram no caminho. Cada informação é um
inteiro que corresponde à altura da *i-ésima* pedra. De posse dessas informações, ajude a
descobrir se Carlão deve ou não desistir de sua caminhada.

#### Entrada
A primeira linha da entrada contém dois inteiros, **N** e **K** , que indicam a quantidade de
pedras no caminho e a altura da maior pedra pela qual Carlão consegue passar.
A segunda linha da entrada contém *N* inteiros **Hᵢ** , onde o *i-ésimo* valor representa a altura da
*i-ésima* pedra no caminho.
- 0 ≤ N ≤ 50;
- 1 ≤ K, Hᵢ ≤ 109.

#### Saída
Seu código deve imprimir “**Tá safe, o caminho é izi!!!**” (sem aspas), caso Carlão possa
fazer sua caminhada tranquilamente (ele consegue passar por todas as pedras). Caso
contrário, imprima “**Você não vai passar!!!**” (sem aspas) .

| Entrada | Saída |
| --- | --- |
| 3 7 <br> 2 5 11 | Você não vai passar!!! |
| 3 11 <br> 2 5 7 | Tá safe, o caminho é izi!!! |


### C2 - BLACK JACK

O black jack é um jogo de cartas em que cada jogador recebe um número
determinado de cartas. Se tivermos dois jogadores, o vencedor é o que obtiver, no
somatório das cartas em sua mão, 21 pontos exatos, ou o maior somatório que mais se
aproxime de 21 e que seja menor que 21. Caso o valor da soma das cartas de algum
jogador supere 21 pontos, ele é considerado perdedor automaticamente. Você deverá
fazer um programa que simule uma partida entre dois jogadores e apresente o
resultado.

#### Entrada
Na primeira linha da entrada será dado um inteiro **N** (1 <= N <= 7), indicando o
número de cartas na mão de cada jogador. Na segunda linha serão dadas as *N* cartas do
**jogador A**. Na terceira linha serão dadas as *N* cartas do **jogador B**.
Saiba que as cartas tem valores entre 1 e 11, podendo, obviamente, se repetir.

#### Saída
A saída constará de uma frase com as seguintes informações:

    1. Caso haja vencedor, você deverá imprimir “Jogador X vence com P pontos.”, sendo que ‘X’ é o
    jogador ‘A’ ou ‘B’, e ‘P’ é o somatório das cartas do vencedor;
    2. Caso algum jogador vença com 21 pontos exatos, você deverá imprimir “Jogador X vence com
    BlackJack.”, sendo que ‘X’ é o jogador ‘A’ ou ‘B’; 
    3. Caso os jogadores tenham o mesmo número de pontos, você deverá imprimir “Empate.”, isto
    inclusive se ambos forem eliminados quando obtiverem mais de 21 pontos.

| Entrada | Saída |
| --- | --- |
| 4 <br> 1 4 2 6 <br> 4 6 1 1 | Jogador A vence com 13 pontos. |
| 4 <br> 1 3 5 2 <br> 6 4 10 1 | Jogador B vence com BlackJack. |
| 3 <br> 10 4 6 <br> 10 8 10 | Jogador A vence com 20 pontos. |
| 4 <br> 10 10 3 1 <br> 10 1 2 9 | Empate. |


---


## D - Array

### D1 - Treino CS:GO

Thiago decidiu treinar em um mapa do jogo de CS:GO. Neste mapa, o objetivo é
estourar balões para obter pontos. Cada cor de balão tem uma pontuação aleatória única
durante o treino, ou seja, os balões verdes podem ter a pontuação 2, os azuis 4. Porém,
uma cor aleatória retira pontos ao invés de acumular. Como Thiago não sabe a cor a
princípio, ele deseja saber qual foi sua pontuação ao final do treino.

#### Entrada
A entrada possui três linhas. A primeira linha contém um inteiro **N** (1 ≤ N ≤
1000), representando o número de balões que Thiago estourou. A segunda linha
contém uma sequência de *N* inteiros **P** (1 <= P <= 100), representando a pontuação de
cada balão estourado. Na última linha será dado um inteiro **C** (1 <= C <= 100), que
representa a cor (pontuação) do balão que retira pontos, ou seja, a pontuação a ser
retirada toda vez que um balão daquela cor for estourado. Lembre-se que os balões de
uma mesma cor tem sempre a mesma pontuação.

#### Saída
A saída consiste em uma única linha contendo a pontuação final.

| Entrada | Saída |
| --- | --- |
| 4 <br> 1 3 2 4 <br> 2 | 6 |
| 6 <br> 1 1 3 1 3 4 <br> 3 | 1 |
| 5 <br> 1 1 2 2 1 <br> 2 | -1 |


### D2 - Vingadores Avante!

Thanos é um titã louco que está executando um plano
maligno. Ele deseja encontrar todas as joias do infinito para
eliminar 50% da população do universo. Em sua caçada as
joias, ele encontra muitas joias falsas o que torna o trabalho
dele longo e difícil. Na terra existe uma equipe de pessoas
com poderes que desejam impedir Thanos de executar o plano, e precisam saber se Thanos já
conseguiu coletar todas as joias verdadeiras, caso não tenha coletado
todas, eles precisam saber quais joias verdadeiras Thanos já encontrou.

As Joias tem seus identificadores especiais, que são: **Joia do Poder = 0**,
**Joia do Tempo = 7**, **Joia da Mente = 11**, **Joia do Espaço = 14**,
**Joia da Realidade = 17**, **Joia da Alma = 19**. Esses identificadores poderão aparecer
no máximo uma vez cada.

#### Entrada
A primeira linha contém um inteiro **N** (0 < N < 1000) que informará
a quantidade de joias que Thanos coletou, a segunda linha contém os *N*
identificadores inteiros **X** (0 <= X <= 1000) das joias que Thanos já
coletou.

#### Saída
Você deverá exibir a mensagem “**Vingadores Avante**”, caso Thanos
tenha coletado todas as joias. Caso tenha coletado apenas algumas, você
deverá exibir todas as joias verdadeiras que foram coletadas por Thanos, na
ordem em que foram dadas, e na segunda linha a mensagem “**Vingadores**
**Atencao**”. Caso Thanos não tenha coletado nenhuma joia verdadeira, exiba
a mensagem “**Pizza**”.

| Entrada | Saída |
| --- | --- |
| 7 <br> 19 8 7 14 0 11 17 | Vingadores Avante |
| 5 <br> 14 0 2 6 19 | 14 0 19 <br> Vingadores Atencao |
| 3 <br> 2 3 4 | Pizza |


---


## E - Matriz e String

### E1 - Cinema

Cleiton está comprando ingressos para ir ao cinema com sua namorada, mas a sessão está
quase lotada e ele precisa de sua ajuda para escolher uma poltrona para se sentar. A atendente te
informará quantas fileiras a sala de cinema tem, quantas cadeiras cada fileira possui e se cada lugar
está ou não ocupado. Cabe a você encontrar dois assentos, um do lado do outro, para Cleiton
assistir seu filme. As fileiras e os assentos são informados em ordem crescente, e são contados a
partir de 1. **Só há um lugar onde Cleiton pode se sentar ao lado de sua namorada**.

#### Entrada
A primeira linha da entrada consiste de dois inteiros **F** e **C** que representam, respectivamente,
a quantidade de fileiras e a quantidade de cadeiras em cada fileira (contadas a partir de 1). Cada uma
das próximas *F* linhas contém *C* inteiros que serão **0 para um assento vago** ou **1 a para um assento ocupado**.
- 1 ≤ F ≤ 30;
- 2 ≤ C ≤ 30.

#### Saída
Seu programa deve imprimir na primeira linha "**Fileira: F**", onde *F* é a fileira escolhida. E na outra
linha "**Assentos: X e Y**", onde *X* e *Y* são os assentos escolhidos.

| Entrada | Saída |
| --- | --- |
| 1 4 <br> 0 1 0 0 | Fileira: 1 <br> Assentos: 3 e 4 |
| 4 3 <br> 0 1 0 <br> 1 1 1 <br> 0 0 1 <br> 1 1 1 | Fileira: 3 <br> Assentos: 1 e 2 |
| 2 6 <br> 0 1 1 1 0 1 <br> 1 1 0 0 1 1 | Fileira: 2 <br> Assentos: 3 e 4 |


### E2 - Caça palavras

Caça palavras é sem dúvida um passatempo muito apreciado pelos alunos
de ILP-PD, tanto é que os professores da disciplina resolveram treinar as
habilidades de percepção de seus pupilos.

Como você não foge de um desafio, terá o privilégio de fazer um programa que
encontra uma palavra escondida no meio de várias letras. A disposição da palavra
pode ser na **horizontal** ou **vertical**, e além disso, existe a possibilidade
da palavra estar escrita de **trás para frente**.

#### Entrada
A entrada será dada por uma grade de caracteres com dimensões **N x N**, portanto
será dado primeiramente um inteiro **N** (6 <= N <= 10). Cada uma das *N* linhas
seguintes possuirá *N* caracteres, separados por espaços, sendo que estes podem
ser **somente letras minúsculas no intervalo a - z**. Por fim, na última linha,
será dada a palavra a ser buscada e que terá tamanho **X** (3 <= X <= 8).

#### Saída
Você deverá imprimir as coordenadas da linha e coluna, na grade de caracteres,
de onde começa a palavra buscada, seguidas na mesma linha, das coordenadas de
onde termina a palavra buscada. Garantimos que a palavra sempre estará na grade e
que sempre caberá nela.

| Entrada | Saída |
| :---: | --- |
| 6 <br> a b c d e f <br> d c a s a b <br> j p a k t a <br> u b v c t e <br> t k e i o u <br> b o l a q u <br> casa | 1 1 1 4 |
| 6 <br> a b c d e f <br> d a r a c b <br> j p a k t a <br> u b v c t e <br> t k e i o u <br> b o l a q u <br> levar | 5 2 1 2 |


---


## F - Ordenação

### F1 - Boletim de urna de seção

Durante as eleições municipais no Brasil, cada partido/coligação tem direito a
colocar um fiscal por seção que fica responsável por monitorar e garantir que a eleição
não sofrerá nenhum tipo de fraude ou interferência. Ao final do dia, isto é, encerrada a
eleição, o responsável pela zona eleitoral/seção deve imprimir um documento chamado
boletim de urna da seção, que mostra dentre outras informações, o resultado de votos
por candidato. Cópias podem ser entregues a cada fiscal que estiver na sala, pois dessa
forma os partidos e coligações conseguem apurar os votos mesmo antes da apuração
oficial e até mesmo encontrar supostas fraudes ou erros.

Escreva um programa que receba os boletins de três seções, e diga qual a quantidade de
votos nestas três seções de cada um dos candidatos. Cada boletim contém os candidatos a
prefeito seguindo uma mesma ordem, e a quantidade de votos obtidos por cada um. Os votos
em cada boletim, portanto, devem ser lidos na mesma ordem para todos os candidatos. Ao
final da leitura os votos devem ser somados e a lista ordenada do menor para o maior
deverá ser impressa.

#### Entrada
Na primeira linha da entrada será dado um inteiro **N** (2 <= N <= 100),
representando o número de candidatos que obviamente é igual em cada boletim. Cada
uma das próximas 3 linhas (cada linha é um boletim, uma seção) contêm *N* inteiros,
representando a quantidade de votos de cada candidato naquela seção.

#### Saída
A saída deve ser a impressão da quantidade total de votos obtidos por cada
candidato nas três seções, ordenadas da menor quantidade para a maior.

| Entrada | Saída |
| --- | --- |
| 4 <br> 2 3 1 5 <br> 1 5 4 4 <br> 2 3 4 3 | 5 <br> 9 <br> 11 <br> 12 |
| 2 <br> 22 29 <br> 30 14 <br> 10 20 | 62 <br> 63 |


### F2 - Stack Overflow

Stack Overflow é um dos mais famosos sites de perguntas e respostas para profissionais e
entusiastas na área de programação de computadores. E nesse ano, o pessoal da Stack
resolveu mostrar o ranking com as linguagens de programação mais populares. Porém, devido a uma
instabilidade no seu banco de dados, as pontuações se embaralharam e a ordem correta se
perdeu. Nesse sentido, eles pediram sua ajuda para organizar as pontuações e suas respectivas
linguagens.

#### Entrada
A primeira linha da entrada contém um número inteiro **J** (1 ≤ J ≤ 100), representando a
quantidade de linguagens que estão embaralhadas. As próximas *J* linhas, contém cada uma,
uma string **N**, representando o nome da linguagem, e um número real **P** (0 ≤ P ≤ 1000),
representando a pontuação de cada uma. Considere *N* uma string sem espaços entre os
caracteres e que não houve repetição de linguagem. Também não há repetição na pontuação.

#### Saída
Imprima as pontuações ordenadas crescentemente, precedidas por suas respectivas
linguagens. Imprima uma linguagem por linha com um espaço entre o nome e a pontuação.
Considere uma casa decimal de precisão.

| Entrada | Saída |
| --- | --- |
| 4 <br> C++ 56.6 <br> HTML/CSS 46.5 <br> Java 55.9 <br> Assembly 70.6 | Assembly 70.6 <br> C++ 56.6 <br> Java 55.9 <br> HTML/CSS 46.5 |
| 3 <br> TypeScript 32.9 <br> VBA 80 <br> C 66.9 | VBA 80.0 <br> C 66.9 <br> TypeScript 32.9 |


---


## G - Busca binária

### G1 - Mate o rei da noite

A batalha de Winterfell começou. No campo de batalha a sua frente estende-se a horda do rei da noite.
Jon Snow precisa eliminar o rei da noite para que todo o seu exército caia. Contando com suas habilidades
furtivas, Jon te incumbiu a tarefa de identificar se o líder dos caminhantes brancos está no campo de batalha.

Encontre o rei da noite. Para isso, você receberá a lista de identificadores dos caminhantes brancos no
campo de batalha e alguns identificadores que podem ser do rei da noite. Caso o encontre, você deve
informar rapidamente a Winterfell que a possibilidade de ganhar ainda existe, gritando para todos ouvirem.

#### Entrada
Primeiramente será dado um inteiro **X** (1 <= X <= 100000) que representa a quantidade de
caminhantes brancos no campo de batalha. Na linha seguinte são fornecidos *X* inteiros **I** (1 <= I <= 100000)
representando todos os identificadores dos caminhantes brancos nos arredores de Winterfell. Estes
identificadores estão em ordem crescente. Em seguida, um inteiro **N** (1 <= N <= 100000) indica quantos
identificadores o Rei da Noite pode ter. Na linha seguinte serão fornecidos os *N* identificadores **R** (1 <= R <=
100000).  
Somente um desses identificadores poderá estar na sequência de identificadores de caminhantes brancos.

#### Saída
Na saída deve ser impresso "**Preparem o vidro de dragao!!!**" se você encontrar o rei da noite, caso
contrário, "**E assim termina nossa vigilia**".

| Entrada | Saída |
| --- | --- |
| 5 <br> 45 62 91 666 1000 <br> 2 <br> 666 5 | Preparem o vidro de dragao!!! |
| 8 <br> 2 12 34 43 67 85 98 90 <br> 1 <br> 13 | E assim termina nossa vigilia |


### G2 - O Arquivo

A Universidade de Temerant é um local para aprendizados superiores, especialista em muitas áreas diferentes do
conhecimento, tais como: Alquimia, Artificiaria, Medicina, Retórica, Simpatia, etc. Para servir de apoio a esses
campos, a Universidade conta com **O Arquivo**, uma biblioteca com milhares de livros, sem janelas ou decorações,
tendo somente um grande portão de pedra.

Para acessar esse enorme acervo e preservá-lo, a Universidade tem o que são chamados de escribas, os mantenedores
do Arquivo. Eles conseguem os livros que os arcanistas (membros da universidade) precisam. Devido à queda do
império Aturano e ao caos que isso gerou, a Universidade está com uma quantidade de escribas muito reduzida. Por
isso, eles contam com a sua ajuda para que consigam atender a todos os arcanistas com eficiência.

Como e'lir (arcanista iniciante) da Universidade, foi passada a você a tarefa de desenvolver um algoritmo que,
dado o acervo de livros do Arquivo, **já ordenados pelo código**, e uma lista de livros requisitados pelos
arcanistas, consiga dizer para o escriba com **rapidez** se cada um daqueles livros requisitados está disponível
ou não, caso o livre exista na biblioteca.

#### Entrada
A primeira linha da entrada contém um inteiro **L** (1 ≤ L ≤ 3*10⁴) que indica quantos livros
estão no Arquivo. Nas próximas *L* linhas será dada uma string com cinco caracteres (letras
maiúsculas e minúsculas), que representa o código do livro, seguida por um inteiro **C** que tendo o
valor 1 indica que o livro está disponível e tendo o valor 2 indica que o livro está emprestado. Na
próxima linha será dado inteiro **A** (1 ≤ A ≤ 3*10⁴) que indica quantos livros há na lista de
requisições dos arcanistas. Por fim, na próxima linha serão dados os códigos dos *A* livros
requisitados.

#### Saída
A saída deverá conter para cada requisição o resultado da busca, que pode ser '**Disponivel**'
ou '**Emprestado**', caso o livro exista no Arquivo, e '**Nao encontrado**', caso o livro não exista
no Arquivo.


| Entrada | Saída |
| --- | --- |
| 3 <br> KABDe 1 <br> MBJEF 2 <br> PDXDc 2 <br> 2 <br> KABDe PDXDc | Disponivel <br> Emprestado |
| 2 <br> MJDGa 1 <br> RSKLb 2 <br> 4 <br> MJDGa DfSJL CBeDA RSKLb | Disponivel <br> Nao encontrado <br> Nao encontrado <br> Emprestado |
