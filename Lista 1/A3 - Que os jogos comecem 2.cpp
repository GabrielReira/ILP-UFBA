#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int q1, q2;

    cin >> x >> y;

    q1 = x + (54 * (43 * 2) + (y + 43));
    q2 = y * (24 * (12 * 3) - (x + 43));

    cout << "Resultado da primeira questão é: " << q1 << endl;
    cout << "Resultado da segunda questão é: " << q2 << endl;
    cout << "Resultado final é: " << q1 + q2 << endl;

    return 0;
}