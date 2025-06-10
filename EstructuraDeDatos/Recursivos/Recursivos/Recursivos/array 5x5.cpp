#include <iostream>
using namespace std;

int main() {

    int a,b;
    cin>> a ;
    cin >> b;
    int matriz[a][b];
    
    
    int mayor, menor;
    
   
    int semilla = 9;  
    
    cout << "=== GENERANDO MATRIZ 5x5 CON NUMEROS ===" << endl << endl;
    
   
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            
            semilla = (semilla * 13 + 7) % 100;  
            if(semilla == 0) semilla = 1;  
            matriz[i][j] = semilla;
        }
    }
    
    cout << "MATRIZ GENERADA:" << endl;
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cout << matriz[i][j] << "\t";  
        }
        cout << endl;  // Salto de l�nea al final de cada fila
    }
    
    // Inicializar mayor y menor con el primer elemento
    mayor = matriz[0][0];
    menor = matriz[0][0];
    
    // Buscar el mayor y menor n�mero en toda la matriz
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }
            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
    
    // Mostrar resultados
    cout << endl << "=== RESULTADOS ===" << endl;
    cout << "El numero MENOR es: " << menor << endl;
    
    return 0;
}
