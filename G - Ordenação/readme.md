# Exercícios sobre ordenação

## A - Quem vai ser o milionário?

Uma loja de tortas e doces muito engraçadinha resolveu angariar clientes com um sorteio. Os clientes
que fossem consumir algo na loja recebiam uma ficha com um número aleatório, o cliente que recebesse
um número exatamente no meio da ordem de números distribuída ganharia um MILHÃO. Isso mesmo, um milho
BEM grande (imperdível!). Então por exemplo, se dona Joana tirasse o número 13 quando a loja tivesse
outros 6 clientes cujos números são (1, 22, 10, 5, 16, 14), ela seria a vencedora pois o 13 está
exatamente no meio (depois de 1, 5, 10 e antes de 14, 16, e 22).

O dono da padaria, Sr. Monopoly, gostaria que você escrevesse um programa onde dados os números de
suas fichas do sorteio, calcule o vencedor.

### Entrada
A primeira linha é um inteiro **N** ímpar (**1 <= N < 10000**) que
corresponde a quantidade de clientes na loja no momento.
A segunda linha recebe *N* inteiros **M** (**1 <= M < 100000**) não
repetidos que correspondem aos números de cada ficha recebida por cada
cliente.

### Saída
A saída possui uma linha com o número da ficha do vencedor do
sorteio.

| Entrada | Saída |
| --- | --- |
| 7 <br> 12 5 1 16 23 11 2 | 11 |
| 5 <br> 10 9 8 7 6 | 8 |


---


## B - Ordenando a pilha de livros

Sendo bem organizado, Jubileu resolveu organizar uma pilha de livros de
diversos tamanhos diferentes, de forma que um livro de tamanho menor fique
sempre em cima dos maiores, ou seja, ele quer manter a organização na sua
prateleira de forma decrescente de cima para baixo.

### Entrada
A primeira linha de entrada contém um número inteiro **N (1 ≤ N ≤ 1000)**,
representando a quantidade de livros a serem organizados. Cada uma das
próximas *N* linhas contém uma sequência de **1 a 50 caracteres '*'**,
representando o tamanho do livro.

### Saída
A saída consiste em imprimir *N* linhas que mostram a organização dos livros
após a ordenação de Jubileu.

| Entrada | Saída |
| --- | --- |
| 3 <br> *** <br> * <br> ** | * <br> ** <br> *** |
| 10 <br> ***** <br> **** <br> ***** <br> ****** <br> ******* <br> ******* <br> ******** <br> ******** <br> * <br> ********** | * <br> **** <br> ***** <br> ***** <br> ****** <br> ******* <br> ******* <br> ******** <br> ******** <br> ********** |


---


## C - Temos que pegar

Ash Ketchum é um jovem treinador que está iniciando sua jornada na região de Kanto, e sonha em
se tornar um verdadeiro mestre pokemon, descobrindo o máximo de novos monstrinhos para registrar
na sua Pokédex.

Ash precisa melhorar o sistema de sua Pokédex, incluindo opções de classificar os pokemons vistos
por nível ou nome, facilitando a busca por mais informações, quando necessário.

Cada Pokémon possui um **nome** e um **nível de força único inicial** que determina o seu poder de
batalha contra outros rivais. Ajude Ash construindo um programa que classifique os Pokémon por nível
de força ou pelo nome, podendo ambas as classificações serem exibidas em ordem **crescente** ou
**decrescente**. Ash só pode registrar um único Pokémon de determinado tipo, não havendo, portanto,
repetições de tipo e de poder.

### Entrada
A primeira linha consiste de três informações, sendo a primeira um inteiro
**Q** (1 <= Q <= 151), representando a quantidade de pokemon que o
programa irá classificar. A segunda informação é um caractere que define a
forma de classificação dos pokemon, sendo **N** para nome e **L** para nível. E a
terceira informação é um caractere que indica a ordem de classificação, sendo
**C** para crescente e **D** para decrescente. Cada uma das próximas *Q* linhas
informam o nome de um pokemon com seu respectivo nível de força.

### Saída
Devem ser impressos os pokemon de forma ordenada, conforme a
configuração de entrada. Imprima o nome antes do nível, sempre.

| Entrada | Saída |
| --- | --- |
| 5 N D <br> Pikachu 9 <br> Bulbasaur 13 <br> Charmander 5 <br> Squirtle 3 <br> Caterpie 8 | Squirtle 3 <br> Pikachu 9 <br> Charmander 5 <br> Caterpie 8 <br> Bulbasaur 3 |
| 5 L C <br> Pikachu 9 <br> Bulbasaur 13 <br> Charmander 5 <br> Squirtle 3 <br> Caterpie 8 | Squirtle 3 <br> Charmander 5 <br> Caterpie 8 <br> Pikachu 9 <br> Bulbasaur 13 |


---


## D - FAAMG

Larissa é uma das novas estudantes de ciência da computação da UFBA. Ela desde criança
tinha um sonho, trabalhar em grandes empresas de tecnologia como Google, Facebook e Microsoft.
Conversando com amigos e professores ela soube que colegas que participavam de competições
como maratonas de programação e faziam parte do GRUPRO da UFBA, costumeiramente eram
chamados para estagiar ou trabalhar nessas grandes empresas. Com isso, Larissa logo entrou para o
GRUPRO e criou sua conta no Codeforces (site mais usado por competidores) para se dedicar às
maratonas.

No site Codeforces, geralmente, ocorrem de 1 a 3 competições semanalmente, para todos os
níveis. Cada competição têm de 5 a 10 problemas e que geram uma determinada pontuação para
quem os resolve. Para cada usuário uma cor é atribuída de acordo com o seu rating (que começa de
zero quando a conta é criada) e vai variando conforme a participação de cada um nas competições.
Portanto, cada intervalo de rating recebe uma cor distinta. Veja na tabela abaixo essa distribuição
dos rating.

| Gray | Green | Cyan | Blue | Purple | Yellow | Red | Red Nutella | 
| --- | --- | --- | --- | --- | --- | --- | --- |
| … 1199 ] | 1200-1399 | 1400-1599 | 1600-1899 | 1900-2099 | 2100-2499 | 2500-2999 | [ 3000 … |

Larissa pediu para que você escreva um programa que informa qual a cor de cada pessoa
após mais uma competição que ela participou. A pontuação de cada participante na competição é
dada pela soma da pontuação em todos os problemas. Como a quantidade de participantes dessa
competição foi ímpar, o rating final de cada participante foi calculado seguindo a fórmula geral:
**(rating inicial + variação)**, de tal forma que a **variação do i-ésimo** participante seria dado pela
fórmula: **(Xi – Xm) / 100**; Sendo *Xi* a pontuação total na competição do competidor *i*, e *Xm* sendo a
pontuação do participante na mediana da ordenação das pontuações totais dos competidores na
competição. Caso a variação seja um número em ponto flutuante, considere somente a parte
inteira.

### Entrada
A primeira linha da entrada consiste de um inteiro **N** ímpar e um inteiro **M**, que
representam, respectivamente, o número de participantes e o número de problemas. A próxima
linha contêm *N* inteiros **Rᵢ**, representando o rating inicial do *i-ésimo* participante. Cada uma das
próximas *N* linhas contêm *M* inteiros **Aᵢ,ⱼ**, representando a pontuação do *i-ésimo* participante no
*j-ésimo* problema.
- 1 ≤ N ≤ 10^2 + 1;
- 5 ≤ M ≤ 10;
- 0 ≤ Aᵢ,ⱼ ≤ 4000;
- 0 ≤ Rᵢ ≤ 4000.

### Saída
Imprima a cor dos participantes após a competição, na ordem de classificação (em ordem
decrescente da pontuação total na competição). A pontuação nessa competição de todos os
participantes foi distinta, não houve empate.

| Entrada | Saída |
| --- | --- |
| 7 5 **// 7 competidores e 5 problemas** <br> 20 1900 2015 1410 2482 1901 2980 **// Rating inicial dos competidores** <br> 300 0 0 0 0 **// Competidor 1 → pontuação na competição: 300 pontos** <br> 464 738 435 1210 0 **// Competidor 2 → pontuação: 2847** <br> 500 738 900 1250 1440 **// Competidor 3 → 4828** <br> 425 698 600 0 0 **// Competidor 4 → 1723** <br> 498 728 800 1005 0 **// Competidor 5 → 3031** <br> 0 750 628 0 715 **// Competidor 6 → 2093** <br> 500 734 1028 1688 2410 **// Competidor 7 → 6360** | Red Nutella <br> Purple <br> Yellow <br> Purple <br> Blue <br> Green <br> Gray |

Obs.: O texto em negrito na entrada não faz parte da entrada, é somente explicativo.

### Exemplificação desse caso de teste

|  | Competidor | Rating Inicial | Pontuação total na competição | Variação | Rating final | 
| :---: | :---: | :---: | :---: | :---: | :---: |
| 1 | 7 | 2980 | 6360 | (6360 - 2847) / 100 = 35 | 3015 |
| 2 | 3 | 2015 | 4828 | (4828 - 2847) / 100 = 19 | 2034 |
| 3 | 5 | 2482 | 3031 | (3031 - 2847) / 100 = 1  | 2483 |
| 4 | 2 | 1900 | **2847** | (2847 - 2847) / 100 = 0  | 1900 |
| 5 | 6 | 1901 | 2093 | (2093 - 2847) / 100 = -7 | 1894 |
| 6 | 4 | 1410 | 1723 | (1723 - 2847) / 100 = -11| 1399 |
| 7 | 1 | 20   | 300  | (300 - 2847) / 100 = -25 | -5   |

Note que a entrada não é ordenada pela pontuação total na competição dos competidores, é
sua tarefa fazer isso. Nesse caso, a pontuação do participante *Xm* na mediana da classificação é
2847 (célula azul na tabela), obtido após ordenar a pontuação total na competição dos *N*
participantes e pegando-se o participante na posição central da classificação.
