#include <iostream>
using namespace std;

int main() {
    double base;
    int exponente;
    double resultado = 1.0;
    
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    
    
    if (exponente == 0) {
        if (base == 0) {
            cout << "Error: 0^0 es indeterminado" << endl;
            return 1;
        }
        resultado = 1.0;
    }
    else if (base == 0 && exponente > 0) {
        resultado = 0.0;
    }
    else if (base == 0 && exponente < 0) {
        cout << "Error: Division por cero (0 elevado a potencia negativa)" << endl;
        return 1;
    }
    else if (exponente > 0) {
        int contador = 0;
        while (contador < exponente) {
            resultado = resultado * base;
            contador++;
        }
    }
    else {
        int exp_positivo = -exponente;
        int contador = 0;
        
        do {
            resultado = resultado * base;
            contador++;
        } while (contador < exp_positivo);
        
        resultado = 1.0 / resultado;
    }
    
    cout << endl;
    cout << "Resultado: " << base << "^" << exponente << " = " << resultado << endl;
    
    return 0;
}