#include <iostream>
using namespace std;

int main()
{
    int lucas_score, pedro_score;
    int lucas_total = 0, pedro_total = 0;

    cin >> lucas_score >> pedro_score;
    lucas_total += lucas_score;
    pedro_total += pedro_score;
    cin >> lucas_score >> pedro_score;
    lucas_total += lucas_score;
    pedro_total += pedro_score;
    cin >> lucas_score >> pedro_score;
    lucas_total += lucas_score;
    pedro_total += pedro_score;

    if (lucas_total > pedro_total) {
        cout << "Lucas";
    } else if (pedro_total > lucas_total) {
        cout << "Pedro";
    } else {
        cout << "Empate";
    }

    return 0;
}