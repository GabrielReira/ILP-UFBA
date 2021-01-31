#include <iostream>
#include <utility>
using namespace std;

int main ()
{
    size_t n;
    cin >> n;
    string book[n];
    size_t status[n];  // Indica se o livro está disponível ou emprestado

    for (size_t i = 0; i < n; i++)
    {
        cin >> book[i] >> status[i];

        // Inserir o nome dos livros já em ordem alfabética
        if (i > 0) {
            for (int j = i; (j > 0) && (book[j] < book[j-1]); j--)
                swap(book[j], book[j - 1]);
        }
    }

    // Livros a serem buscados
    size_t m;
    cin >> m;
    string to_search[m];

    for (size_t i = 0; i < m; i++)
    {
        cin >> to_search[i];

        int left = 0, right = n - 1, mid;
        // Começa o algorítimo da busca binária
        while (left <= right)
        {
            mid = (left + right) / 2;

            if (to_search[i] == book[mid])  // Se o livro for encontrado
            {
                // Verficar se está disponível ou emprestado
                if (status[mid] == 1)
                    cout << "Disponivel" << endl;
                else
                    cout << "Emprestado" << endl;
                break;
            }
            (to_search[i] < book[mid]) ? (right = mid-1) : (left = mid+1);
        }
        // Caso o livro não exista no Arquivo
        if (book[mid] != to_search[i])
            cout << "Nao encontrado" << endl;
    }


    return 0;
}