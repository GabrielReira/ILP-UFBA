#include <iostream>
using namespace std;

int main()
{
    int pc_number, user_number;

    cin >> pc_number >> user_number;

    if (pc_number == user_number) {
        cout << "Você acertou!";
    } else {
        cout << "Você errou!";
    }

    return 0;
}