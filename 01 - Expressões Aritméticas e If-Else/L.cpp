#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    float weight, height;
    cin >>  weight >> height;

    float bmi = weight / (height * height);

    if (bmi < 17) {
        cout << "muito-abaixo-do-peso";
    } else if (bmi <= 18.49) {
        cout << "abaixo-do-peso";
    } else if (bmi <= 24.99) {
        cout << "peso-normal";
    } else if (bmi <= 29.99) {
        cout << "acima-do-peso";
    } else if (bmi <= 34.99) {
        cout << "obesidade-1";
    } else if (bmi <= 39.99) {
        cout << "obesidade-2";
    } else {
        cout << "obesidade-3";
    }


    return 0;
}