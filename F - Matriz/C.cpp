#include <iostream>
using namespace std;

int main()
{
    size_t toy, day;
    cin >> toy >> day;
    toy++; day++;  // Algumas posições da matriz não serão usadas
    long long exchange[toy][day] = {};

    // Cada posição do vetor armazenará a soma de todos os
    // valores anteriores para facilitar a consulta no final
    for (int i = 1; i < toy; i++)
        for (int j = 1; j < day; j++) {
            cin >> exchange[i][j];
            exchange[i][j] += exchange[i][j - 1];
        }

    size_t q;  // Número de consultas
    cin >> q;

    while (q--)
    {
        size_t toy_index, interval_1, interval_2;
        cin >> toy_index >> interval_1 >> interval_2;

        cout << exchange[toy_index][interval_2] -
                exchange[toy_index][interval_1 - 1] << endl;
    }


    return 0;
}