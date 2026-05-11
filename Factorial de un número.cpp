#include <iostream>
using namespace std;

int main() {
    int N;
    long long producto = 1;

    // Leer el valor de N
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    // Calcular el producto de los números desde 1 hasta N
    for (int i = 1; i <= N; i++) {
        producto = producto * i;
    }

    // Mostrar el resultado
    cout << "El producto desde 1 hasta " << N << " es: " << producto << endl;

    return 0;
}
