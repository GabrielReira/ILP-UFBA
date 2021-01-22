#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main ()
{
    size_t n;
    char classification, order;
    cin >> n >> classification >> order;

    string name[n];
    size_t level[n];

    for (size_t i = 0; i < n; i++)
        cin >> name[i] >> level[i];
    
    // Ordenar por nome
    if (classification == 'N')
    {
        // Ordenar o vetor em ordem crescente
        if (order == 'C')
        {
            for (size_t i = 1; i < n; i++)
                for (int j = i; (j > 0) && (name[j] < name[j-1]); j--)
                {
                    swap(name[j], name[j - 1]);
                    swap(level[j], level[j - 1]);
                }
        }
        else  // Ordenar o vetor em ordem decrescente
        {
            for (size_t i = 1; i < n; i++)
                for (int j = i; (j > 0) && (name[j] > name[j-1]); j--)
                {
                    swap(name[j], name[j - 1]);
                    swap(level[j], level[j - 1]);
                }
        }
    }
    // Ordenar por nível
    else
    {
        // Ordenar o vetor em ordem crescente
        if (order == 'C')
        {
            for (size_t i = 1; i < n; i++)
                for (int j = i; (j > 0) && (level[j] < level[j-1]); j--)
                {
                    swap(name[j], name[j - 1]);
                    swap(level[j], level[j - 1]);
                }
        }
        else  // Ordenar o vetor em ordem decrescente
        {
            for (size_t i = 1; i < n; i++)
                for (int j = i; (j > 0) && (level[j] > level[j-1]); j--)
                {
                    swap(name[j], name[j - 1]);
                    swap(level[j], level[j - 1]);
                }
        }
    }

    // Exibir o vetor ordenado
    for (size_t i = 0; i < n; i++)
        cout << name[i] << " " << level[i] << endl;


    return 0;
}