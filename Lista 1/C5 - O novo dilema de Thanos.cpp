#include <iostream>
using namespace std;

int main()
{
    int planets;

    cin >> planets;

    for (int i = 1; i <= planets; i++)
    {
        long long n;

        cin >> n;

        if (n % 2 == 0)
            cout << "Thanos nao poupara o Planeta " << i << "." << endl;
        else
            cout << "Thanos poupara o Planeta " << i << "." << endl;
    }

    return 0;
}