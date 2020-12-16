#include <iostream>
using namespace std;

int main() {
    int  difference, imprecision, energy;

    cin >> difference >> imprecision;
    energy = (difference * imprecision) / (difference + imprecision + 1);

    cout << energy << endl;

    return 0;
}