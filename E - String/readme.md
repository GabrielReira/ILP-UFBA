# Exercícios sobre string


## A - Estados Brasileiros

A República Federativa do Brasil é composta por 26 unidades Federativas e 1
Distrito Federal. Uma professora de geografia, afim de ajudar seus pequenos alunos a
memorizarem esses estados, pensou que um programa de computador poderia ajudá-los.

Assim, cada aluno dirá seu nome e na sequência tentará acertar o nome dos 6 Estados
das Regiões Sul e Centro-Oeste. O programa deverá calcular a quantidade de acertos do
aluno.

### Entrada
A entrada terá na primeira linha uma string **A**, representando o nome do aluno.
Nas 6 (seis) linhas seguintes, serão dados os nomes dos Estados informados pelo aluno,
um nome de Estado por linha.

### Saída
No final, o programa deve exibir a mensagem “**NOME_ALUNO sua pontuação é de X pontos.**”.
Sendo que *NOME_ALUNO* representa o nome do aluno e *X* representa o número de Estados
que o aluno acertou. Nomes dos Estados informados sempre estarão com iniciais maiúsculas.

| Entrada | Saída |
| --- | --- |
| José de Maria de Jesus <br> Rio Grande do Sul <br> Zaranhão <br> Paralá <br> Santa Catarina <br> Mato Fino <br> Rio Grande do Sul | José de Maria de Jesus sua pontuação é de 2 pontos. |
| Bianca da Silva Sauro <br> Piauó <br> Mato Grosso do Norte <br> Santa Caralina <br> Distrito Federal <br> Rio Grande do Norte <br> Bahia | Bianca da Silva Sauro sua pontuação é de 0 pontos. |


---


## B - Organização de autores

Visconde de Sabugosa é um conhecido personagem do clássico Sítio do pica-pau
amarelo. Por ser um assíduo leitor, muitas vezes ele precisa se lembrar dos nomes de
muitos autores das clássicas obras literárias.

Desta forma, ajude o Visconde criando um programa que abrevie os nomes destes
autores, fazendo com que ele se lembre mais facilmente.

### Entrada
A primeira linha consiste em um inteiro **N** (1 < N <= 100), representando o
número de nomes de autores que o programa irá receber. Cada uma das próximas *N*
linhas contém o nome completo (**caracteres minúsculos**) dos autores. **Os**
**nomes não terão preposições e nem caracteres especiais** (maria das dores =
maria dores; joão de jesus = joao jesus).

### Saída
Para cada nome de autor recebido, o programa deve abreviar todos os nomes, com
exceção do último. Cada nome abreviado deverá ser impresso com a primeira letra em
maiúsculo, seguido de ponto e um espaço, e por fim, após as abreviações, imprima o
último sobrenome sem abreviação.

| Entrada | Saída |
| --- | --- |
| 3 <br> maria andrade ferreira <br> felipe barros silva matos <br> joao barbosa | M. A. Ferreira <br> F. B. S. Matos <br> J. Barbosa |
| 4 <br> Gabriel <br> Layne Thomas Staley <br> Anthony Frank Iommi <br> Matthew Helders | Gabriel <br> L. T. Staley <br> A. F. Iommi <br> M. Helders |


---


## C - Super-Fibonacci (Super-Soma)

Os números de Fibonacci são os números que compõem a seguinte sequência:
**0 ,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, ...**

A sequência recebeu o nome do matemático italiano Leonardo de Pisa,
mais conhecido por Fibonacci, que descreveu, no ano de 1202, o crescimento
de uma população de coelhos, a partir desta. Com o primeiro termo sendo 0 e o segundo
sendo 1, os demais são obtidos a partir da soma dos dois termos anteriores. O problema
dessa sequência, no entanto, é que ela cresce muito rapidamente, onde, por exemplo, o
**1000º termo possui 209 dígitos**! Sabendo disso, você foi encarregado de elaborar um
algoritmo que retorna a soma de dois termos de Fibonacci.

### Entrada
Na primeira linha será dada uma string **S**, representando o *N-ésimo* termo da
sequência de fibonacci. Na segunda linha será dada uma string **M**, representando o
*(N+1)-ésimo* termo de Fibonacci. As strings podem ter de 1 a 50 dígitos.

### Saída
A saída consiste em imprimir o termo de Fibonacci da posição *N+2*, ou seja, a
**soma dos dois termos dados (N e N+1)**.

| Entrada | Saída |
| --- | --- |
| 1 <br> 1 | 2 |
| 89 <br> 144 | 233 |
| 135301852344706746049 <br> 218922995834555169026 | 354224848179261915075 |
| 2706074082469569338358691163510069157 <br> 4378519841510949178490918731459856482 | 7084593923980518516849609894969925639 |

Os tipos de dados inteiros padrões das linguagens C/C++ não possuem
tamanho suficiente para armazenar os números de Fibonacci, **sendo**
**necessário criar seu próprio método de soma utilizando strings para**
**completar o problema**.
