/* programa quick.cpp */
/* ordenamiento: quick sort */
#include<iostream>
#include<stdio.h>
#define max 50
using namespace std;
void leerArray(int, float []);
void quick(int, int, float []);
void muestraArray(int, float []);
int main()
{ float x[max]; int n;
  cout<<"Numero de datos <n>: "; cin>>n;
  leerArray(n,x);
  quick(0,n-1,x);
  cout<<endl<<"Elemento ordenados "<<endl;
  muestraArray(n,x);
  return 0;
}
void quick(int primero, int ultimo, float x[])
{ int i=primero; int j=ultimo; float temp;
  float central=x[(primero + ultimo)/2];
  do { while(central>x[i]) i++;
       while(central<x[j]) j--;
       if(i<=j)
       { temp = x[i];
         x[i] = x[j];
         x[j] = temp; i++; j--;
       }
  } while(i<=j);
  if(primero<j) quick(primero,j,x);
  if(ultimo>i) quick(i,ultimo,x);
}
void leerArray(int n, float array[])
{ for(int i=0;i<n;i++)
  { cout<<"Ingrese elemento "<<i+1<<": ";
    cin>>array[i];
  }
}
void muestraArray(int n, float array[])
{ int i;
  for(i=0;i<n;i++)
    cout<<"Elemento "<<i+1<<" = "<<array[i]<<endl;
}