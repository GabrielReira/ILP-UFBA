#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int passwords[n];

    for (int i = 0; i < n; i++)
        cin >> passwords[i];

    for (int i = 0; i < n; i++)
    {
        if (passwords[i] % 2 != 0)
            cout << passwords [i] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (passwords[i] % 2 == 0)
            cout << passwords [i] << endl;
    }


    return 0;
}