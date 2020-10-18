#include <iostream>
using namespace std;

int main()
{
    int colossal, titans, max_height = 0;

    cin >> colossal >> titans;

    while (titans > 0)
    {
        int height;

        cin >> height;

        if (height > max_height)
            max_height = height;

        titans--;
    }

    if (max_height >= colossal)
        cout << "KYOJIN!" << endl;
    else
        cout << "SUSSA" << endl;

    return 0;
}