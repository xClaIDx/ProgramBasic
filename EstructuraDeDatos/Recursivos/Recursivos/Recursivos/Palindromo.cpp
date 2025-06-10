// programa: invLetra.cpp
// recursivamente invierte letras de una frase
#include <iostream>
#include <string.h>
#include <conio.h>
            
using namespace std;

void invierteFrase(char[], int);

int main() {
    char frase[50], strLen[50];
    cout << "Ingrese una frase: ";
    cin.get(frase, 50);
    invierteFrase(frase, strlen(frase));

    return 0;
}

void invierteFrase(char frase[], int n) {
    if(n > 0) {
        cout << frase[n - 1];
        invierteFrase(frase, n - 1);
    }
}
