#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numero, suma = 0, contador = 0, par = 0, impares = 0;
    double sumprom = 0;
    double sumaCuadrados = 0;
    
  
    while (true) {
        cin >> numero;
        
        
        if (numero <= 0) {
            break;
        }
        
        if (numero >= 0 && numero < 100) {
            suma += numero;
            sumprom += numero;
            sumaCuadrados += (numero * numero);
            contador++;
            
            
            if (numero % 2 == 0) {
                par++;
            } else {
                impares++;
            }
        }
    }
    
    double promedio = 0;
    if (contador > 0) {
        promedio = sumprom / contador;
    }
    
    double desEstandar = 0;
    if (contador > 0) {
        double varianza = (sumaCuadrados / contador) - (promedio * promedio);
        if (varianza >= 0) {
            desEstandar = sqrt(varianza);
        }
    }

    cout << suma << " " << promedio << " " << desEstandar<< " " << par << " " << impares << endl;
    
    return 0;
}