# Exercícios sobre busca binária em vetores

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
