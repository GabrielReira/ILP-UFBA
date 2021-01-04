# Exercícios sobre loop (for, while, do/while)


## A - Fortalecimento de clima

As habilidades principais dos Pokémon recebem um acréscimo de pontos de dano
quando o clima está favorável. Cada pokémon está limitado a um valor de acréscimo.

Seu trabalho será desenvolver um programa que, dado o limite de acréscimo de um
pokémon e o valor atual de pontos de dano da sua habilidade principal, informe com
quanto de pontos de dano ele vai ficar.

### Entrada
A primeira linha da entrada contém um valor **N** (1 <= N <= 1000) que representa 
o número de pokémon que serão fortalecidos pelo clima. Já cada uma das próximas *N*
linhas contém o valor **P** (1 <= P <= 1000) de pontos de dano do ataque principal
de um pokémon e o seu valor **M** (0 <= M <= 1000) de acréscimo.

### Saída
A saída é composta de *N* linhas, cada uma representando o valor final de pontos de
dano de cada linha da entrada.

| Entrada | Saída |
| --- | --- |
| 3 <br> 105 20 <br> 122 22 <br> 140 50 | 125 <br> 144 <br> 190 |
| 2 <br> 200 2 <br> 105 0 | 202 <br> 105 |


---


## B - Saturação sanguínea

A capacidade que o sangue tem de transportar oxigênio pelo corpo é chamada de
saturação. Facilmente medida com equipamentos como oxímetro de dedo, a saturação é
uma das funcionalidades do corpo humano ameaçadas pelo novo coronavírus. Segundo a
OMS (Organização Mundial da Saúde) o **nível de saturação ideal está entre 95% e**
**100%**.

**Níveis de saturação abaixo de 90% devem ser considerados emergência clínica**.
Pacientes com baixa saturação são potenciais a apresentarem complicações respiratórias
e devem ser hospitalizados para tratamento/observação. Escreva um programa que receba
uma lista de pacientes. A lista deve conter a **letra inicial do nome e o nível de**
**saturação de cada paciente**. O programa deve informar, logo após a entrada do registro,
se o paciente deve ser **internado** ou deve receber **alta**. Para indicar que a lista
finalizou, ao invés da inicial do nome, será informado o caractere **#**.

### Entrada
A entrada é composta por várias linhas, onde em cada linha tem-se um caractere
referente à inicial do nome do paciente **Pi** (caracteres maiúsculos, apenas), seguido
de um inteiro **S** (1 ≤ S ≤ 100), representando a saturação sanguínea daquele paciente.

### Saída
Para cada paciente a saída deve ser uma mensagem em que devem ser impressos a
inicial do paciente e o procedimento a ser tomado (Alta/Internação) para aquele
paciente.

| Entrada | Saída |
| --- | --- |
| A 92 <br> B 89 <br> C 100 <br> # | A Alta <br> B Internação <br> C Alta |


---


## C - Número primo

Na matemática, um Número Primo é aquele que pode ser dividido somente
por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois
pode ser dividido apenas pelo número 1 e pelo número 7.

### Entrada
A entrada contém um inteiro **N** (1 ≤ N ≤ 2000), que pode ser ou não,
um número primo.

### Saída
Para cada caso de teste de entrada, imprima a mensagem “**N eh primo**”
ou “**N nao eh primo**”, de acordo com a especificação fornecida.

| Entrada | Saída |
| --- | --- |
| 1259 | 1259 eh primo |
| 22 | 22 nao eh primo |


---


## D - Defesa de Ba Sing Se

Água, Terra, Fogo, Ar. Há muito tempo, as quatro nações viviam em harmonia, até que tudo
mudou quando a nação do fogo decidiu atacar. Atualmente, a grande cidade de Ba Sing Se é
a última grande metrópole que resiste à nação do fogo. Porém, com o retorno do avatar, a
nação do fogo decidiu começar uma campanha contra a grande cidade.

Sabendo da campanha da nação do fogo e conhecendo seus poderes de oráculo, o avatar pediu
sua ajuda para saber se a muralha da cidade resistirá aos ataques até a sua chegada, ou
se ela cairá.

### Entrada
A primeira linha contém dois inteiros **D** (1 ≤ D ≤ 100), a quantidade de dias que o
avatar irá levar para chegar, e **E** (100 ≤ E ≤ 10000), a energia inicial da muralha da
cidade. As próximas *D* linhas terão cada uma um inteiro **A** (1 ≤ A ≤ 100) que
representa o dano que a nação do fogo fez à energia da muralha em cada dia *D*. Se a
energia da muralha chegar a zero, a cidade cairá.

### Saída
A saída consiste em uma única linha. Caso a energia da muralha seja maior que
zero no último dia de ataque antes da chegada do Avatar, você deverá imprimir a
mensagem “**Resistiu**”, ou, caso contrário, você deverá imprimir o dia em que a cidade
caiu, ou seja, o **dia em que a energia da muralha chegou a zero**.

| Entrada | Saída |
| --- | --- |
| 4 400 <br> 100 <br> 100 <br> 100 <br> 99 | Resistiu |
| 3 111 <br> 10 <br> 100 <br> 1 | 3 |
| 3 100 <br> 50 <br> 60 <br> 30 | 2 |


---


## E - Idas à feira

Seu Bobô regularmente vai à feira para fazer compras, porém ele ficará em casa no
domingo para assistir o jogo do seu time do coração. Assim, ele pediu para seu filho Vicentino
fazer as compras. Vicentino fará contas em um programa que calcula o valor que precisa levar
para poder comprar tudo que está na lista de compras feita por Seu Bobô, considerando a
quantidade de cada tipo de fruta ou legume e os preços individuais destes itens.

### Entrada
A primeira entrada terá um inteiro **N** (1 <= N <= 50), que indica a quantidade de idas à
feira que Vicentino fez, ou seja, cada ida à feira é um caso de teste. Cada caso de teste começa
com um inteiro **M** (1 <= M <= 100), que indica a quantidade de produtos que estão disponíveis
para venda na feira. Em cada uma das próximas *M* linhas, teremos o preço unitário **P** (double,
0.05 <= P <= 100.00) daquele produto, seguido da quantidade **Q** (inteiro, 0 <= Q <= 100) que
Seu Bobô precisa daquele produto.

### Saída
Para cada caso de teste (ida à feira), **imprima o valor que será gasto** por seu Bobô naquela
ida à feira, no seguinte formato: “**R$ *Valor***”, sendo o *Valor* com duas casas decimais.
Conforme os exemplos abaixo.

| Entrada | Saída |
| --- | --- |
| 2 **// Duas idas à feira** <br> 4 **// Ida 1 à feira, 4 produtos disponíveis** <br> 2.19 2 <br> 3.10 0 <br> 2.80 1 <br> 2.73 3 <br> 5 **// Ida 2 à feira, 5 produtos disponíveis** <br> 6.70 1 <br> 1.12 0 <br> 1.71 2 <br> 2.80 1 <br> 2.81 1 | R$ 15.37 **// Total da ida 1** <br> R$ 15.73 **// Total da ida 2** |

Obs.: Nos exemplos de entrada e saída, o texto em negrito não faz parte da entrada e nem da
saída, é somente explicativo.
