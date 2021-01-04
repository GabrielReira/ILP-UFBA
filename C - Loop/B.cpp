#include <iostream>
using namespace std;

int main()
{
    char patient;

    while (true)
    {
        int oxygen_saturation;

        cin >> patient;

        if (patient == '#')
            break;
        
        cin >> oxygen_saturation;

        cout << patient;
        if (oxygen_saturation >= 90)
            cout << " Alta" << endl;
        else
            cout << " Internação" << endl;
    }


    return 0;
}