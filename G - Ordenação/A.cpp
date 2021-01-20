#include <iostream>
#include <utility>
using namespace std;

int main ()
{
    size_t n;
    cin >> n;
    size_t card[n];

    for (size_t i = 0; i < n; i++)
        cin >> card[i];

    // Ordenar o vetor
    for (size_t i = 1; i < n; i++)
        for (int j = i; (j > 0) && (card[j] < card[j-1]); j--)
            swap(card[j], card[j - 1]);

    // Imprimir o valor do meio do vetor
    cout << card[n/2] << endl;


    return 0;
}