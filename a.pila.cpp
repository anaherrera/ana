#include<iostream>
#include "a.pila.h"
using namespace std;

template<typename T>
void pila<T>::push(const T &item){
   vec.push_back(item);
   return;
}
template<typename T>
void pila<T>::pop(){
   vec.pop_back();
   return;
}
