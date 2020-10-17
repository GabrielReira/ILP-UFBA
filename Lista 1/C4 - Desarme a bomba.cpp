#include <iostream>
using namespace std;

int main()
{
    int rounds;

    cin >> rounds;

    while (rounds > 0)
    {
        int code;

        cin >> code;

        if (code % 11 == 0)
            cout << "Sim" << endl;
        else
            cout << "Nao" << endl;
        
        rounds--;
    }

    return 0;
}