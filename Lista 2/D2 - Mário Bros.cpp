#include <iostream>
using namespace std;

int main()
{
    int boxes, jump, score = 0;
    cin >> boxes;
    int coins[boxes];

    for (int i = 0; i < boxes; i++)
        cin >> coins[i];
    
    cin >> jump;

    for (int i = 0; i < boxes; i += jump)
        score += coins[i];


    cout << score << endl;

    return 0;
}