#include <iostream>
using namespace std;

int main()
{
    int days;
    long long total = 0;

    cin >> days;

    while (days > 0)
    {
        int pokemons;

        cin >> pokemons;
        total += pokemons;
        
        days--;
    }
    cout << total << endl;

    return 0;
}