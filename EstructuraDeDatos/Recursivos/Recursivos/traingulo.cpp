#include <iostream>
using namespace std;

int main() {
    
    int n ;
    cin >> n ;
    
    for(int i = 1; i <= n; i++) {
        
        for(int esp = 1; esp <= (n - i) * 2; esp++) {
            cout << " ";
        }
        
        for(int j = 1; j <= i; j++) {
            cout << j;
            if(j < i) {
                cout << "   ";
            }
        }
        
        cout << endl;
    }
    
    return 0;
}

