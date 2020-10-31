#include <iostream>
using namespace std;

int main()
{
    int n, index;
    cin >> n;
    int numbers[n];

    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    cin >> index;
    cout << numbers[index - 1] << endl;

    return 0;
}