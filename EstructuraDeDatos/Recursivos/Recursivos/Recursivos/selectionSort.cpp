// Programa seleccion.cpp */
/* ordenamiento: seleccion_sort */
#include<iostream>
#define max 50
using namespace std;
void leerArray(int, float []);
void seleccion(int, float []);
void muestraArray(int, float []);
int main()
{
    float x[max]; int n;
    cout<<"Numero de datos <n>: "; cin>>n;
    leerArray(n,x);
    seleccion(n,x);
    cout<<endl<<"Elemento ordenados "<<endl;
    muestraArray(n,x);
    return 0;
}

void seleccion(int n, float x[])
{
    int  i,j,k; float temp;
    for(i=0;i<n-1;i++)
    {
        k=i; temp=x[i];
        for(j=i+1;j<n;j++)
            if(x[j] < temp)
            {
                k=j;
                temp=x[j];
            }
        x[k]=x[i];
        x[i]=temp;
    }
}
void leerArray(int n, float x[])
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"x["<<i<<"] = "; cin>>x[i];
    }
}
void muestraArray(int n, float x[])
{
    int i;
    for(i=0;i<n;i++)
        cout<<x[i]<<" ";
}