#include <iostream>
using namespace std;

int main()
{
    char creator;
    int long long power;

    cin >> power >> creator;

    if (creator == 'M' || power > 7000)
    {
        cout << "Nao, o desejo nao pode ser realizado :(" << endl;
    } else
    {
        cout << "Sim, o desejo pode ser realizado!" << endl;
    }

    return 0;
}