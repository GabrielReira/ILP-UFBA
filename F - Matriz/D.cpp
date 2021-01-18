#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // Fazer um mapa com borda para evitar
    // acessar posições inválidas do vetor
    char map[12][12];
    memset(map, 't', sizeof map);  // Inicializa tudo como terra

    for (int i = 1; i <= 10; i++)
        for (int j = 1; j <= 10; j++)
            cin >> map[i][j];

    // Verficar onde é praia
    for (int i = 1; i <= 10; i++)
        for (int j = 1; j <= 10; j++)
            if (map[i][j] == 't' && (map[i+1][j] == '*' || map[i-1][j] == '*' ||
                map[i][j+1] == '*' || map[i][j-1] == '*'))
                map[i][j] = 'p';

    // Imprimir o mapa com as praias
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
            cout << map[i][j] << " ";
        cout << endl;
    }


    return 0;
}