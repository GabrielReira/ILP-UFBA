# Exercícios sobre vetor/array

## A - Em busca da esmeralda

Sonic perdeu uma das Esmeraldas do Caos! Se essa jóia cair nas mãos do
Dr. Eggman ninguém sabe do que ele seria capaz. Sonic sabe que a
esmeralda está dentro de uma caixa que tem um determinado número. Sua
tarefa é, dada uma sequência de caixas e o número da Esmeralda do
Caos, determinar se Sonic pode recuperar a Esmeralda.

### Entrada
A entrada possui três linhas. A primeira linha contém um inteiro **N** (1 ≤ N ≤ 1000),
representando o número de caixas onde pode estar a Esmeralda do Caos. A segunda
linha contém uma sequencia de *N* inteiros **n1, n2, …, nn** representando os números
das esmeraldas que estão nas caixas, sendo **1 ≤ nᵢ ≤ 1000**. Por fim, na terceira
linha será dado um inteiro **C** (1 ≤ N ≤ 1000) que é o número da Esmeralda do Caos.

### Saída
A saída consiste em uma única linha contendo um número inteiro: **O número da**
**Esmeralda do Caos**, caso ela se encontre na sequência de caixas dada, ou **-1**
caso contrário.

| Entrada | Saída |
| --- | --- |
| 8 <br> 1 2 4 3 5 6 7 8 <br> 4 | 4 |
| 10 <br> 12 1 4 7 9 8 1 2 3 90 <br> 6 | -1 |


---


## B - O mochileiro metódico

Will é um vendedor que mora na vila de Rynoka e sai em aventuras
desbravando masmorras para conseguir bons equipamentos e vendê-los em
sua loja. Mas Will é um rapaz muito metódico, e, toda vez que retorna de uma
jornada, ele esvazia a sua mochila retirando um item por vez, sempre do último
adquirido até o primeiro. Sua tarefa é fazer um programa que, dado uma lista
de itens na mochila de Will, você deve mostrar na tela a ordem deles após
Will retirá-los da mochila.

### Entrada
A primeira linha contém um inteiro **N** (1 <= N <= 103),
representando o número de itens na mochila de Will. A segunda linha
consiste de *N* inteiros **I** (1 <= I <= 103) representando os itens na
sequência em que foram colocados na mochila (podem existir itens
repetidos).

### Saída
A saída consiste de uma linha na qual você deverá imprimir os itens
na ordem que Will vai tirá-los da mochila.

| Entrada | Saída |
| --- | --- |
| 5 <br> 1 2 3 4 5 | 5 4 3 2 1 |
| 8 <br> 9 6 8 1 5 8 3 2 | 2 3 8 5 1 8 6 9 |
| 4 <br> 5 7 2 1 | 1 2 7 5 |


---


## C - Encontrar as Esferas do Dragão

As Esferas do Dragão são bolas laranjas e cristalinas que podem invocar o Deus
Dragão Shenlong que tem a habilidade de conceder desejos para quem conseguir
juntar as sete esferas. Para que seja possível identificar quem conseguiu juntar as
sete esferas precisaremos verificar se existem sete asteríscos (*) no conjunto de
esferas fornecidos. Caso haja menos que sete esferas não será possível realizar o
pedido. Se houverem mais que sete também não será possível visto que só existem sete
esferas originais.

### Entrada
Na primeira linha será fornecido um inteiro **N** (1 <= N <= 100) que representa a
quantidade de esferas coletadas. Na próxima linha serão dados *N* caracteres que
podem ser **'*'** (asterisco) ou **'$'** (cifrão).

### Saída
A saída consiste numa frase que diz se o pedido foi realizado ou não, sendo
“**Pedido realizado**” ou “**Pedido negado**”. Lembre-se que só poderá o pedido ser
realizado se as sete esferas tiverem sido coletadas. Se o pedido foi realizado,
imprima a sequência de esferas da entrada trocando os asteriscos pelos números das
esferas em ordem crescente, como no exemplo abaixo.

| Entrada | Saída |
| --- | --- |
| 10 <br> $ $ $ * * $ * $ $ $ | Pedido negado |
| 10 <br> * * $ * $ * * $ * * | Pedido realizado <br> 1 2 $ 3 $ 4 5 $ 6 7 |


---


## D - Calculadora de operações vetoriais

As avaliações da disciplina de Geometria Analítica estão próximas! E o
conteúdo apresentado até o momento trata sobre operações básicas de vetores
N-dimensionais: soma de dois vetores, produto escalar e multiplicação de vetor
por escalar.

Você pensou que seria uma boa ideia testar seu conhecimento
implementando uma calculadora que realiza essas operações.

### Entrada
A entrada é composta por dois valores inteiros representando, respectivamente, a
operação da calculadora **O** (de acordo com a tabela abaixo, 1, 2 ou 3) e, a
dimensão **D** (1 <= D <= 100) dos vetores envolvidos na operação. Na próxima linha
serão dados os *D* números inteiros **Xi** (-103 <= Xi <= 103) que representam os
componentes do primeiro vetor.  
Na próxima linha serão dados os *D* números inteiros *Xi* que representam os
componentes do segundo vetor. No caso da operação ser multiplicação de vetor por
escalar, só teremos a passagem de um vetor com seus *D* componentes, seguido de um
número inteiro **N** (1 <= N <= 1000), que representa o escalar.

| Nome da operação | Código da operação | Entradas compatíveis |
| :--- | :---: | :--- |
| Soma de dois vetores | 1 | Dois vetores em Rᶰ |
| Produto escalar | 2 | Dois vetores em Rᶰ |
| Multiplicação de vetor por escalar | 3 | Um vetor em Rᶰ e um número real |


### Saída
A saída é o resultado da operação selecionada sobre as entradas. Na tabela abaixo
são exemplificadas as entradas e saídas para cada uma das três operações da
calculadora. Os componentes dos vetores resultantes, caso exista mais de um, devem
ser separados por espaço.

| Entrada | Saída |
| --- | --- |
| 1 3 <br> 1 2 3 <br> 4 5 6 | 5 7 9 |
| 2 3 <br> 1 2 3 <br> 4 5 6 | 32 |
| 3 3 <br> 1 2 3 <br> 2 | 2 4 6 |


---


## E - Abrindo o cofre

Antônio esqueceu sua senha do cofre e precisa de ajuda para abri-lo. Ele escreveu
em seu diário as instruções de como descobrir sua senha. Para decifrar esta senha,
você tem 3 linhas de dados: A primeira contém um inteiro **N**, a segunda contendo
*N* números inteiros e, por último, outra linha contendo também *N* números inteiros.

Seja **Aᵢ** o i-ésimo número da sequência dos *N* números da segunda linha de dados
**A**, tal que **0 <= i <= N-1**. Seja **Bⱼ** o j-ésimo número da sequência dos *N*
números da terceira linha de dados **B**, tal que **0 <= j <= N-1**. Ao percorrer a
linha de dados *A*, você deverá executar as seguintes operações:

1. Caso o resto da divisão de **i** por 4 seja 0, você deve **multiplicar Aᵢ por Bᵢ**;
2. Caso o resto da divisão de **i** por 4 seja 1, você deve **subtrair de Aᵢ o número Bᵢ**;
3. Caso o resto da divisão de **i** por 4 seja 2, você deve **dividir Aᵢ por Bᵢ** (resultado inteiro);
4. Caso o resto da divisão de **i** por 4 seja 3, você deve **elevar Aᵢ à Bi-ésima potência**;
5. Caso as operações resultem em **números maiores que dez**, você deve dividí-los por dez até
que se tenha um **número de um dígito**. Nesse caso, pegando-se sempre a parte inteira da divisão;
6. E, caso as operações resultem em números menores que zero, transforme-os em positivos.

Por fim, queremos **apenas os 6 últimos dígitos** da linha de dados *A* resultante das
operações realizadas. Caso *A* tenha menos de 6 dígitos, imprima 0’s (zero) até que a
senha tenha 6 dígitos (imprima 0’s ao final).

### Entrada
A entrada consiste de um número inteiro **N** (1 <= N <= 100), seguido de 2 linhas,
contendo respectivamente, *N* números inteiros em cada. Estes números estão entre 1
e 10, inclusos.

### Saída
A saída é um **inteiro de 6 dígitos** contendo a senha para o cofre.

| Entrada | Saída |
| --- | --- |
| 3 <br> 4 9 7 <br> 2 3 1 | 867000 |
| 4 <br> 10 8 6 3 <br> 8 1 7 3 | 870200 |
| 8 <br> 9 1 2 3 4 2 1 2 <br> 5 6 2 3 4 5 1 2 | 121314 |

Exemplo 1: 4 * 2 = **8**; 9 – 3 = **6**; 7 / 1 = **7** => Senha = 867000  
Exemplo 3: 9 * 5 = 45 / 10 = **4**; 1 - 6 = -5 = **5**; 2 / 2 = **1**; 3^3
= 27 / 10 = **2**; 4 * 4 = 16/10 = **1**; 2 - 5 = -3 = **3**; 1 / 1 = **1**;
2^2 = **4** => Senha = 121314
