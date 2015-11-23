#include <iostream>
using namespace std;
# include"alista.h"
int main()
{
    lista<int> a;
    a.agregar(5);
    a.agregar(8);
    cout<<"la lista a es:"<<endl;
    a.imprimir ();

    lista<int> b;
    b.agregar(2);
    cout<<"la lista b es:"<<endl;
    b.imprimir ();

    lista<int> c;
    c=a;
    c=c-b;
    cout<<"la resta de la lista a-b es"<<endl;
    c.imprimir();

    lista<int> d;
    d=a;
    d=d+b;
    cout<<"la suma de la lista a+b es"<<endl;
    d.imprimir();


}
