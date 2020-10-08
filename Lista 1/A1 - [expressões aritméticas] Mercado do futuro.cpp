#include <iostream>
using namespace std;

int main()
{
    int customer, products, time;

    cin >> customer >> products;

    time = 2 * customer * products;

    cout << time << endl;

    return 0;
}