#include <iostream>
using namespace std;

int main()
{
    size_t n;
    cin >> n;
    size_t pumpkin[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> pumpkin[i][j];

    size_t x, y;
    cin >> x >> y;

    // Harry só começará se ele chegar no ponto de intersecção
    // primeiro que Ron, ou seja, se X for maior que Y
    size_t harry_pumpkins = 0, ron_pumpkins = 0;
    if (x > y)
    {
        // Primeiro Harry coleta
        for (int j = 0; j < n; j++) {  // Apenas a coluna varia
            harry_pumpkins += pumpkin[x][j];
            pumpkin[x][j] = 0;
        }
        // Depois Ron coleta
        for (int i = 0; i < n; i++) {  // Apenas a linha varia
            ron_pumpkins += pumpkin[i][y];
            pumpkin[i][y] = 0;
        }
    }
    else
    {
        // Primeiro Ron coleta
        for (int i = 0; i < n; i++) {
            ron_pumpkins += pumpkin[i][y];
            pumpkin[i][y] = 0;
        }
        // Depois Harry coleta
        for (int j = 0; j < n; j++) {
            harry_pumpkins += pumpkin[x][j];
            pumpkin[x][j] = 0;
        }
    }

    cout << "Harry " << harry_pumpkins << endl
         << "Ron " << ron_pumpkins << endl;


    return 0;
}