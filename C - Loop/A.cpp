#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        int damage, increase;

        cin >> damage >> increase;
        cout << damage + increase << endl;

        n--;
    }


    return 0;
}