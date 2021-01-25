#include <iostream>
#include <utility>
using namespace std;

int main ()
{
    size_t n;
    cin >> n;
    long long votes[n] = {};

    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < n; j++)
        {
            long long candidate_votes;
            cin >> candidate_votes;
            votes[j] += candidate_votes;
        }

    for (size_t i = 1; i < n; i++)
        for (int j = i; (j > 0) && (votes[j] < votes[j-1]); j--)
            swap(votes[j], votes[j - 1]);

    for (size_t i = 0; i < n; i++)
        cout << votes[i] << endl;


    return 0;
}