/* programa: base10_2.cpp */
/* recursivamente, base 10 a base 2 */
#include<iostream>
#include<conio.h>
using namespace std;

void binario(int);

int main() {
	 int n;
	 char opcion;
	do {
		   int n;
         cout << "Ingrese <n> base 10: "; cin >> n;
    	cout << "\nNumero binario: "; binario(n);cout<<endl<<endl;

        cout << "Deseas ingresar otro numero? (Y/n): ";cout<<endl<<endl;
        cin >> opcion;
    } while (opcion == 'y' || opcion == 'Y');

    return 0;
}

void binario(int n) {
    if (n > 0) {
      binario(n / 2);
        cout << (n % 2);
    }
}
