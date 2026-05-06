#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;
using namespace chrono;

int main() {
    string sucursales[25];
    float ventas[25];
    float suma = 0;

    srand(time(0));

    for (int i = 0; i < 25; i++) {
        sucursales[i] = "Sucursal " + to_string(i+1);
        ventas[i] = rand() % 4001 + 1000;
        suma += ventas[i];
    }

    volatile float promedio;

    auto inicio = high_resolution_clock::now();

    for (int i = 0; i < 1000000; i++) {
        promedio = suma / 25;
    }

    auto fin = high_resolution_clock::now();

    auto duracion = duration_cast<nanoseconds>(fin - inicio);

    cout << "Promedio de ventas: " << promedio << endl;

    for (int i = 0; i < 25; i++) {
        if (ventas[i] > promedio) {
            cout << sucursales[i] << " - " << ventas[i] << endl;
        }
    }

    cout << "Tiempo de cálculo: " << duracion.count() << " nanosegundos" << endl;

    return 0;
}