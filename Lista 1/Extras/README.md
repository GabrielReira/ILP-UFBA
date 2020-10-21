## Sequência de abates

League of Legends é um famoso jogo competitivo, onde há uma interessante interação
quando um jogador realiza uma sequência de abates. Uma sequência de abates é o ato de
abater vários inimigos dentro de um intervalo de no máximo 10 segundos entre os abates.

Assim, se ocorrer um abate no tempo 11s e outro no tempo 21s, então tem-se um
DOUBLEKILL; e se após 8 segundos conseguir outro abate, então tem-se um TRIPLEKILLL; e se,
ainda assim, conseguir outro abate após 10 segundos, tem-se um QUADRAKILL.

Enfim, a sequência só se configura se o abate ocorrer em no máximo 10
segundos após o anterior. Portanto a sequência é: **DOUBLEKILL** (2 abates
consecutivos), **TRIPLEKILL** (3 abates consecutivos), **QUADRAKILL** (4 abates
consecutivos) e **PENTAKILL** (5 abates consecutivos). No entanto, o PENTAKILL
pode acontecer mesmo passando até 30 segundos após QUADRAKILL.

Caso o tempo entre abates supere o intervalo máximo ou chegue a um
PENTAKILL, a sequência de abates é resetada, sendo necessário iniciar a
contagem da sequência novamente. Seu trabalho é emular essa mecânica de
jogo, anunciando, quando ocorrer, qual tipo de sequência de abate ocorreu no
jogo.

#### Entrada
A primeira linha de entrada contém um número inteiro *N* **(0 ≤ N ≤ 100)**,
representando a quantidade de abates realizados pelo jogador. As próximas *N* linhas
contêm, cada uma, um inteiro *Ti* **(1 ≤ Ti ≤10000)**, que indica o instante em segundos
em que ocorreu o i-ésimo abate do jogador. Os segundos serão dados de forma crescente.

#### Saída
A saída consiste em imprimir “DOUBLEKILL”, “TRIPLEKILL”, “QUADRAKILL”,
“PENTAKILL”, quando ocorrer a sequência de abates correspondente.

| Entrada | Saída |
| --- | --- |
| 5 <br> 10 <br> 19 <br> 28 <br> 38 <br> 68 | DOUBLEKILL <br> TRIPLEKILL <br> QUADRAKILL <br> PENTAKILL |
| 4 <br> 20 <br> 29 <br> 40 <br> 44 | DOUBLEKILL <br> DOUBLEKILL |



## Torneio de futebol - Avançado

O torneio de futebol começou disputado e as equipes já fizeram as suas primeiras partidas. Para
auxiliar na classificação de cada equipe, o saldo de gol precisa ser calculado. O saldo de gol é a
diferença de gols marcados e sofridos nas partidas já jogadas. 

#### Entrada
A entrada possui primeiramente um número inteiro *P* (0 <= P <= 100000) que indica a quantidade
de partidas jogadas por uma dada equipe. A seguir, serão fornecidos *P* inteiros que representam o
saldo *Q* (-50 <= Q <= 50) de gols de cada partida.

#### Saída
A saída consiste de 1 inteiro X, representando qual foi o saldo de gols do intervalo de jogos que teve
o maior saldo de gols.

| Entrada | Saída |
| --- | --- |
| 4 <br> 3 <br> -4 <br> 1 <br> 0 | 3 |
| 5 <br> 2 <br> 2 <br> 1 <br> 0 <br> -1 | 5 |

Caso de teste 1: O melhor saldo de gols foi do intervalo [1,1] = 3;  
Caso de teste 2: O melhor saldo de gols foi do intervalo [1,4] = 2 + 2 + 1 + 0 = 5.
