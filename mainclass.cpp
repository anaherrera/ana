#include <iostream>
#include "avector.h"
using namespace std;
int main(){


	vector vec1;
	vec1.start1.x1=0;
	vec1.start1.y1=0;

	vec1.end1.x1=3;
	vec1.end1.y1=4;

	double distancia=vec1.distancia();
	cout<<distancia<<endl;

	vec1.print();
}
