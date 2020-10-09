#include <iostream>
using namespace std;

int main()
{
    int people, people_food;
    int horses, horses_food;
    int wolves, wolves_food;
    int total;

    cin >> people >> people_food;
    cin >> horses >> horses_food;
    cin >> wolves >> wolves_food;

    total = (people * people_food) +
            (horses * horses_food) +
            (wolves * wolves_food);

    cout << total << endl;

    return 0;
}