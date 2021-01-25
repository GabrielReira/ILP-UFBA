#include <iostream>
#include <iomanip>
#include <utility>
using namespace std;

int main ()
{
    size_t j;
    cin >> j;

    string language[j];
    double score[j];

    for (size_t i = 0; i < j; i++)
        cin >> language[i] >> score[i];

    for (size_t i = 1; i < j; i++)
        for (int j = i; (j > 0) && (score[j] > score[j-1]); j--)
        {
            swap(language[j], language[j - 1]);
            swap(score[j], score[j - 1]);
        }

    cout << fixed << setprecision(1);
    for (size_t i = 0; i < j; i++)
        cout << language[i] << " " << score[i] << endl;


    return 0;
}