/*progrma: product01.cpp */
/*calcula el producto de dos numeros enteros recursivamente */
/* programa: product01.cpp */
/* calcula el producto de dos numeros enteros recursivamente */

#include <iostream>
#include <conio.h>
using namespace std;

unsigned long int producto(int a, int b);

int main() {
    int a, b;
    char opcion;

    do {
        cout << "\nIngrese <a>: ";
        cin >> a;
        cout << "Ingrese <b>: ";
        cin >> b;

        if (b < 0) {
            cout << "Este programa no maneja multiplicación con negativos de forma recursiva.\n";
        } else if (b == 0) {
            cout << "El producto es: 0\n";
        } else {
            cout << "El producto es: " << producto(a, b) << endl;
        }

        cout << "\n¿Deseas hacer otra multiplicación? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "Programa finalizado." << endl;
    return 0;
}

unsigned long int producto(int a, int b) {
    if (b == 1) return a;
    return a + producto(a, b - 1);
}

