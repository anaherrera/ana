#ifndef ALISTA_H
#define ALISTA_H

#include "a.nodocola.h"
#include <iostream>

using namespace std;


template<typename T>
class cola
{
    public:
        nodo<T> *inicio;
        nodo<T> *fin;
        int  cont=0;

        cola()
        {
            inicio=fin=NULL;
        }

        void  agregar(T dato)
        {
            nodo<T>* nuevo = new nodo<T>(dato);
            if(inicio == NULL)
                {
                    fin=inicio=nuevo;
                }
            else
                {
                    fin->sig = nuevo;
                    fin = nuevo;
                }
            cont++;
        }

        void borrar()
        {
            nodo<T>* tmp = inicio;

            if (tmp == NULL)
                {
                    cout << "No existe el nodo"<< endl;
                    return ;
                }

            if(tmp == inicio)
                {
                    inicio =inicio->sig;
                }


            delete tmp;


        }

        void imprimir()
        {
            if (inicio == NULL)
                {
                    cout << "lista vacia" << endl;
                    return;
                }
            nodo<T>* tmp = inicio;
            while(tmp)
                {
                    cout<<tmp->dato<<endl;
                    tmp=tmp->sig;
                }
        }

        cola<T> operator+(const cola<T> p)
        {
            cola rpt ;
            nodo<T> *tmp;
            for(int i =0;i<cont;i++)
                tmp=inicio;
                {
                    while(tmp->sig)
                        {
                            rpt.agregar(tmp->dato);
                            tmp =tmp->sig;
                        }
                rpt.agregar(fin->dato);
                }
            for(int i =0;i<p.cont;i++)
                tmp=p.inicio;
                {
                    while(tmp->sig)
                        {
                            rpt.agregar(tmp->dato);
                            tmp =tmp->sig;
                        }
                rpt.agregar(p.fin->dato);
                }
    return rpt;
	}

	cola<T> operator -(const cola<T>  p)
	{
        cola rpt ;
        nodo<T> *tmp;
        if(cont == p.cont)
        {
            for(int i =0;i<cont;i++)
                tmp=inicio;
                {
                    while(tmp->sig)
                    {
                        rpt.agregar(tmp->dato-p.inicio->dato);
                        tmp =tmp->sig;
                    }
                rpt.agregar(fin->dato-p.fin->dato);
                }

            return rpt;
        }
        cout<<"el tamanio de las colas  no coinciden"<<endl;
	}
};

#endif // LISTA_H

