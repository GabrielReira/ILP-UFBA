#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int u[n], v[n], d[n];

    for (int i = 0; i < n; i++)
        cin >> u[i];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        cin >> d[i];

    int u_plus_v[n];
    for (int i = 0; i < n; i++)
        u_plus_v[i] = u[i] + v[i];
    
    // Contador pra ver se os vetores são iguais
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[i] == u_plus_v[i])
            count++;
    }

    // Se o contador tiver o mesmo valor de n então
    // todos os valores de d são iguais a soma de u e v
    if (count == n)
        cout << "OK" << endl;
    else
        cout << "NOPE :(" << endl;


    return 0;
}