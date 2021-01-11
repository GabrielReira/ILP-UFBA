#include <iostream>
using namespace std;

int main()
{
    int total_stones;
    long long highest_stone;
    bool can_pass = true;

    cin >> total_stones >> highest_stone;

    while (total_stones--)
    {
        long long stone_height;
        cin >> stone_height;

        if (stone_height > highest_stone) {
            can_pass = false;
            break;
        }
    }

    if (!can_pass)
        cout << "Você não vai passar!!!" << endl;
    else
        cout << "Tá safe, o caminho é izi!!!" << endl;


    return 0;
}