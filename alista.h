#ifndef ALISTA_H
#define ALISTA_H
#include "anodo.h"
#include <iostream>

using namespace std;

template<typename T>
class lista
{
    public:
        nodo<T> *inicio;
        nodo<T> *fin;
        int  cont=0;

        lista()
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
        nodo<T>* find(T dato)
            {
                nodo<T> *tmp;
                tmp =inicio;
                while(tmp && tmp-> dato!=dato)
                    {
                        tmp =tmp->sig;
                    }
                return tmp;
            }

        void borrar(const T dato)
            {   cout<<dato<<endl;
                nodo<T>* tmp = inicio;
                nodo<T>* aux = inicio;
                tmp=find(dato);
              // while(tmp->dato==dato){
                cout<<tmp->dato<<endl;

                if (tmp == NULL)
                    {
                        cout << "No existe el nodo"<< endl;
                        return ;
                    }
                if(tmp == inicio)
                    {
                        inicio =inicio->sig;
                    }
                else
                    {
                        while(aux->sig!=tmp)
                            {
                                aux=aux->sig;
                            }
                        aux->sig = tmp->sig;
                    }

                delete tmp;
                //}
                cout<<"VV"<<endl;
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

        lista<T> operator+(const lista<T> p)
            {
                lista rpt ;
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

        lista<T> operator -(const lista<T>  p)
            {
                lista rpt ;
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
                cout<<"el tamanio de las lista no coinciden"<<endl;
	}
};

#endif // LISTA_H
