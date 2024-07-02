#include <iostream>
#include <sstream>

using namespace std;

bool esCapicua(long long numero) {
    stringstream ss;
    ss << numero;  // Convertir el número a stringstream

    string numStr = ss.str();  // Obtener el string desde stringstream
    int longitud = numStr.length();

    // Comparar los dígitos de extremos hacia adentro
    for (int i = 0; i < longitud / 2; ++i) {
        if (numStr[i] != numStr[longitud - 1 - i]) {
            return false; // Si hay alguna diferencia, no es capicúa
        }
    }

    return true; // Si todos los dígitos coinciden, es capicúa
}

int main() {
    long long numero;

    // Pedir al usuario que ingrese el número de 10 cifras
    cout << "Ingrese un numero de 10 cifras: ";
    cin >> numero;

    // Verificar si el número ingresado es capicúa
    if (esCapicua(numero)) {
        cout << "El numero " << numero << " es capicua." << endl;
    } else {
        cout << "El numero " << numero << " no es capicua." << endl;
    }

    return 0;
}
