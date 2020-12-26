#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int steps[n+1] = {};

    for (int i = 1; i <= n; i++)
    {
        cin >> steps[i];
        steps[i] += steps[i - 1];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int interval_1, interval_2;
        cin >> interval_1 >> interval_2;

        cout << steps[interval_2] - steps[interval_1 - 1] << endl;
    }


    return 0;
}