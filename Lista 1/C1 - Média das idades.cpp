#include <iostream>
using namespace std;

int main()
{
    int age, i, total = 0;

    while (1) {
        cin >> age;
        if (age <= 0)
            break;

        total += age;
        i++;
    }

    cout << total / i << endl;

    return 0;
}