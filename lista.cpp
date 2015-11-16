#include "lista.h"
#include <iostream>
using namespace std;

lista::lista()
{
    inicio=fin=0
}
bool lista::agregar(int dato)
{
    if(inicio)
    {
        inicio=new nodo(dato);
    }
    else
    {
        fin->sig=new nodo(dato);
        fin=fin->sig;
    }

}
//return 1;
{
bool lista::imprimir()
    nodo*tmp=inicio;
    while(tmp)
    {
        cout<<tmp->dato<<endl;
        tmp=tmp->sig;
    }

   //this lista=0 //ctor
}
void lista::Borrar(int dato) {

   }
