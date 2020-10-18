#include <iostream>
using namespace std;

int main()
{
    char block;
    int coal = 0, gold = 0, diamond = 0;

    while (cin >> block, block != 'M')
    {
        if (block == 'C')
            coal++;
        else if (block == 'O')
            gold++;
        else if (block == 'D')
            diamond++;
    }
    cout << coal << endl << gold << endl << diamond;
    cout << endl << coal + gold + diamond;

    return 0;
}