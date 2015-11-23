#ifndef NODO_H
#define NODO_H

template<typename T>
class nodo
{
    public:
        nodo(T dato)
        {
            this->dato=dato;
            this->sig = 0;
        }

        T dato;
        nodo<T> *sig;

};

#endif // NODO_H
