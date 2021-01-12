#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    getline(cin, name);

    string states[6] = {"Mato Grosso", "Mato Grosso do Sul", "Goiás",
                        "Paraná", "Santa Catarina", "Rio Grande do Sul"};

    string guesses[6] = {};
    for (int i = 0; i < 6; i++)
        getline(cin, guesses[i]);

    // Retirar estados repetidos digitados pelo aluno
    for (int i = 0; i < 6; i++)
        for (int j = i + 1; j < 6; j++)  // Loop otimizado
            if (guesses[i] == guesses[j])
                guesses[i] = "ANULADO";


    // Calcular o número de acertos do aluno
    int score = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
            if (guesses[i] == states[j])
            {
                score++;
                break;
            }
    }

    cout << name << " sua pontuação é de " << score << " pontos.";


    return 0;
}