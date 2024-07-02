#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> // Para las funciones isalpha y tolower

using namespace std;

// Funci�n para convertir una cadena a min�sculas y eliminar caracteres no alfab�ticos
string limpiarCadena(const string &cadena) {
    string resultado;
    for (size_t i = 0; i < cadena.size(); ++i) {
        if (isalpha(cadena[i])) {
            resultado += tolower(cadena[i]);
        }
    }
    return resultado;
}

// Funci�n para determinar si una cadena es un pal�ndromo
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
        cout << "La frase es un pal�ndromo." << endl;
    } else {
        cout << "La frase NO es un pal�ndromo." << endl;
    }

    return 0;
}
