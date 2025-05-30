#include  <iostream>
using namespace std;
int main() {
    int numero, suma = 0;

    cout << "Ingrese un numero (0 para terminar): ";
    cin >> numero;

    while (numero != 0) {
        suma += numero;
        cout << "Ingrese otro numero (0 para terminar): ";
        cin >> numero;
    }

    cout << "La suma de los numeros ingresados es: " << suma << endl;

    return 0;
}