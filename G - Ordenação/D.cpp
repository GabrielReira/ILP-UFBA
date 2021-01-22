#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main ()
{
    size_t n, p;
    cin >> n >> p;

    // Pegar o rating inicial dos usuários
    int inicial_rating[n];
    for (size_t i = 0; i < n; i++)
        cin >> inicial_rating[i];

    // Pontuação de cada usuário nos 'p' problemas
    int score[n];
    for (size_t i = 0; i < n; i++)
    {
        score[i] = 0;
        for (size_t j = 0; j < p; j++)
        {
            size_t p_score;
            cin >> p_score;
            score[i] += p_score;
        }
    }

    // Ordenando o vetor de pontuação em ordem decrescente
    for (size_t i = 1; i < n; i++)
        for (int j = i; (j > 0) && (score[j] > score[j-1]); j--)
        {
            swap(score[j], score[j - 1]);
            swap(inicial_rating[j], inicial_rating[j - 1]);
        }

    // Descobrindo o valor da mediana
    int median;
    if (n % 2 == 0)
        median = (score[n/2] + score[n/2 + 1]) / 2;
    else
        median = score[n / 2];

    // Calcular o rating final
    int final_rating[n];
    for (size_t i = 0; i < n; i++)
        final_rating[i] = ((score[i] - median) / 100) + inicial_rating[i];

    // Atribuir as cores de acordo com o rating final
    string user_color[n];
    for (size_t i = 0; i < n; i++)
    {
        if (final_rating[i] <= 1199)
            user_color[i] = "Gray";
        else if (final_rating[i] <= 1399)
            user_color[i] = "Green";
        else if (final_rating[i] <= 1599)
            user_color[i] = "Cyan";
        else if (final_rating[i] <= 1899)
            user_color[i] = "Blue";
        else if (final_rating[i] <= 2099)
            user_color[i] = "Purple";
        else if (final_rating[i] <= 2499)
            user_color[i] = "Yellow";
        else if (final_rating[i] <= 2999)
            user_color[i] = "Red";
        else
            user_color[i] = "Red Nutella";
    }

    // Saída do programa: cores dos usuários
    for (size_t i = 0; i < n; i++)
        cout << user_color[i] << endl;


    return 0;
}