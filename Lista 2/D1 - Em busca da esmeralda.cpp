#include <iostream>
using namespace std;

int main()
{
    int n, chaos_emerald;
    bool is_emerald = false;

    cin >> n;
    int emeralds[n] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> emeralds[i];
    }

    cin >> chaos_emerald;

    for (int i = 0; i < n; i++)
    {
        if(emeralds[i] == chaos_emerald)
            is_emerald = true;
    }

    if (is_emerald)
        cout << chaos_emerald << endl;
    else
        cout << -1 << endl;

    return 0;
}