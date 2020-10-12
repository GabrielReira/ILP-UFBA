#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        float total = 0;

        for (int j = 1; j <= 3; j++) {
            float score;

            cin >> score;
            total += score;
        }

        cout << "Ninja " << i << ": ";

        if (total / 3 > 60)
        {
            cout << fixed << setprecision(1)
            << "passou no Exame Chunin com " << total / 3 << " de pontuacao" << endl;
        } else {
            cout << "nao passou no Exame Chunin" << endl;
        }
    }

    return 0;
}