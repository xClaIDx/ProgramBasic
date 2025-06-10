/* programa insercion.cpp */
/* ordenamiento: insercion sort */

#include <iostream>
#include <stdio.h>

#define max 50

using namespace std;

void leerArray(int, float[]);
void insercion(int, float[]);
void muestraArray(int, float[]);

int main()
{
    float x[max];
    int n;

    cout << "Numero de datos <n>: ";
    cin >> n;

    leerArray(n, x);
    insercion(n, x);

    cout << endl << "Elementos ordenados " << endl;
    muestraArray(n, x);

    return 0;
}

void insercion(int n, float x[])
{
    int i, j;
    float temp;

    for (i = 1; i < n; i++)
    {
        temp = x[i];
        for (j = i - 1; j >= 0 && temp < x[j]; j--)
        {
            x[j + 1] = x[j];
        }
        x[j + 1] = temp;
    }
}

void leerArray(int n, float array[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese elemento " << i + 1 << ": ";
        cin >> array[i];
    }
}

void muestraArray(int n, float array[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "Elemento " << i + 1 << " = " << array[i] << endl;
    }
}