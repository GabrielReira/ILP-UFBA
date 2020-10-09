#include <iostream>
using namespace std;

int main()
{
    int xe, ye, xd, yd;

    cin >> xe >> ye >> xd >> yd;

    if ((xe == xd) && (ye == yd))
    {
        cout << "Soltar pacote" << endl;
    } else {
        cout << "Nao soltar pacote" << endl;
    }

    return 0;
}