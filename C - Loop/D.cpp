#include <iostream>
using namespace std;

int main()
{
    int days, total_energy;
    int fall_day = 0;

    cin >> days >> total_energy;

    for (int i = 1; i <= days; i++)
    {
        int energy;

        cin >> energy;
        total_energy -= energy;

        if (fall_day == 0 && total_energy <= 0)
            fall_day = i;
    }

    if (total_energy > 0)
        cout << "Resistiu" << endl;
    else
        cout << fall_day << endl;
    

    return 0;
}