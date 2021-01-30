#include <iostream>
using namespace std;

int main ()
{
    size_t n;
    cin >> n;

    string planet[n];

    for (size_t i = 0; i < n; i++)
        cin >> planet[i];

    size_t m;
    cin >> m;
    string journey[m];

    for (size_t i = 0; i < m; i++)
        cin >> journey[i];
    
    // Matriz que representa a distância entre os planetas
    long long distance[n][n];
    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < n; j++)
            cin >> distance[i][j];

    // Variável para guardar a posição atual
    size_t p = 0;

    // Calcular a distância para cada jornada
    long long total_distance = 0;

    for (size_t i = 0; i < m; i++)
    {
        size_t q;  // Guarda a posição para onde vai

        int left = 0, right = n - 1, mid;
        // Começa o algorítimo da busca binária
        while (left <= right)
        {
            mid = (left + right) / 2;

            if (journey[i] == planet[mid]) {
                q = mid;
                total_distance += distance[p][q];
                break;
            }
            (journey[i] < planet[mid]) ? (right = mid-1) : (left = mid+1);
        }
        // Atualizar a posição do planeta onde Yoda está
        p = q;
    }

    cout << total_distance << endl;


    return 0;
}