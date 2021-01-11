#include <iostream>
using namespace std;

int main()
{
    int cards, difference_a = 21, difference_b = 21;
    int score_a = 0, score_b = 0;

    cin >> cards;

    for (int i = 0; i < cards; i++) {
        int card;
        cin >> card;
        score_a += card;
    }
    for (int i = 0; i < cards; i++) {
        int card;
        cin >> card;
        score_b += card;
    }

    if (score_a <= 21)
        difference_a = 21 - score_a;
    if (score_b <= 21)
        difference_b = 21 - score_b;


    if (difference_a == difference_b)
        cout << "Empate.";
    else
    {
        if (score_a == 21)
            cout << "Jogador A vence com BlackJack.";
        else if (score_b == 21)
            cout << "Jogador B vence com BlackJack.";
        else if (difference_a < difference_b)
            cout << "Jogador A vence com " << score_a << " pontos.";
        else
            cout << "Jogador B vence com " << score_b << " pontos.";
    }

    
    return 0;
}