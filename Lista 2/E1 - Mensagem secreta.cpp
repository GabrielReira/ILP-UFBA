#include <iostream>
#include <string>
using namespace std;

int main()
{
    char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                        'n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int n;
    cin >> n;

    // Limpar o 'cache' do getline
    string a;
    getline(cin, a);

    string word;
    getline(cin, word);

    for (int i = 0; i < int(word.size()); i++)
    {
        for (int j = 0; j < 26; j++)       
            if (word[i] == letters[j])
            {
                if (j + n > 25)  // Se ultrapassar a letra z
                    word[i] = letters[j + n - 26];
                else
                    word[i] = letters[j + n];

                // Pra finalizar o for
                j = 26;
            }
    }
    
    cout << word << endl;

    return 0;
}