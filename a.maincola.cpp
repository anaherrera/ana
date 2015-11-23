#include <iostream>
using namespace std;
# include"a.cola.h"
int main()
{
    cola<int> a;
    a.agregar(5);
    a.agregar(8);
    cout<<"la cola a es:"<<endl;
    a.imprimir ();

    cola<int> b;
    b.agregar(2);
    b.agregar(3);
    b.agregar(4);
    cout<<"la cola b es:"<<endl;
    b.imprimir ();

    b.borrar();
    cout<<endl;
    b.imprimir();

    cola<int> c;
    c=a;
    c=c-b;
    cout<<"la resta de la cola a-b es"<<endl;
    c.imprimir();

    cola<int> d;
    d=a;
    d=d+b;
    cout<<"la suma de la cola a+b es"<<endl;
    d.imprimir();


}
