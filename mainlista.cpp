#include <iostream>//importar un archivo
using namespace std;//buscar un archivo
# include"lista.h"
int main()
{
    lista<int> a;
    a.agregar(3);
    a.agregar(4);
    a.agregar(333);
    a.agregar(56);
    a.agregar(78);
    a.agregar(111);

    a.imprimir ();
    //a.borrar(4);
    return 0;

}
