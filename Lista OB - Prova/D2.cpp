#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int infinity_gems[n], collected_gems = 0;

    for (int i = 0; i < n; i++)
    {
        int gem;
        cin >> gem;

        if (gem == 0 || gem == 7 || gem == 11 ||
            gem == 14 || gem == 17 || gem == 19) {
            infinity_gems[collected_gems] = gem;
            collected_gems++;
        }
    }

    if (collected_gems > 0)
    {
        if (collected_gems == 6)
            cout << "Vingadores Avante" << endl;
        else
        {
            for (int i = 0; i < collected_gems; i++)
                cout << infinity_gems[i] << " ";
            cout << endl << "Vingadores Atencao" << endl;
        }
    }
    else
        cout << "Pizza" << endl;


    return 0;
}