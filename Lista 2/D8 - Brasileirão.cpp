#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string teams[n];

    string a;
    getline(cin, a);

    for (int i = 0; i < n; i++)
        getline(cin,teams[i]);

    int i = 0, j = n - 1;
    for (i; i < n/2; i++)
    {
        cout << teams[i] << " X " << teams[j] << endl;
        j--;
    }

    return 0;
}