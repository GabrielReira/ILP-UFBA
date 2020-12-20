#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        int products;
        double total = 0;

        cin >> products;

        while (products > 0)
        {
            double price;
            int quantity;

            cin >> price >> quantity;
            total += price * quantity;

            products--;
        }

        cout << "R$ " << fixed << setprecision(2) << total << endl;

        n--;
    }


    return 0;
}