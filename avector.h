#include "apunto.h"
template<typename T>
class vec{
    public:
    // Constructor
      vec(punto start, punto end);
      double distancia();
      void print();

	private:
		 T punto start,end;
		//double distancia();
		//void print();
};
