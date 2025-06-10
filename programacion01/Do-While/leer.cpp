#include <iostream>
#include <string>
using namespace std;

bool Vocal(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool Facil(string s) {
    int consonantes = 0;
    
    for (char c : s) {
        if (Vocal(c)) {
            consonantes = 0;
        } else {
            consonantes++;
            if (consonantes >= 4) {
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    // Validar 1 ≤ T ≤ 100
    if (t < 1 || t > 100) {
        cout << "Error: T debe estar entre 1 y 100" << endl;
        return 1;
    }
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        // Validar 1 ≤ N ≤ 100
        if (n < 1 || n > 100) {
            cout << "Error: N debe estar entre 1 y 100" << endl;
            continue;
        }
        
        // Validar que S contiene solo caracteres lowercase Latin
        bool validChars = true;
        for (char c : s) {
            if (c < 'a' || c > 'z') {
                validChars = false;
                break;
            }
        }
        
        if (!validChars) {
            cout << "Error: S debe contener solo caracteres lowercase Latin (a-z)" << endl;
            continue;
        }
        
        // Validar que el tamaño de S coincide con N
        if (s.length() != n) {
            cout << "Error: La longitud de S debe coincidir con N" << endl;
            continue;
        }
        
        if (Facil(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}