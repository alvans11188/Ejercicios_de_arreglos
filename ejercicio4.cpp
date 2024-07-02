#include <iostream>
#include <vector>
#include <algorithm> // Para std::sort
#include <string>

using namespace std;

int main() {
    vector<string> nombres;
    string nombre;
    // Leer nombres hasta que se introduzca una l�nea vac�a
    cout << "Ingrese una secuencia de nombres (presione Enter despu�s de cada nombre, y escriba 'fin' para terminar):\n";
    while (true) {
        cout << "Nombre: ";
        getline(cin, nombre);
        if (nombre == "fin") {
            break;
        }
        nombres.push_back(nombre);
    }
    // Ordenar los nombres alfab�ticamente
    sort(nombres.begin(), nombres.end());
    // Mostrar los nombres ordenados
    cout << "\nNombres ordenados alfab�ticamente:\n";
    for (size_t i = 0; i < nombres.size(); ++i) {
        cout << nombres[i] << endl;
    }

    return 0;
}
