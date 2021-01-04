#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int items[n];

    for (int i = n - 1; i >= 0; i--)
        cin >> items[i];

    for (int i = 0; i < n; i++)
        cout << items[i] << " ";


    return 0;
}