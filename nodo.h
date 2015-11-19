
template<typename T>//template>class T>
class nodo
{
    public:
        nodo(T dato);
        //virtual ~nodo();
    //protected:
    private:
        T dato;
        nodo<T> *sig;
};

#endif // NODO_H
