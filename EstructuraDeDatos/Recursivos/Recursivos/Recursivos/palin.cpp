#include <iostream>
#include <cstdio>

using namespace std;

const int MAX = 100; 

int convertir_base(long long n, long long b, int digits[]) {
    int cant = 0;
    while (n > 0) {
        digits[cant++] = n % b;
        n /= b;
    }

    // Revertir arreglo
    for (int i = 0; i < cant / 2; ++i) {
        int temp = digits[i];
        digits[i] = digits[cant - 1 - i];
        digits[cant - 1 - i] = temp;
    }

    return cant;
}


bool es_palindromo(int digits[], int cant) {
    for (int i = 0; i < cant / 2; ++i) {
        if (digits[i] != digits[cant - 1 - i])
            return false;
    }
    return true;
}
int main() {
    long long N;
    cin >> N;

    bool una = false; 

    for (long long b = 2; b <= N; ++b) {
        int digits[MAX];
        int cant = convertir_base(N, b, digits);
        if (es_palindromo(digits, cant)) {
            if (una)
                cout << " ";
            cout << b;
            una = true;
        }
    }

    if (!una) {
        cout << "*";
    }

    cout << endl;
    return 0;
}
