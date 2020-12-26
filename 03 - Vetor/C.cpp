#include <iostream>
using namespace std;

int main()
{
    int n, balls_total = 0;
    cin >> n;
    char balls[n];

    for (int i = 0; i < n; i++)
    {
        cin >> balls[i];
        if (balls[i] == '*')
            balls_total++;
    }

    if (balls_total != 7)
        cout << "Pedido negado" << endl;
    else
    {
        cout << "Pedido realizado" << endl;
        int ball_number = 1;

        for (int i = 0; i < n; i++)
        {
            if (balls[i] == '*')
            {
                cout << ball_number << " ";
                ball_number++;
            }
            else
                cout << '$' << " ";
        }
    }
    
    
    return 0;
}