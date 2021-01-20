#include <iostream>
#include <utility>
using namespace std;

int main ()
{
    size_t n;
    cin >> n;
    string books[n];

    for (size_t i = 0; i < n; i++)
        cin >> books[i];

    // Ordenar o vetor em ordem crescente
    for (size_t i = 1; i < n; i++)
        for (int j = i; (j > 0) && (books[j] < books[j-1]); j--)
            swap(books[j], books[j - 1]);

    // Exibir o vetor ordenado
    for (size_t i = 0; i < n; i++)
        cout << books[i] << endl;


    return 0;
}