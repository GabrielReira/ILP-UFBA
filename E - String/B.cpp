#include <iostream>
#include <string>  // substr(), erase() e length()
#include <cctype>  // toupper()
#include <algorithm>  // find()
using namespace std;

int main()
{
    size_t n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        string name;
        getline(cin,name);

        // Faz um loop no nome separando os sobrenomes
        size_t pos = 0;
        while ((pos = name.find(" ")) != string::npos)
        {
            string aux;
            aux = name.substr(0, pos);
            char c = toupper(aux[0]);
            cout << c << ". ";
            name.erase(0, pos + 1);  // Apaga o conteúdo de 'name'
        }

        // Imprime o último sobrenome por completo
        char c = toupper(name[0]);
        cout << c << name.substr(1, name.length()) << endl;
    }


    return 0;
}