
#include <iostream>
#include <math.h>
#include "avector.h"

using namespace std;

void vector::vector(double start1, end1) {

    :start(start1), end(end1) {}
}

double vector::distancia(){
	return sqrt(pow((start1.x1 - end1.x1),2)+ pow((start1.y1- end1.y1),2));
}

void vector::print(double start1){
	start1.printpun();

}
