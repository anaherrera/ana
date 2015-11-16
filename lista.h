#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <iostream>

using namespace std;

class lista
{
    public:
        //nodo *inicio;
       // nodo *fin;
        lista();
        bool  agregar(int);

        bool borrar(int);
        bool imprimir();

        //virtual ~lista();
    protected:
    private:
        nodo *inicio;
        nodo *fin;

};

#endif // LISTA_H
