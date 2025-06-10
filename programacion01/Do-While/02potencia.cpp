#include <iostream>
using namespace std;

int main() {
    double base, resultado = 1.0;
    int exponente, i = 0;
    
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    
    if (exponente == 0) {
        resultado = 1.0;
    }
    else if (exponente > 0) {
        while (i < exponente) {
            resultado *= base;
            i++;
        }
    }
    else {
        while (i < -exponente) {
            resultado *= base;
            i++;
        }
        resultado = 1.0 / resultado;
    }
    
    cout << base << "^" << exponente << " = " << resultado << endl;
    
    return 0;
}