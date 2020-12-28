#include <iostream>
using namespace std;

int main()
{
    char defender_block, goalkeeper, forward_dribble, forward_kick;

    cin >> defender_block >> goalkeeper;
    cin >> forward_dribble >> forward_kick;

    // As noções de esquerda e direita é da visão dos jogadores
    // Se o zagueiro foi pra esquerda e o atacante para direita,
    // então eles foram para mesma direção
    if (defender_block != forward_dribble) {
        cout << "Bloqueado" << endl;
    } else {
        cout << "Driblado" << endl;

        if (forward_kick != goalkeeper) {
            cout << "...e o goleiro pega"  << endl;
        } else {
            cout << "Gol"  << endl;
        }
    }


    return 0;
}