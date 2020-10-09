#include <iostream>
using namespace std;

int main()
{
    bool is_working;
    int battery_energy, produced_energy, necessary_energy;

    cin >> is_working;
    cin >> battery_energy >> produced_energy >> necessary_energy;

    if ((is_working) && (battery_energy + produced_energy >= necessary_energy))
    {
        cout << "VAI!" << endl;
    } else {
        cout << "FICA!" << endl;
    }

    return 0;
}