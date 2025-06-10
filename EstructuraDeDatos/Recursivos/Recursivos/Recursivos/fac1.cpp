// Factorial de un número
// programa: fac03.cpp

#include <iostream>
using namespace std;

unsigned long int factorial(int n);

int main() {
    int n;
    char opcion;

    do {
        cout << "\nIngrese un numero: ";
        cin >> n;

        if (n < 0) {
            cout << "El factorial no está definido para números negativos.\n";
        } else {
            cout << "Factorial de " << n << " es " << factorial(n) << endl;
        }

        cout << "\n¿Deseas calcular otro factorial? (s/n): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    cout << "Programa finalizado." << endl;
    return 0;
}

unsigned long int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

