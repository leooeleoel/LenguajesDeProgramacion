#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;
using namespace chrono;

int main() {
    int pares = 0, impares = 0;

    srand(time(0));

    auto inicio = high_resolution_clock::now();

    for (int i = 0; i < 5000000; i++) {
        int num = rand() % 51 + 50;

        if (num % 2 == 0)
            pares++;
        else
            impares++;
    }

    auto fin = high_resolution_clock::now();

    auto duracion = duration_cast<nanoseconds>(fin - inicio);

    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares << endl;
    cout << "Tiempo de cálculo: " << duracion.count() << " nanosegundos" << endl;

    return 0;
}