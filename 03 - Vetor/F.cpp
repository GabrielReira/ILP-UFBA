#include <iostream>
using namespace std;

int main()
{
    int n, kills;
    cin >> n;

    bool kills_in_order[1000001] = {false};

    for (int i = 0; i < n; i++)
    {
        cin >> kills;
        kills_in_order[kills] = true;
    }

    for (int i = 0; i < 1000001; i++)
    {
        if (kills_in_order[i] == true)
            cout << i << " ";
    }


    return 0;
}