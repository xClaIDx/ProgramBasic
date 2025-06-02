#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese un numero : ";
    cin >> n;

    if (n <= 0) {
        cout << "ERROR : El numero debe ser mayor que 0." << endl;
        return 1;
    }

    cout << "Sucesion de Collatz: " << n;

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        cout << " -> " << n;
    }

    cout << endl;
    return 0;
}
  