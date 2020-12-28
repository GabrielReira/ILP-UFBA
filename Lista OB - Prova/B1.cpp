#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float grade1, grade2, grade3, final_grade;
    int missed_classes;

    cin >> grade1 >> grade2 >> grade3;
    cin >> missed_classes;

    final_grade = (grade1 + grade2 + grade3) / 3;

    cout << fixed << setprecision(1);

    if (missed_classes > 17)
        cout << "Reprovado por falta" << endl;
    else if (final_grade < 7)
        cout << "Reprovado por nota " << final_grade << endl;
    else
        cout << "Aprovado " << final_grade << endl;


    return 0;
}