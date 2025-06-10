/* programa: fib1.cpp */
/* números de serie de fibonacci recursivamente */
/* serie: 0, 1, 1, 2, 3, 5, 8, 13, ... */
#include <iostream>
#include <conio.h>
using namespace std;

unsigned long int fibonacci(int);

int main()
{
    int n;
    cout << "Ingrese <n>: "; cin >> n;
    cout << "\nNumero es: " << fibonacci(n);
    return 0;
}

unsigned long int fibonacci(int n)
{
    if (n == 1) return 0;
    if (n == 2) return 1;
    return (fibonacci(n - 1) + fibonacci(n - 2));
    
}
