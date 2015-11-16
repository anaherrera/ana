#include<iostream>
#include <vector>
using namespace std;

template<typename T>
class pila{

   private:

      vector<T>vec;

   public:

        void push(const T &item){vec.push_back(item);}
        void pop(){ vec.pop_back();}
        vector<T> get_vector(){
        return vec;
        }
        pila operator +(pila b){
            pila c;
            for(int i=0;i<vec.size();i++){
                c.push(vec[i]);
            }
            for(int i=0;i<b.get_vector().size();i++){
                c.push(b.get_vector()[i]);
            }
            return c;
      }

};
