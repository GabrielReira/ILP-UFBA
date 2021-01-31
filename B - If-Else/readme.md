# Exercícios sobre if-else


## A - Guessing Game

O Guessing Game é um jogo onde o jogador tenta adivinhar um número secreto
que é gerado pelo programa. Você foi contratado para desenvolver o Guessing Game.
O programa deve:

1. Receber o número secreto gerado pelo programa;
2. Receber o número escolhido pelo jogador;
3. Comparar os números (secreto e do jogador); e
4. Exibir uma mensagem informando se o jogador acertou o número ou não.

### Entrada
A entrada é composta por dois números inteiros **X** e **Y** (0 <= X, Y <= 100),
que representam, respectivamente, o **número secreto** e o **número do jogador**.

### Saída
O programa deve comparar os números e informar se o jogador acertou ou errou o
número secreto, imprimindo a frase “**Você errou!**” ou “**Você acertou!**”,
sem aspas.

| Entrada | Saída |
| --- | --- |
| 99 10 | Você errou! |
| 10 10 | Você acertou! |


---


## B - Aniversário

Olá! Queremos dar as boas-vindas aos nossos mais novos colegas de computação. Para
isso, queremos saber um pouquinho mais sobre você. Na verdade, queremos saber o mês
de seu aniversário, para que quando essa pandemia passar, possamos fazer a maior
festa que o DCC já viu.

Para isso, leia um valor inteiro entre 1 e 12, inclusive, correspondente ao mês do seu
aniversário. A seguir, você deverá mostrar o nome do mês do ano em que comemoraremos o
seu aniversário e a nossa festa.

### Entrada
A entrada contém um único valor inteiro, correspondente ao mês do seu aniversário.

### Saída
Imprima o nome do mês correspondente ao número fornecido na entrada, com a primeira
letra maiúscula, conforme exemplos abaixo.

| Entrada | Saída |
| --- | --- |
| 9 | Setembro |
| 4 | Abril |


---


## C - Pu-Dean!

Sam e Dean acabaram de voltar de sua aventura com o Scooby-Doo e decidiram fazer
uma festa de comemoração. Sam está querendo fazer uma surpresa para o Dean e sabendo
que ele é viciado em Pudim resolveu que seria um monte de pudins, mas não qualquer
pudim e sim o especial Pu-Dean!

Sam sabe que para se fazer **1 Pu-Dean** perfeito é preciso **1259 segundos** de
dedicação e dos seguintes ingredientes:

- 4 caixas de leite condensado;
- 8 ovos;
- 2 litros de leite;
- 1 xícara de açúcar (calda).

Sabendo que Sam tem **C** caixas de leite condensado, **O** ovos, **L** litros de leite,
**X** xícaras de açúcar, e que ele fará o máximo de Pu-Deans que puder com os ingredientes
que tem, ajude-o a descobrir qual o total de tempo que ele precisará dedicar na cozinha.

### Entrada
A entrada é composta por **4** números inteiros **C, O, L, X** (0 <= C, O, L, X <=
1000000000), representando caixas de leite condensado, ovos, litros de leite e xícaras de
açúcar, respectivamente.

### Saída
A saída deve conter **3** informações em números inteiros **H, M e S**, representando
respectivamente, **horas**, **minutos** e **segundos** gastos por Sam. A saída deve estar
no seguinte formato: ***H* h *M* m *S* s**.

| Entrada | Saída |
| --- | --- |
| 4 8 2 1 | 0 h 20 m 59 s |
| 17 24 13 14 | 1 h 2 m 57 s |


---


## D - Cai pro x1

Lucas está jogando x1 contra seu amigo Pedro no counter strike, porém ele está
com dificuldade em saber quem obteve a maior pontuação geral de abates.
Considerando que eles jogaram 3 partidas, sua tarefa é elaborar um programa que
dada a pontuação de Pedro e Lucas em cada uma das 3 partidas diga quem obteve o
maior número de abates total.

### Entrada
A entrada consiste em **3 linhas contendo 2 inteiros *L* e *P*** (1 <= ‘L’, ‘P’ <= 100)
em cada uma, sendo que **L** indica a pontuação de Lucas e **P** a pontuação de Pedro.

### Saída
A saída consiste em uma linha contendo a palavra “**Empate**”, caso os dois empatem,
o nome “**Pedro**” caso Pedro tenha obtido uma pontuação de abates total maior que a
de Lucas, ou o nome “**Lucas**”, caso Lucas tenha abates total maior que Pedro.


| Entrada | Saída |
| --- | --- |
| 20 32 <br> 16 50 <br> 100 0 | Lucas |
| 20 32 <br> 14 54 <br> 10 0 | Pedro |
| 16 0 <br> 0 8 <br> 4 12| Empate |


---


## E - Programa de cálculo de imposto

O Programa de Cálculo de Impostos é um sistema que permite ao trabalhador colocar
o seu salário e saber quanto de imposto será descontado. Você foi contratado para
desenvolver esta solução. O programa deve:

1. Permitir que o trabalhador insira o seu salário em reais(R$);
2. Calcular o imposto para cada faixa de salário baseado na seguinte regra:
    - O trabalhador que tiver salário **até R$ 3.000** pagará o imposto de **15%**;
    - O trabalhador que tiver salário **de R$ 3.001 a R$ 6.000** pagará imposto de
    **20%** da parte do salário nesta faixa e **15%** da parte do salário na faixa
    anterior;
    - O trabalhador que tiver salário **acima de R$ 6.000** pagará o imposto de
    **30%** da parte do salário nesta faixa, bem como **15%** e **20%** das partes
    do salário em cada uma das outras faixas, respectivamente.
3. Exibir uma mensagem informando o imposto que será pago e o salário final do
trabalhador, já com o desconto do imposto aplicado.

### Entrada
A entrada é composta apenas por um número inteiro **S** (500 <= S <= 10000) que se
refere ao salário do trabalhador em reais.

### Saída
O programa deve imprimir a frase “**Imposto: R$** ” seguida do valor do imposto a ser
pago. Na linha seguinte deverá ser impressa a frase “**Salário líquido: R$** ” seguida
do valor do salário final já com o imposto descontado. Lembre-se que nem sempre será
um valor inteiro, e não sendo, use duas casas decimais de precisão.

| Entrada | Saída |
| --- | --- |
| 1000 | Imposto: R$ 150 <br> Salário líquido: R$ 850 |
| 4000 | Imposto: R$ 650 <br> Salário líquido: R$ 3350 |
| 2950 | Imposto: R$ 442.50 <br> Salário líquido: R$ 2507.50 |


---


## F - Calculadora do IMC

O índice de massa corporal (**IMC**) é uma medida internacional usada para calcular
se uma pessoa está no peso ideal. O IMC é definido pela seguinte equação:
**IMC = massa / (altura * altura)**. A massa é dada em quilogramas e a altura, em metros.

Após aprender que o IMC é um importante indicador de como anda sua condição
física, e preocupado com sua saúde e de seus conhecidos, você teve a ideia de criar uma
calculadora para facilitar que todos possam acompanhar suas situações.

### Entrada
A entrada é composta por **dois números reais**: a “**massa**” (30 ≤ “massa” ≤ 150) e
a “**altura**” (1,30 ≤ “altura” ≤ 2,20).

### Saída
A saída é a situação, determinada a partir do IMC calculado com a massa e altura
informadas sempre com duas casas decimais de precisão, de acordo com a tabela
abaixo:

| Resultado | Situação |
| --- | --- |
| Abaixo de 17 | muito-abaixo-do-peso |
| Entre 17 e 18,49 | abaixo-do-peso |
| Entre 18,50 e 24,99 | peso-normal |
| Entre 25 e 29,99 | acima-do-peso |
| Entre 30 e 34,99 | obesidade-1 |
| Entre 35 e 39,99 | obesidade-2 |
| Acima de 40 | obesidade-3 |

### Exemplos
| Entrada | Saída |
| --- | --- |
| 50.00 1.70 | abaixo-do-peso |
| 55.00 1.50 | peso-normal |
| 90.56 1.75 | acima-do-peso |
| 110.00 1.85 | obesidade-1 |
