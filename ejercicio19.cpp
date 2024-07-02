#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> // Para las funciones isalpha y tolower

using namespace std;

// Función para convertir una cadena a minúsculas y eliminar caracteres no alfabéticos
string limpiarCadena(const string &cadena) {
    string resultado;
    for (size_t i = 0; i < cadena.size(); ++i) {
        if (isalpha(cadena[i])) {
            resultado += tolower(cadena[i]);
        }
    }
    return resultado;
}

// Función para determinar si una cadena es un palíndromo
bool esPalindromo(const string &cadena) {
    string limpia = limpiarCadena(cadena);
    string invertida = limpia;
    reverse(invertida.begin(), invertida.end());
    return limpia == invertida;
}

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    if (esPalindromo(frase)) {
        cout << "La frase es un palíndromo." << endl;
    } else {
        cout << "La frase NO es un palíndromo." << endl;
    }

    return 0;
}
