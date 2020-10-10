#include <iostream>
using namespace std;

int main()
{
    int chakra;

    cin >> chakra;

    if (chakra % 2 == 0) 
        cout << "fogo" << endl;
    if (chakra % 3 == 0) 
        cout << "agua" << endl;
    if (chakra % 5 == 0) 
        cout << "ar" << endl;
    if (chakra % 7 == 0) 
        cout << "terra" << endl;
    if (chakra % 11 == 0) 
        cout << "raio" << endl;

    return 0;
}