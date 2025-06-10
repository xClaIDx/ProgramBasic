/* programa: mcd2.cpp */
/* recursivamente: MCD de 2 números */
#include <iostream>
#include <conio.h>
using namespace std;

int mcd(int, int);

int main()
{
    int a, b, m;
    cout << "Ingrese a: "; cin >> a;
    cout << "Ingrese b: "; cin >> b;
    if (a > b)
        m = mcd(a, b);
    else
        m = mcd(b, a);
    cout << "MCD = " << m;
    return 0;
}

int mcd(int a, int b)
{
    if (a % b == 0) return b;
    else return mcd(b, a % b);
}
