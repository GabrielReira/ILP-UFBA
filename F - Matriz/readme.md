# Exercícios sobre vetor multidimensional/matriz

## A - Detetizador do Futuro

Jonathan é um estagiário da prestigiada Macrosoft, o que muitos
não sabem é que ele está muito frustrado, pois acaba de descobrir que
tudo que é feito lá nunca funciona. Como Jonathan não consegue mais
trabalhar, ele decidiu criar um jogo para passar o tempo. No jogo Detetizador
do Futuro, o seu objetivo é matar todos os bugs que aparecem
na tela (um bug morre se seus pontos de vida chegarem a 0), e Jonathan
pediu para que você o ajudasse, escrevendo a parte do código que diz se
o jogador ganhou ou perdeu.

### Entrada
A primeira linha é composta por dois inteiros **N** e **M**, correspondentes, respectivamente, ao
número de linhas e de colunas da matriz que serão passada como entrada. As próximas *N* linhas terão
cada uma *M* inteiros **P**, correspondentes aos pontos de vida do bug que está naquela posição, em
casas com 0 não existem bugs. A próxima linha será composta por um inteiro **A**, correspondente ao
número de tentativas de acertar um bug. As *A* linhas seguintes, cada uma com dois inteiros **L** e
**C** indicam a posição do bug a ser atingido (se houver).
- 1 ≤ L ≤ N ≤ 10;
- 1 ≤ C ≤ M ≤ 10;
- 0 ≤ P ≤ 100;
- 1 ≤ A ≤ 1000.


### Saída
O programa deverá imprimir **HASTA LA VISTA BABY** se todos os bugs forem mortos e **I'LL BE BACK**
caso contrário.

| Entrada | Saída |
| --- | --- |
| 2 2 <br> 1 0 <br> 0 1 <br> 2 <br> 1 1 <br> 2 2 | HASTA LA VISTA BABY |
| 2 2 <br> 1 1 <br> 1 0 <br> 2 <br> 1 1 <br> 1 2 | I'LL BE BACK |
| 3 3 <br> 3 1 0 <br> 0 2 0 <br> 1 0 1 <br> 8 <br> 1 1 <br> 1 1 <br> 1 1 <br> 1 2 <br> 2 2 <br> 2 2 <br> 3 1 <br> 3 3 | HASTA LA VISTA BABY |


---


## B - Campo de abóboras

Hagrid está tendo um dia cheio com Picuço e pediu ajuda a Harry e Ron. Eles precisam ajudá-lo a
coletar abóboras. A plantação é grande e para acelerar o trabalho, **Hagrid pede que Harry**
**fique responsável pela colheita em uma determinada linha, começando na esquerda e indo**
**até o fim dela na direita**. Da mesma forma, **Hagrid pede que Ron colha as abóboras em
**outra linha, porém agora, Ron começa em cima e vai até o fim dela na parte de baixo da**
**plantação**.

Hagrid quer saber ao fim da tarefa qual dos dois coletou mais abóboras, levando-se em
consideração seu peso. **Só tome cuidado com o ponto de intersecção entre as duas linhas que**
**Harry e Ron irão coletar as abóboras. Somente um deles fica com a abóbora que está lá, ela**
**é do primeiro que lá chegar, ou seja, ela pertence àquele que estiver mais próximo dela a**
**partir do ponto de início de sua colheita, e se der empate na distância, a abóbora fica**
**com Ron**.

### Entrada
Seu programa receberá primeiramente um inteiro **N** (1 ≤ N ≤ 100), representando o
tamanho da plantação de abóboras, que é um campo de proporção ***N*x*N*** (N linhas horizontais
por N linhas verticais). A seguir serão dadas *N* linhas, onde em cada uma serão dados *N* inteiros
**P** (1 <= P <= 100), que representam o peso de cada abóbora no campo. Há uma abóbora em cada
posição do campo NxN. Por fim, a última linha da entrada contêm as linhas **X** e **Y**
(0 <= X,Y < N) que Harry e Ron irão coletar, respectivamente.

### Saída
Imprima o peso total da colheita de Harry e a seguir, na linha de baixo, imprima o peso total da
colheita de Ron, como nos exemplos abaixo.

| Entrada | Saída |
| --- | --- |
| 4 <br> 1 2 3 4 <br> 5 6 7 8 <br> 1 3 5 7 <br> 2 4 6 8 <br> 1 2 | Harry 19 <br> Ron 21 |
| 4 <br> 1 2 3 4 <br> 5 6 7 8 <br> 1 3 5 7 <br> 2 4 6 8 <br> 2 1 | Harry 16 <br> Ron 12 |
| 3 <br> 1 2 3 <br> 4 5 6 <br> 7 8 9 <br> 1 1 | Harry 10 <br> Ron 15 |
