#include <iostream>
#include <string>
using namespace std;

int main()
{
    size_t n;
    cin >> n;
    // Criar uma borda no caça-palavra para
    // evitar acessar posições inválidas da matriz
    char letters[n + 2][n + 2];

    // Preencher a borda com qualquer caractere não letra
    int count = 2, row = 0, column = 0;
    while (count > 0)  // Primeira e última linha
    {
        for (size_t j = 0; j < n+2; j++)
            letters[row][j] = '7';
        row = n + 1;  // Ir para última linha
        count--;
    }
    while (count < 2)  // Primeira e última coluna
    {
        for (size_t i = 1; i < n+1; i++)
            letters[i][column] = '3';
        column = n + 1;  // Ir para última coluna
        count++;
    }


    // Usuário entra com o caça-palavras
    for (size_t i = 1; i <= n; i++)
        for (size_t j = 1; j <= n; j++)
            cin >> letters[i][j];

    // Usuário entra com a palavra
    string word;
    cin >> word;
    size_t length = word.size();

    size_t xa, ya, xb, yb;
    bool was_found = false;

    // Buscar a palavra
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= n; j++)
        {
            // Quando encontrar a primeira letra
            if (word[0] == letters[i][j])
            {
                // Guardar as coordenadas iniciais
                ya = i;
                xa = j;

                // Se a palavra está na horizontal-normal
                if (word[1] == letters[i+1][j])
                {
                    was_found = true;
                    for (size_t k = 2; k < length; k++)
                        if (word[k] != letters[i+k][j]) {
                            was_found = false;
                            break;
                        }
                    // Se encontrou todas as letras da palavra
                    if (was_found) {
                        // Guardar as coordenadas finais
                        yb = i + length - 1;
                        xb = j;
                        break;
                    }
                }
                // Se a palavra está na horizontal-invertida
                if (word[1] == letters[i-1][j])
                {
                    was_found = true;
                    for (size_t k = 2; k < length; k++)
                        if (word[k] != letters[i-k][j]) {
                            was_found = false;
                            break;
                        }
                    // Se encontrou todas as letras da palavra
                    if (was_found) {
                        // Guardar as coordenadas finais
                        yb = ya - length + 1;
                        xb = j;
                        break;
                    }
                }
                // Se a palavra está na vertical-normal
                if (word[1] == letters[i][j+1])
                {
                    was_found = true;
                    for (size_t k = 2; k < length; k++)
                        if (word[k] != letters[i][j+k]) {
                            was_found = false;
                            break;
                        }
                    // Se encontrou todas as letras da palavra
                    if (was_found) {
                        // Guardar as coordenadas finais
                        yb = i;
                        xb = length + j - 1;
                        break;
                    }
                }
                // Se a palavra está na vertical-invertida
                if (word[1] == letters[i][j-1])
                {
                    was_found = true;
                    for (size_t k = 2; k < length; k++)
                        if (word[k] != letters[i][j-k]) {
                            was_found = false;
                            break;
                        }
                    // Se encontrou todas as letras da palavra
                    if (was_found)
                    {
                        // Guardar as coordenadas finais
                        yb = i;
                        xb = xa - length + 1;
                        break;
                    }
                }
            }
        }
        if (was_found)
            break;
    }

    // Exibir as coordenadas da palavra para o usuário
    cout << ya - 1 << " " << xa - 1 << " " << yb - 1 << " " << xb - 1 << endl;


    return 0;
}