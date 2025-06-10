#include<iostream>
#define max 50
using namespace std;

void leerArray(int, float []);
void shell(int, float []);
void muestraArray(int, float []);

int main()
{
    float x[max]; int n;
    cout<<"Numero de datos <n>: "; cin>>n;
    leerArray(n,x);
    shell(n,x);
    cout<<endl<<"Elementos ordenados "<<endl;
    muestraArray(n,x);
    return 0;
}

void shell(int n, float x[])
{
    int i,salto,bandera; float temp;
    for(salto=n/2;salto>0;salto=salto/2)
        do { bandera=0;
            for(i=0;i<n-salto;i++)
                if(x[i] > x[i+salto])
                { temp = x[i];
                  x[i] = x[i+salto];
                  x[i+salto] = temp;
                  bandera = 1;
                }
        } while(bandera);
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
        cout<<"Elemento "<<i+1<<" = "<<array[i]<<endl;
}