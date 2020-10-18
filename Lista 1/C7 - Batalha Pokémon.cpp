#include <iostream>
using namespace std;

int main()
{
    int pokemons;

    cin >> pokemons;

    while (pokemons > 0)
    {
        int attack, hit_points;
        cin >> attack >> hit_points;

        if (hit_points % attack == 0)
            cout << hit_points / attack << endl;
        else
            cout << hit_points / attack + 1 << endl;

        pokemons--;
    }

    return 0;
}