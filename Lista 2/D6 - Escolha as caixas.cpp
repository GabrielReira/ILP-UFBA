#include <iostream>
using namespace std;

int main()
{
    int n, m; 
    cin >> n >> m;
    int disposed_boxes[n], selected_boxes[m];

    for (int i = 0; i < n; i++)
    {
        cin >> disposed_boxes[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> selected_boxes[i];
    }

    int boxes_sum = 0;
    for (int i = 0; i < m; i++)
        boxes_sum += disposed_boxes[selected_boxes[i] - 1];

    if (boxes_sum % 3 == 0)
        cout << "jogador" << endl;
    else
        cout << "povoa" << endl;


    return 0;
}