#include <iostream>
using namespace std;

int main()
{
    int species, pokeballs;

    cin >> species >> pokeballs;

    if (pokeballs >= species)
    {
        cout << "Ok!" << endl;
        if (pokeballs > species) {
            cout << pokeballs - species << endl;
        }
    } else {
        cout << species - pokeballs << endl;
    }

    return 0;
}