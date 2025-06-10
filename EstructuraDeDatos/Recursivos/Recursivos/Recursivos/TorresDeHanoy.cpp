/* programa: rec1.cpp */
/* simula torres de Hanoi */
#include<iostream>
#include<conio.h>
using namespace std;
void hanoi(char, char, char, int); // prototipo

void hanoi(char a, char b, char c, int n)
{  if(n == 1)
     cout<<"Mover disco "<<n<<" desde "<<a<<" hasta "<<c<<endl;
   else
     {  hanoi(a,c,b,n-1);
        cout<<"Mover disco "<<n<<" desde "<<a<<" hasta "<<c<<endl;
        hanoi(b,a,c,n-1);
	 }     
}
int main()
{  char a='A',b='B',c='C';
   int n;
   cout<<"\n Ingrese numero de discos: ";
   cin>>n;
   hanoi(a,b,c,n);
   
   system("pause");
   return 0;
}

