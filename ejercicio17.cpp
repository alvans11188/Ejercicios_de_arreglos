/*
17. Escriba una función que dado el nombre completo de una persona y un apellido, compruebe si el apellido 
pertenece a esa persona.*/
#include <iostream>
#include <cstring> // Para utilizar funciones de manejo de cadenas en C
using namespace std;

bool apellidoEnNombre(char nombreCompleto[], char apellido[]) {
    // Utilizamos strstr para buscar el apellido en el nombre completo
    if (strstr(nombreCompleto, apellido) != NULL) {
        return true; // El apellido se encontró en el nombre completo
    }
    return false; // El apellido no se encontró en el nombre completo
}

int main() {
    const int MAX_LONGITUD = 1000;
    char nombreCompleto[MAX_LONGITUD];
    char apellido[MAX_LONGITUD];

    // Solicitar al usuario que ingrese el nombre completo
    cout << "Ingrese el nombre completo: ";
    cin.getline(nombreCompleto, MAX_LONGITUD);

    // Solicitar al usuario que ingrese el apellido a buscar
    cout << "Ingrese el apellido a buscar: ";
    cin.getline(apellido, MAX_LONGITUD);

    // Comprobar si el apellido está en el nombre completo
    if (apellidoEnNombre(nombreCompleto, apellido)) {
        cout << "El apellido '" << apellido << "' pertenece a '" << nombreCompleto << "'." << endl;
    } else {
        cout << "El apellido '" << apellido << "' NO pertenece a '" << nombreCompleto << "'." << endl;
    }

    return 0;
}

