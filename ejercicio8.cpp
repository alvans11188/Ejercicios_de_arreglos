#include <iostream>
#include <sstream>

using namespace std;

bool esCapicua(long long numero) {
    stringstream ss;
    ss << numero;  // Convertir el n�mero a stringstream

    string numStr = ss.str();  // Obtener el string desde stringstream
    int longitud = numStr.length();

    // Comparar los d�gitos de extremos hacia adentro
    for (int i = 0; i < longitud / 2; ++i) {
        if (numStr[i] != numStr[longitud - 1 - i]) {
            return false; // Si hay alguna diferencia, no es capic�a
        }
    }

    return true; // Si todos los d�gitos coinciden, es capic�a
}

int main() {
    long long numero;

    // Pedir al usuario que ingrese el n�mero de 10 cifras
    cout << "Ingrese un numero de 10 cifras: ";
    cin >> numero;

    // Verificar si el n�mero ingresado es capic�a
    if (esCapicua(numero)) {
        cout << "El numero " << numero << " es capicua." << endl;
    } else {
        cout << "El numero " << numero << " no es capicua." << endl;
    }

    return 0;
}
