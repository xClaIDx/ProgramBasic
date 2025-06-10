#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
   
    int matriz[a][a];
    
    int mayor, menor;
    
    int fila_mayor, columna_mayor;
    int fila_menor, columna_menor;
    
    int semilla = 7;  
    
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) {
            semilla = (semilla * 13 + 7) % 100;  
            if(semilla == 0) semilla = 1;  
            matriz[i][j] = semilla;
        }
    }
    
    cout << "MATRIZ GENERADA:" << endl;
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) {
            cout << matriz[i][j] << "\t";  
        }
        cout << endl;  
    }
    
    mayor = matriz[0][0];
    menor = matriz[0][0];
    fila_mayor = 0;
    columna_mayor = 0;
    fila_menor = 0;
    columna_menor = 0;
    
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) {
            if(matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                fila_mayor = i;
                columna_mayor = j;
            }
            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
                fila_menor = i;
                columna_menor = j;
            }
        }
    }
   cout << "\nSuma de cada columna:" << endl;
    for (int j = 0; j < a; j++) {
        int sumaC = 0;
        for (int i = 0; i < a; i++) {
            sumaC += matriz[i][j];
        }
        cout << "Columna " << j + 1 << ": " << sumaC<< endl;
    }
    cout << "\nSuma de cada fila:" << endl;
    for (int i = 0; i < a; i++) {
        int sumaF = 0;
        for (int j = 0; j < a; j++) {
            sumaF += matriz[i][j];
        }
        cout << "Fila " << i + 1 << ": " << sumaF << endl;
    }
  
    cout << "max " << mayor<< "(" << fila_mayor + 1 <<";"<< columna_mayor+1<< ")"<< endl;
    
    cout << "min " << menor << "(" << fila_menor + 1 <<";"<< columna_menor+1<< ")"<< endl;
   
    return 0;
}
