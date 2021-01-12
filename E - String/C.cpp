#include <iostream>
#include <string>
using namespace std;

int main()
{
    string number1, number2;
    cin >> number1 >> number2;

    // Armazenar o tamanho de dígitos de ambos valores
    size_t num1_length = number1.length();
    size_t num2_length = number2.length();

    // Descobrir qual o maior número, pois o tamanho do vetor soma será igual
    // ao tamanho do maior número acrescido de 1
    int sum_length;
    if (num1_length > num2_length)
        sum_length = num1_length + 1;
    else
        sum_length = num2_length + 1;
    char result[sum_length];

    // i refere-se aos índices da string 'number1';
    // j refere-se aos índices da string 'number2'; e
    // k refere-se aos índices do vetor soma
    int i, j, k, aux_sum = 0;

    // O loop ocorrerá enquanto houver índices para serem
    // preenchidos no vetor soma
    for (i=num1_length-1, j=num2_length-1, k=sum_length-1; k >= 0; i--,j--,k--)
    {
        // As variáveis auxiliares somarão as strings número por número,
        // da direita para esquerda, como uma soma normal
        size_t aux1 = i, aux2 = j, sum;

        if (i < 0)     // Se não for um índice válido, a variável auxiliar
            aux1 = 0;  // será zero, não alterando a soma.
        else  // Caso contrário, converte o char para int
            aux1 = number1[i] - '0';

        if (j < 0)  // Mesma coisa só que com o segundo número
            aux2 = 0;
        else
            aux2 = number2[j] - '0';

        // Fazer a soma
        sum = aux1 + aux2 + aux_sum;
        // Armazenando o último dígito da soma no vetor 'result'
        result[k] = sum % 10 + '0';
        // Variável auxiliar armazenará o segundo dígito da soma
        aux_sum = sum / 10;  // 1 se a soma for maior que 9 ou 0 se não for
    }
    
    // O vetor soma foi declarado de tamanho igual ao do maior número
    // acrescido de 1 posição, mas caso não seja necessário essa posição
    // 'extra', então ficará um 0 a esquerda
    if (result[0] == '0')  // Para não imprimir esse zero
        for (int i = 1; i < sum_length; i++)
            cout << result[i];
    else
        for (int i = 0; i < sum_length; i++)
            cout << result[i];


    return 0;
}