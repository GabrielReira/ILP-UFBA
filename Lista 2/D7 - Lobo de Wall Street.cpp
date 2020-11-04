#include <iostream>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    int profit[n];

    for (int i = 1; i <= n; i++)
        cin >> profit[i];
    
    for (int i = 0; i < c; i++)
    {
        int interval_1, interval_2;
        cin >> interval_1 >> interval_2;

        int interval_profit = 0;
        for (int i = interval_1; i <= interval_2; i++)
            interval_profit += profit[i];
        
        cout << interval_profit << endl;
    }

    return 0;
}