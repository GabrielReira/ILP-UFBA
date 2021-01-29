#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main ()
{
    size_t n;
    cin >> n;
    string world[n];
    int x[n], y[n];

    for (size_t i = 0; i < n; i++)
        cin >> world[i] >> x[i] >> y[i];

    // Variável para armazenar as coordenadas atuais
    int x_coordinate = 0, y_coordinate = 0;
    double distance = 0;

    size_t m;
    cin >> m;

    while (m--)
    {
        string mission;
        cin >> mission;

        int left = 0, right = n - 1, mid;
        // Começa o algorítimo da busca binária
        while (left <= right)
        {
            mid = (left + right) / 2;

            if (mission == world[mid]) {
                distance += sqrt(pow(x[mid] - x_coordinate, 2) + pow(y[mid] - y_coordinate, 2));
                break;
            }
            (mission < world[mid]) ? (right = mid-1) : (left = mid+1);
        }
        // Atualizar as coordenadas
        x_coordinate = x[mid];
        y_coordinate = y[mid];
    }

    cout << fixed << setprecision(1) << distance << endl;
 

    return 0;
}