#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n], b[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    long long digits[101] = {};

    for (int i = 0; i < n; i++)
    {
        long long digit;

        if (i % 4 == 0)
            digit = a[i] * b[i];
        else if (i % 4 == 1)
            digit = a[i] - b[i];
        else if (i % 4 == 2)
            digit = a[i] / b[i];
        else if (i % 4 == 3)
            digit = pow(a[i], b[i]);

        while (digit >= 10)
            digit /= 10;
        if (digit < 0)
            digit *= -1;
        
        digits[i] = digit;
    }


    // Exibindo os 6 últimos dígitos
    if (n > 6)
        for (int i = n - 6; i < n; i++)
            cout << digits[i];
    else
        for (int i = 0; i < 6; i++)
            cout << digits[i];


    return 0;
}