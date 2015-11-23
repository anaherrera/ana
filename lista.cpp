#include "lista.h"//hello
#include <iostream>
using namespace std;


template<typename T>
lista<T>::lista()
{
    inicio=fin=0;
}
void lista<T>::agregar(T dato)
{
    if(inicio)
    {
        inicio=new nodo(dato);
        fin=inicio;
    }
    else
    {
        fin->sig=new nodo(dato);
        fin=fin->sig;
    }
    cont++;
}
//return 1;

void lista<T>::imprimir()
{
   nodo*tmp=inicio;
    while(tmp)
    {
        cout<<tmp->dato<<endl;
        tmp=tmp->sig;
    }
}


   //this lista=0 //ctor

void lista<T>::Borrar(T dato) {

  nodo* tmp = inicio;
	nodo*aux = inicio;
	for (int i=0; i< cont; i++)
	{
		if (tmp->sig==dato)
		{
			while(aux->sig != tmp)
				aux=aux->sig;

			aux->sig = tmp->sig;

			delete tmp;
		}
		else
			tmp = tmp->sig;
	}

   }
