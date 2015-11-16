#include <iostream>
#include "apunto.h"
#include <math.h>

using namespace std;
template<typename T>
void punto<T>::punto(double  T x1, double T y1) {
   :x(x1), y(y1) {}
   //x = x1;
   //y = y1;

}

template<typename T>
void punto<T>::printpun(double T  x1, double  T y){
	cout<<"la coor en x del primer punto es:"<<x1<<endl;
	cout<<"la coor en y del primer punto es:"<<y1<<endl;
}

