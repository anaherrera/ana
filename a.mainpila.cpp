# include <iostream>
#include "a.pila.h"
using namespace std;

int main(){
	pila<int> a;
	pila<int> b;
	a.push(3);
	a.push(4);
	a.push(5);
	b.push(8);
	b.push(5);
	b.push(6);
	b.pop();
	vector<int>veca(a.get_vector());
	vector<int>vecb(b.get_vector());
	for(int i=0;i<veca.size();i++){
		cout<<veca[i]<<",";
	}
	cout<<endl;
	for(int i=0;i<vecb.size();i++){
		cout<<vecb[i]<<",";
	}
	cout<<endl;
	pila<int> c;
	c=a+b;
	for(int i=0;i<c.get_vector().size();i++){
		cout<<c.get_vector()[i]<<",";
	}

	return 0;
}
