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
