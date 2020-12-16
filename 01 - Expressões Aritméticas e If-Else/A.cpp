#include <iostream>
using namespace std;

int main() {
    int  displacement, time, velocity;

    cin >> displacement >> time;
    velocity = displacement / time;

    cout << velocity << endl;

    return 0;
}