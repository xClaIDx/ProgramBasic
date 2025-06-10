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
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        if (Facil(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}