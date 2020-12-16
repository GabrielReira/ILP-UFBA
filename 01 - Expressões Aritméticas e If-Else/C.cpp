#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int  value, amount;
    float bonus;
    cout << fixed << setprecision(1);

    cin >> value >> bonus;
    amount = value * bonus;

    cout << amount << endl;

    return 0;
}