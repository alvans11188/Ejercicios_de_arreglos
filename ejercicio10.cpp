#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double SemiSumaMediana(int x, int y) {
    return (x + y) / 2.0;
}

int main() {
    int numeros[30];
    int s = 0;

    srand(time(0));

    // Generar números aleatorios y mostrarlos
    cout << "Los numeros aleatorios del arreglo son: " << endl;
    for (int i = 0; i < 30; i++) {
        numeros[i] = 100 + rand() % 901; // Genera números entre 100 y 1000
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Calcular media aritmética
    for (int i = 0; i < 30; i++) {
        s += numeros[i];
    }
    double media = static_cast<double>(s) / 30.0; // Calcula la media como double
    cout << "La media aritmetica es: " << media << endl;

    // Ordenar arreglo para calcular la mediana
    for (int i = 0; i < 30 - 1; i++) {
        for (int j = i + 1; j < 30; j++) {
            if (numeros[i] > numeros[j]) {
                int aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    // Mostrar el arreglo ordenado
    cout << "El arreglo ordenado ascendentemente para hallar la mediana es: " << endl;
    for (int i = 0; i < 30; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Calcular mediana
    double mediana;
    if (30 % 2 == 0) { // Si hay un número par de elementos
        mediana = SemiSumaMediana(numeros[14], numeros[15]);
    } else { // Si hay un número impar de elementos
        mediana = numeros[30 / 2];
    }
    cout << "La mediana es: " << mediana << endl;

    // Calcular moda de manera manual
    int moda = -1;
    int maxFrecuencia = 0;
    int contadorActual = 1;
    int valorActual = numeros[0];

    for (int i = 1; i < 30; i++) {
        if (numeros[i] == valorActual) {
            contadorActual++;
        } else {
            if (contadorActual > maxFrecuencia) {
                moda = valorActual;
                maxFrecuencia = contadorActual;
            }
            valorActual = numeros[i];
            contadorActual = 1;
        }
    }

    // Verificar el último conjunto de números
    if (contadorActual > maxFrecuencia) {
        moda = valorActual;
        maxFrecuencia = contadorActual;
    }

    // Mostrar la moda si existe, o indicar que no hay moda
    if (maxFrecuencia == 1) {
        cout << "No existe moda." << endl;
    } else {
        cout << "La moda es: " << moda << " con una frecuencia de " << maxFrecuencia << " veces." << endl;
    }

    return 0;
}
