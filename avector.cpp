
#include <iostream>
#include <math.h>
#include "avector.h"

using namespace std;
template<typename T>
void vec<T>::vec(double  T start1, end1) {

    :start(start1), end(end1) {}
}
template<typename T>
double vec<T>::distancia(){
	return sqrt(pow((start1.x1 - end1.x1),2)+ pow((start1.y1- end1.y1),2));
}
template<typename T>
void vec<T>::print(double  T start1){
	start1.printpun();

}
