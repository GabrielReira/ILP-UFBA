#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int points[n], score = 0;

    for (int i = 0; i < n; i++) {
        cin >> points[i];
        score += points[i];
    }

    int c;
    cin >> c;

    for (int i = 0; i < n; i++) {
        if (c == points[i])
            score -= c * 2;
    }

    cout << score << endl;


    return 0;
}