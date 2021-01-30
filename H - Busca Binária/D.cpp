#include <iostream>
#include <utility>
using namespace std;

int main ()
{
    size_t width, length;
    cin >> width >> length;
    long long n = width * length;

    size_t mapa[n];

    // Usuário entra com a altura de cada parte da cidade
    for (size_t i = 0; i < n; i++)
    {
        cin >> mapa[i];
        // Os valores já são inseridos em ordem crescente
        if (i > 0) {
            for (int j = i; (j > 0) && (mapa[j] < mapa[j-1]); j--)
                swap(mapa[j], mapa[j - 1]);
        }
    }

    size_t q;
    cin >> q;

    while (q--)
    {
        size_t hours;
        cin >> hours;
        long long flooded = 0;  // Partes inundadas da cidade

        for (size_t i = 0; i < n; i++)
        {
            // Como o vetor está ordenado, o loop pode finalizar ao
            // encontrar o primeiro valor que seja maior que "hours"
            if (mapa[i] <= hours)
                flooded++;
            else
                break;
        }

        cout << flooded << endl;
    }


    return 0;
}