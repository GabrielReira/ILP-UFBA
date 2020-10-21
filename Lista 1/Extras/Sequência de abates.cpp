#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int t0 = 0;
    int kills = 0;

    while (n > 0)
    {
        int t1;
        cin >> t1;

        if ((kills < 4 && (t1 - t0) <= 10) || (kills == 4 && (t1 - t0) <= 30))
        {
            kills++;

            if (kills == 2)
                cout << "DOUBLEKILL" << endl;
            else if (kills == 3)
                cout << "TRIPLEKILL" << endl;
            else if (kills == 4)
                cout << "QUADRAKILL" << endl;
            else if (kills == 5)
                cout << "PENTAKILL" << endl;
        }
        else
        {
            kills = 1;
        }

        t0 = t1;
        n--;
    }

    return 0;
}