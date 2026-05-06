#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

int main() {
    float num, suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese valor " << i+1 << ": ";
        cin >> num;
        suma += num;
    }

    volatile float promedio;

    auto inicio = high_resolution_clock::now();

    for (int i = 0; i < 1000000; i++) {
        promedio = suma / 10;
    }

    auto fin = high_resolution_clock::now();

    auto duracion = duration_cast<nanoseconds>(fin - inicio);

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Tiempo de cálculo: " << duracion.count() << " nanosegundos" << endl;

    return 0;
}