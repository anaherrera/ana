
#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <iostream>

using namespace std;


template<typename T>
class lista
{
    public:
        //nodo *inicio;
       // nodo *fin;
        lista();
        void  agregar(T dato);

        void borrar(const T &dato);
        void imprimir();

        //virtual ~lista();
    protected:
    private:
        nodo<T> *inicio;
        nodo<T> *fin;
        T cont;


};

#endif // LISTA_H
