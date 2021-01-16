#include <iostream>
using namespace std;

int main()
{
    size_t n, m;
    cin >> n >> m;
    size_t bugs[n][m];

    // Ler onde tem os bugs
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> bugs[i][j];

    // Tentativas de acertar os bugs
    size_t tries, row, column;
    cin >> tries;

    while (tries--)
    {
        cin >> row >> column;
        // Verificar se tem bug na posição
        if (bugs[row - 1][column - 1])
            bugs[row-1][column-1]--;  // Tirar 1 ponto de vida
    }

    // Verificar se eliminou todos os bugs
    bool there_is_bug = false;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (bugs[i][j] > 0)
                there_is_bug = true;


    if (there_is_bug)
        cout << "I'LL BE BACK" << endl;
    else
        cout << "HASTA LA VISTA BABY" << endl;


    return 0;
}