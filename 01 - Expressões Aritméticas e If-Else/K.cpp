#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double wage;
    double tax, tax2, tax3;
    double total_tax;

    cin >> wage;

    if (wage <= 3000) {
        tax = wage * 0.15;
        wage *= 0.85;
        total_tax  = tax;
    } else if (wage <= 6000) {
        tax = (wage - 3000) * 0.2;
        wage -= tax;
        tax2 = 3000 * 0.15;
        wage -= tax2;
        total_tax = tax + tax2;
    } else {
        tax = (wage - 6000) * 0.3;
        wage -= tax;
        tax2 = 3000 * 0.2;
        wage -= tax2;
        tax3 = 3000 * 0.15;
        wage -= tax3;
        total_tax = tax + tax2 + tax3;
    }


    // Verificar se o salário é um valor inteiro
    int is_int = wage;

    if (is_int == wage) {
        cout << "Imposto: R$ " << total_tax << endl;
        cout << "Salário líquido: R$ " << wage << endl;

    } else {
        cout << fixed << setprecision(2);
        cout << "Imposto: R$ " << total_tax << endl;
        cout << "Salário líquido: R$ " << wage << endl;
    }


    return 0;
}