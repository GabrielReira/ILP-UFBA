# Exercícios sobre vetor multidimensional (matriz)


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


---


## C - Brasil, Bolsa, Brinquedo

Diego é o mais novo usuário da B3 (Brasil, Bolsa, Brinquedo), uma bolsa de
valores utilizada por milhares de bebês para negociar cotas de brinquedos. Apesar de
novo, Diego não é besta nem nada, e quer lucrar o máximo possível. Para isso, precisa
analisar os gráficos da bolsa, a fim de aprender os padrões que possa tirar proveito.

Apesar do seu desejo, seu pai recusa-se a programar uma aplicação que ajude-o
a dissecar as diferenças nos valores de cota de brinquedos ao longo dos dias. Sem
alternativa, Diego resolveu passar-se por seu pai e pedir a um dos monitores de sua
disciplina que escreva um problema que ajude-o com seu passa tempo.

Diego tem as informações de variação do valor das cotas para todos os
brinquedos da bolsa em cada dia dos últimos anos, e deseja saber, a partir dessa
informação, a diferença do valor das cotas de um determinado brinquedo entre dois
dias. Ajude-o a ser o maior negociador de cotas de brinquedos do Brasil.

### Entrada
A primeira linha da entrada possui dois inteiros **N** (1 ≤ N ≤ 10), a quantidade
de brinquedos na bolsa, e **M** (1 ≤ M ≤ 105), a quantidade de dias visíveis no gráfico
de todos os brinquedos da bolsa. Seguem *N* linhas, uma para cada brinquedo,
contendo *M* inteiros **Mᵢⱼ** (-104 ≤ Mᵢⱼ ≤ 104), a variação do *j-ésimo* dia para o
brinquedo da linha *i*, sendo **1 <= i <= N** e **1 <= j <= M**. A próxima linha apresenta
um inteiro **Q** (1 ≤ Q ≤ 105), o número de requisições de intervalo a serem
respondidas. As *Q* linhas seguintes contêm três inteiros cada: **Kᵢ** (1 ≤ Ki ≤ N)
sendo o brinquedo que deseja-se saber a variação, seguido de **Aᵢ** e **Bᵢ** (1 ≤ Aᵢ ≤ Bᵢ
≤ M), o intervalo de dias que deseja-se saber a variação das cotas.

### Saída
Para cada requisição, imprima uma linha com um inteiro, a variação no preço
das cotas do brinquedo indicado no intervalo de dias especificado.

| Entrada | Saída |
| --- | --- |
| 2 10 **// Dois brinquedos, dez dias de gráfico para cada** <br> 3 5 1 0 9 -8 2 5 0 7 **// Variação preço brinquedo 1, dia 1, ..., dia 10** <br> 7 0 5 2 8 -9 0 1 5 3 **// Variação preço brinquedo 2, dia 1, ..., dia 10** <br> 3 **// Três requisições** <br> 2 3 4 **// Brinquedo 2, intervalo dos dias 3 a 4 → saída: 7** <br> 1 3 6 **// Brinquedo 1, intervalo dos dias 3 a 6 → saída: 2** <br> 2 9 9 **// Brinquedo 2, intervalo dos dias 9 a 9 → saída: 5** | 7 <br> 2 <br> 5 |

Obs.: Nos exemplos, o texto em negrito é somente explicativo e não faz parte da entrada.


---


## D - Oxi véi, cadê a praia?

Você está desenvolvendo um programa de navegação marítima e exploração de ilhas.
Você percebeu que o Dev responsável pelo mapa se esqueceu de um detalhe: as praias.
Você precisa resolver esse problema criando um programa que transforma em praia aquilo
que deveria ser praia.

### Entrada
A entrada será dada por um **mapa de dimensões 10x10**. Cada uma das 10 linhas de
entrada possuirá 10 caracteres separados por espaços, sendo o caractere **'*'**
para representar a água e **‘t’** para representar a terra.

### Saída
O programa deve imprimir o mapa corrigido, transformando em **praia ‘p’** todo
pedaço de **terra ‘t’** que estiver em contato direto com a **água ‘*’**,
verticalmente ou horizontalmente. O que estiver fora do mapa deve ser considerado
como terra.

| Entrada | Saída |
| :---: | :---: |
| * * * * * * * * * * <br> * * t t t t * * * * <br> * t t t t t t * * * <br> * * * * t t t t t * <br> * * * * * t t t t * <br> * * * * * t t t * * <br> * * * * t t t t * * <br> t t t t t t t t t * <br> t t t t t t t t * * <br> t t t t t * * * * * | * * * * * * * * * * <br> * * p p p p * * * * <br> * p p p t t p * * * <br> * * * * p t t p p * <br> * * * * * p t t p * <br> * * * * * p t p * * <br> * * * * p t t p * * <br> p p p p t t t t p * <br> t t t t t p p p * * <br> t t t t p * * * * * |
| t * * * * * * * * t <br> * t t t t t t t t * <br> * t t t t t t t t * <br> * t t t t t t t t * <br> * t t t t t t t t * <br> * t t t t t t t t * <br> * t t t t t t t t * <br> * t t t t t t t t * <br> * t t t t t t t t * <br> t * * * * * * * * t | p * * * * * * * * p <br> * p p p p p p p p * <br> * p t t t t t t p * <br> * p t t t t t t p * <br> * p t t t t t t p * <br> * p t t t t t t p * <br> * p t t t t t t p * <br> * p t t t t t t p * <br> * p p p p p p p p * <br> p * * * * * * * * p |
