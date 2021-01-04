#include <iostream>
using namespace std;

int main()
{
    int number, counter = 0;

    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            counter++;
    }

    cout << number;

    if (counter == 2)
        cout << " eh primo" << endl;
    else
        cout << " nao eh primo" << endl;


    return 0;
}