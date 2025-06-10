/*programa: sum1.cpp*/
/*calcula la suma de n primeros numeros naturales recursivamente*/
#include <iostream>
#include <conio.h>
using namespace std;
unsigned long int suma(int n);
int main() {
    int n;
    char opcion;
    do {
        cout << "Ingresar numero de terminos <n>: ";
        cin >> n;
        cout << "La suma es: " << suma(n) << endl;

        cout << "¿Deseas ingresar otro numero? (Y/n): ";
        cin >> opcion;
    } while (opcion == 'y' || opcion == 'Y');
    cout << "Programa finalizado." << endl;
    return 0;
}
unsigned long int suma(int n) {
    if (n == 1) return 1;
    return suma(n - 1) + n;
}

