#include <iostream>
using namespace std;

int main() {
    int goal, epic_save, save, shot_on_goal, demolition, points;

    cin >> goal >> epic_save >> save >> shot_on_goal >> demolition;
    points = (goal * 100) + (epic_save * 75) + (save * 50) + (shot_on_goal * 10) + (demolition * 100);

    cout << points << endl;

    return 0;
}