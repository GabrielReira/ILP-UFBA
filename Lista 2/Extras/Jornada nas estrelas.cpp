#include <iostream>
using namespace std;

int main()
{
    int star;
    cin >> star;

    int sheeps[star];
    bool star_attacked[star] = {};

    // Guarda o número de carneiros em cada estrela
    for (int i = 0; i < star; i++) 
        cin >> sheeps[i];

    // Percorre as estrelas roubando carneiros
    int star_index = 0;  // Começa da estrela de índice 0
    while (star_index >= 0 && star_index < star)
    {
        star_attacked[star_index] = true;
        int sheeps_number = sheeps[star_index];

        if (sheeps_number > 0)
            sheeps[star_index]--;
        // Se o número de carneiros for par ele volta para a estrela anterior
        if (sheeps_number % 2 == 0)
            star_index--;
        else  // Se for ímpar ele avança para a próxima estrela
            star_index++;
    }

    // Ver o total de estrelas atacadas e carneiros não roubados
    int total_stars_attacked = 0;
    long long non_stolen_sheep = 0;
    while (star--)
    {
        if (star_attacked[star])
            total_stars_attacked++;
        non_stolen_sheep += sheeps[star];
    }

    cout << total_stars_attacked << " " << non_stolen_sheep << endl;


    return 0;
}