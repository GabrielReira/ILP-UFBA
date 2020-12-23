#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double spectators;
    cin >> spectators;

    cout << fixed << setprecision(2) << spectators / 1000;

    return 0;
}
