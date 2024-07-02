#include <iostream>
#include <string>
#include <cctype> // Para usar las funciones toupper

using namespace std;

int main() {
    string frase;
    int n, x, c;
    
    cout << "Ingresa una frase: ";
    getline(cin, frase);

    n = frase.length();
    c = 0;

    for (x = 0; x < n; ++x) { 
        if (x == 0) {
            cout << (char)toupper(frase[x]);
        } else {
            if (frase[x] == ' ') {
                c = 1;
            } else {
                if (c == 1) {
                    cout << ' ' << (char)toupper(frase[x]);
                    c = 0;
                } else {
                    cout << frase[x];
                }
            }
        }
    }
    cout << endl;

    return 0;
}
