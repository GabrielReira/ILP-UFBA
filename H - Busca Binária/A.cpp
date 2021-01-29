#include <iostream>
#include <string>
using namespace std;

int main ()
{
    size_t n;
    cin >> n;
    string species[n];

    for (size_t i = 0; i < n; i++)
        cin >> species[i];

    size_t q;
    cin >> q;

    while (q--)
    {
        string to_search;
        cin >> to_search;

        int left = 0, right = n - 1, mid;
        // Começa o algorítimo da busca binária
        while (left <= right)
        {
            mid = (left + right) / 2;

            if (to_search == species[mid]) {
                cout << to_search << " vive!" << endl;
                break;
            }
            (to_search < species[mid]) ? (right = mid-1) : (left = mid+1);
        }
        if (species[mid] != to_search)
            cout << to_search << " foi extinto :(" << endl;
    }


    return 0;
}