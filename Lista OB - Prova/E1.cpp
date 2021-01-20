#include <iostream>
using namespace std;

int main()
{
    int total_rows, seats_per_row;
    cin >> total_rows >> seats_per_row;
    total_rows++; seats_per_row++;  // Facilitar a contagem dos assentos

    // Matriz que armazenará todos os assentos
    bool seats[total_rows][seats_per_row];  
    // Preenchendo todos assentos como ocupados (true)
    fill(&seats[0][0], &seats[total_rows][seats_per_row], 1);

    // Usuário insere assentos ocupados e não ocupados
    for (int i = 1; i < total_rows; i++)
        for (int j = 1; j < seats_per_row; j++)
            cin >> seats[i][j];
    
    int chosen_row, chosen_seat;

    for (int i = 1; i < total_rows; i++)
        for (int j = 1; j < seats_per_row - 1; j++)      
            if (seats[i][j] == 0 && seats[i][j+1] == 0) {
                chosen_row = i;
                chosen_seat = j;
                j = seats_per_row; i = total_rows;  // Finalizar a busca
            }

    cout << "Fileira: " << chosen_row << endl
         << "Assentos: " << chosen_seat << " e " << chosen_seat + 1;


    return 0;
}