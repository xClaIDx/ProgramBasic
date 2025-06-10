// programa burbuja.cpp
/* ordenamiento: bubble sort */
#include<iostream>
#include<iomanip>
using namespace std;
#define max 50
int n;
void leerArray(int, float []);
void burbuja(int, float []);
void muestraArray(int, float []);
int main()
{
    float x[max]; int n;
    cout<<"Numero de datos (n): "; cin>>n;
    leerArray(n,x);
    burbuja(n,x);
    cout<<endl<<"Elementos ordenados "<<endl;
    muestraArray(n,x);
    return 0;
}

void burbuja(int n, float x[])
{
    int i,j; float temp;
    for(i=1;i<n;i++)
        for(j=n-1;j>=i;j--)
            if(x[j-1] > x[j])
            {
                temp=x[j-1];
                x[j-1]=x[j];
                x[j]=temp;
            }
}

void leerArray(int n, float array[])
{
    for(int i=0;i<n;i++)
    {
        cout<<"Ingrese elemento "<<i+1<<": ";
        cin>>array[i];
    }
}

void muestraArray(int n, float array[])
{
    int i;
    for(i=0;i<n;i++)
        cout<<"Elemento "<<i+1<<": "<<array[i]<<endl;
}
