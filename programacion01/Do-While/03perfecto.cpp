#include <iostream>

using namespace std;

int main() {
    int n, i = 1, suma = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    if (n <= 0) {
        cout << "Debe ingresar un numero mayor que cero." << endl;
        return 1;
    }

    do {
        if (n % i == 0) {
            suma += i;
        }
        i++;
    } while (i < n);

    if (suma == n) {
  cout << n << " es un numero perfecto." << endl;
    } else {
        cout << n << " no es un numero perfecto, porque la suma de sus divisores es " << suma << "." << endl;
    }

    return 0;
}
