#include <iostream>
using namespace std;

int main()
{
    int operation, dimension;
    cin >> operation >> dimension;

    if (operation == 1)
    {
        int vector1[dimension], vector2[dimension];

        for (int i = 0; i < dimension; i++)
            cin >> vector1[i];
        for (int i = 0; i < dimension; i++)
            cin >> vector2[i];

        // Fazendo a soma dos dois vetores
        for (int i = 0; i < dimension; i++)
            vector1[i] += vector2[i];
        
        // Exibindo o vetor resultante
        for (int i = 0; i < dimension; i++)
            cout << vector1[i] << " ";
    }
    else if (operation == 2)
    {
        int vector1[dimension], vector2[dimension];

        for (int i = 0; i < dimension; i++)
            cin >> vector1[i];
        for (int i = 0; i < dimension; i++)
            cin >> vector2[i];

        // Fazendo o produto escalar dos vetores
        int scalar_product = 0;
        for (int i = 0; i < dimension; i++)
            scalar_product += vector1[i] * vector2[i];

        cout << scalar_product;
    }
    else
    {
        int vector[dimension], scalar;

        for (int i = 0; i < dimension; i++)
            cin >> vector[i];
        cin >> scalar;

        // Multiplicando o vetor pela escalar
        for (int i = 0; i < dimension; i++)
            vector[i] *= scalar;

        // Exibindo o vetor resultante
        for (int i = 0; i < dimension; i++)
            cout << vector[i] << " ";
    }


    return 0;
}