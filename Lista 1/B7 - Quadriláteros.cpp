#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3, side4;
    int angle1, angle2, angle3, angle4;
    int angles_sum;

    cin >> side1 >> side2 >> side3 >> side4;
    cin >> angle1 >> angle2 >> angle3 >> angle4;

    angles_sum = angle1 + angle2 + angle3 + angle4;

    // Condições básicas para ser um quadrado, losango ou retângulo:
    // 1) Soma dos ângulos internos igual a 360
    // 2) Lados paralelos iguais
    // 3) Ângulos opostos iguais

    if ((angles_sum == 360) &&
        (side1 == side4 && side2 == side3) &&
        (angle1 == angle4 && angle2 == angle3))
    {
        if (side1 == side2)  // Todos os lados iguais
        {
            if (angle1 == angle2)
                cout << "Quadrado." << endl;
            else
                cout << "Losango." << endl;
        }
        else 
            cout << "Retangulo." << endl;
    }
    else
    {
        cout << "Nenhuma das formas procuradas." << endl;
    }

    return 0;
}