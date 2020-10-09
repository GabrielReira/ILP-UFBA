# A - Expressões Aritméticas


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


---


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


---


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


---


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


---


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
