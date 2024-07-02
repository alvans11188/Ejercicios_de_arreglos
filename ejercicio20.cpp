
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Inicialización del vector de meses
    string mesesArray[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
                           "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    vector<string> meses(mesesArray, mesesArray + sizeof(mesesArray) / sizeof(string));
    vector<double> ventas(12);
    double sumaVentas = 0.0, promedioVentas = 0.0;
    int conteoMinimo = 0, conteoRegular = 0, conteoExcelente = 0;

    // Solicitar las ventas mensuales
    cout << "Ingrese el monto de las ventas mensuales de todo el año 2020:" << endl;
    for (int i = 0; i < 12; ++i) {
        cout << meses[i] << ": ";
        cin >> ventas[i];
        sumaVentas += ventas[i];
    }

    // Calcular el promedio mensual de ventas
    promedioVentas = sumaVentas / 12;

    // Calcular porcentajes y obtener meses con ventas excelentes
    vector<string> mesesExcelentes;
    for (int i = 0; i < 12; ++i) {
        if (ventas[i] < 0.40 * promedioVentas) {
            conteoMinimo++;
        } else if (ventas[i] <= 0.75 * promedioVentas) {
            conteoRegular++;
        } else {
            conteoExcelente++;
            mesesExcelentes.push_back(meses[i]);
        }
    }

    // Mostrar resultados
    cout << "Valor de la venta mensual promedio: " << promedioVentas << endl;
    cout << "Porcentaje de meses con nivel de ventas Minimo: " << (conteoMinimo / 12.0) * 100 << "%" << endl;
    cout << "Porcentaje de meses con nivel de ventas Regular: " << (conteoRegular / 12.0) * 100 << "%" << endl;
    cout << "Porcentaje de meses con nivel de ventas Excelente: " << (conteoExcelente / 12.0) * 100 << "%" << endl;

    cout << "Meses con ventas Excelente: ";
    for (size_t i = 0; i < mesesExcelentes.size(); ++i) {
        cout << mesesExcelentes[i] << " ";
    }
    cout << endl;

    return 0;
}

