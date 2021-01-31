# Exercícios sobre busca binária


## A - Floresta Equatorial da Amazônia

A Floresta Equatorial da Amazônia é uma floresta equatorial localizada na América do Sul
que representa mais da metade das florestas tropicais remanescentes no planeta. A Amazônia
compreende a maior biodiversidade em uma floresta tropical no mundo, e é de extrema
importância pela sua atuação na regulação climática e retenção de carbono da atmosfera.

Embora apresente uma importância a nível mundial, a Amazônia está ameaçada em razão
das ações antrópicas como queimadas, desmatamento e mineração. Preocupado com a situação
da floresta, um monitor da disciplina de lógica de programação resolveu expressar a sua aflição
na forma de um problema computacional. Um catálogo das espécies vistas na região durante a
última década foi obtido, e o monitor gostaria de saber se suas espécies favoritas ainda estão
neste catálogo.

Entretanto, o monitor não foi capaz de desenvolver um programa rápido o suficiente para
responder esta pergunta, visto que o bioma abriga uma enorme quantidade de espécies. Será
que você pode ajudá-lo?

### Entrada
A primeira linha da entrada possui um inteiro **N** (1 ≤ N ≤ 3×104), o número de espécies
vistas na última década. Seguem *N* linhas, cada uma contendo uma **string**, representando uma
espécie. A próxima linha apresenta um inteiro **Q** (1 ≤ Q ≤ 3×104), o número de requisições ao
catálogo. Seguem *Q* linhas, cada uma contendo uma **string**, representando uma espécie a ser
verificada no catálogo. As strings tem no máximo 30 caracteres.  
É garantido que a lista de espécies do catálogo está ordenada lexicograficamente, e que
espécies não se repetem.

### Saída
Para cada requisição, imprima o nome da espécie seguido de um espaço e a mensagem
"**foi extinto :(**" ou "**vive!**", a depender da presença da espécie no catálogo.

| Entrada | Saída |
| --- | --- |
| 6 <br> Gaviao-real <br> Lobo-guara <br> Onca-parda <br> Onca-pintada <br> Sapo-de-chifre-da-Amazonia <br> Tatu-canastra <br> 3 <br> Mico-leao-dourado <br> Onca-pintada  <br> Gaviao-real | Mico-leao-dourado foi extinto :( <br> Onca-pintada vive! <br> Gaviao-real vive! |


---


## B - Missões Skywalker

Há muito tempo atrás, em uma galáxia muito muito distante, Skywalker era um dos
mais conhecidos e poderosos Jedi. Ele era conhecido pela sua famosa habilidade de
pilotar. Yoda atribuiu a ele inúmeras missões e ele pediu a ajuda do(a) mais habilidoso(a)
programador(a) da galáxia, você. Ajude Skywalker a completar as missões e que a
força esteja com vocês.

Sua tarefa é: sabendo a posição de cada mundo habitado na federação galáctica e as missões
dadas por Yoda, descubra a distância total percorrida por Skywalker. Use distância
euclidiana entre os mundos P1 e P2:  
![Distância](https://latex.codecogs.com/svg.latex?d_E(P1,%20P2)%20=%20\sqrt{(x_2%20-%20x_1)^2%20+%20(y_2%20-%20y_1)^2})

### Entrada
Na primeira linha da entrada será dado um inteiro **N** (1 <= N <= 10000), representando o
número de mundos. Nas próximas *N* linhas serão dados o **nome** (5 caracteres entre A-Z) do
mundo com suas respectivas coordenadas inteiras **X** e **Y** (-100 <= X, Y <= 100) no mapa
cartesiano da federação, sendo a posição (0 ; 0) a capital. Os *N* mundos estão ordenados pelo
nome em ordem crescente. A seguir será dado um inteiro **M** (1 <= M <= 100000), representando o
número de missões dadas por Yoda. Na linha seguinte serão dados os *M* nomes dos mundos
para os quais Skywalker deve ir. Ele deverá visitar os mundos na ordem dada e todos os
mundos estão na listagem dada anteriormente.  
Skywalker começa as missões partindo da capital.

### Saída
Imprima a distância total percorrida por Skywalker. Use uma casa decimal.

| Entrada | Saída |
| --- | --- |
| 5 <br> ABCDE 1 1 <br> BCDEF 3 2 <br> CDEFG -1 2 <br> DEFGH -2 -2 <br> DEGHJ 1 2 <br> 3 <br> ABCDE DEGHJ ABCDE | 3.4 |


---


## C - Mestre Jedi

Há muito tempo atrás, em uma galáxia muito muito distante, o império do mal estava
construindo uma força, destruindo tudo em seu caminho. Mas os rebeldes não têm medo, ao
lado negro da força eles nunca vão se juntar. Uma esperança ainda existe. Yoda vai nos
levar para a luz, é hora de levantar e lutar.

Ele voa entre as estrelas na velocidade da luz para ensinar os jovens Jedi. Parabéns, você
nível subiu! Agora você pode mestre Jedi ser. Ajudar Mestre Yoda a percorrer a galáxia você precisa.

### Entrada
Na primeira linha será dado um inteiro **N** (1 <= N <= 1000) que representa a quantidade de
planetas na galáxia. Na próxima linha serão dados os códigos dos *N* planetas, em ordem alfabética,
sendo cada código com **6 caracteres entre letras maiúsculas**. Na próxima linha, será dado um inteiro
**X** (1 <= X <= 1000), a quantidade de planetas para os quais Yoda irá para treinar os jovens Jedi.
Nas próximas *X* linhas serão dados os códigos dos planetas e Yoda irá percorrê-los na ordem dada.
Por fim, será dada uma matriz de distância de dimensões **N x N**, onde as posições (x ; y) e (y ; x)
representam a distância entre os planetas x e y.  
**Obs.**: Um dado código de planeta possui uma posição *p* na lista de códigos de planetas. Sendo o
planeta com posição *x* e o planeta com posição *y* na lista de códigos, para saber a distância entre
'x' e 'y' basta acessar as posições (x ; y) ou (y ; x) da matriz de distâncias. Mestre Yoda sempre
começa do planeta na posição 0 (zero). Os planetas possuem códigos diferentes.

### Saída
Imprima a distância total percorrida por Yoda.

| Entrada | Saída |
| --- | --- |
| 3 <br> ADFXDE DFCDFG LPXDFH <br> 2 <br> LPXDFH DFCDFG <br> 0 2 3 <br> 2 0 5 <br> 3 5 0 | 8 |
| 4 <br> ABCDEF BCDEFG CDEFGH DEFGHI <br> 3 <br> BCDEFG CDEFGH DEFGHI <br> 0 1 2 3 <br> 1 0 1 2 <br> 2 1 0 1 <br> 3 2 1 0 | 3 |


---


## D - Atlantis

Você é um explorador que descobriu a cidade de Atlantis pouco antes
dela afundar e conseguiu presenciar e fotografar os últimos momentos da
cidade do seu helicóptero. Utilizando essa foto, você conseguiu determinar a
altura de cada parte da cidade em metros no momento 0, ou seja, antes da
água inundar a cidade. **A cada hora, a água subia 1 metro**. Você deseja saber
um pouco mais sobre os últimos momentos dessa grande civilização e por isso
deseja saber quantas partes da cidade foram inundadas dado a foto original, e
quantas horas se passaram desde o momento 0.

### Entrada
A primeira linha da entrada contêm dois inteiros, **N** e **M** (1 <= N,M
<= 300), que representam a largura e o comprimento da foto original. Cada
uma das próximas *N* linhas contêm *M* inteiros **A** (1 <= A <= 1000), que
representam a altura de cada parte da cidade no momento 0. A próxima linha
contêm um inteiro **Q** (1 <= Q <= 10000), o número de consultas que você
irá fazer. A linha seguinte contêm *Q* inteiros **H** (1 <= H <= 1000), que
representam o número de horas que se passaram desde o instante 0, para
cada uma das *Q* consultas.

### Saída
Para cada consulta você deve imprimir um número inteiro, que é o
número de partes da cidade que já foram inundadas. Ou seja, basta verificar
na foto (mapa – matriz) o número de partes da cidade que são menores ou
iguais ao tempo *H* dado para uma certa consulta *Q*, já que a cada hora o
nível do mar se eleva em 1 metro.

| Entrada | Saída |
| --- | --- |
| 4 4 <br> 1 1 2 2 <br> 3 5 5 1 <br> 2 3 6 5 <br> 1 1 1 1 <br> 3 <br> 1 7 4 | 7 <br> 16 <br> 12 |
