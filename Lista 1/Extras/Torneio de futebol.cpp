#include <iostream>
using namespace std;

int main()
{
    int global_max = -51, local_max = 0;

    int n;
    cin >> n;

    while (n--)
    {
        int goals;
        cin >> goals;

        local_max += goals;

        if (global_max < local_max)
            global_max = local_max;

        if (local_max < 0)
            local_max = 0;
    }

    cout << global_max;

    return 0;
}