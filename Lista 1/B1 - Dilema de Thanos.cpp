#include <iostream>
using namespace std;

int main()
{
    long long n;

    cin >> n;

    cout << n << endl;

    if (n % 2 == 0)
    {
        cout << "Thanos nao poupara o Universo." << endl;
    } else {
        cout << "Thanos poupara o Universo." << endl;
    }

    return 0;
}