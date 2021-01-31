#include <iostream>
using namespace std;

int main ()
{
    // Identificadores dos caminhantes brancos
    size_t n;
    cin >> n;
    size_t identifier[n];

    for (size_t i = 0; i < n; i++)
        cin >> identifier[i];

    // Identificadores a serem buscados no vetor
    size_t m;
    cin >> m;
    size_t to_search[m];

    for (size_t i = 0; i < m; i++)
        cin >> to_search[i];

    // Variável que indica a existência do rei da noite
    bool night_king = false;

    // Fazer a busca pelo vetor
    for (size_t i = 0; i < m; i++)
    {
        int left = 0, right = n - 1, mid;
        // Começa o algorítimo da busca binária
        while (left <= right)
        {
            mid = (left + right) / 2;

            if (to_search[i] == identifier[mid]) {
                night_king = true;
                break;
            }
            (to_search[i] < identifier[mid]) ? (right = mid-1) : (left = mid+1);
        }
    }

    if (night_king)
        cout << "Preparem o vidro de dragao!!!" << endl;
    else
        cout << "E assim termina nossa vigilia" << endl;


    return 0;
}