#include <iostream>
using namespace std;
#include "cuadradoycubo.h"

int main()
{
	int opc=1,num;
	while(opc!=0){
		cout<<"Menu:\n 1) cuadrado_de_un_numero \n 2)cubo_de_un_numero \n 3)fibonacci_de_un_numero \n 0)finalizar \n";
		cin>>opc;
		if(opc==1){
			cout<<"ingrese un numero:";
			cin>>num;
			cout<<"el cuadrado de: "<<num<<" es "<<square(num)<<"\n";

		}
		if(opc==2){
			cout<<"ingrese un numero :";
			cin>>num;
			cout<<"el cubo de: "<<num<<" es "<<cube(num)<<"\n";


		}
		if(opc==3){
			cout<<"ingrese un numero :";
			cin>>num;
			cout<<"el fibonacci de: "<<num<<" es "<<fibonacci(num)<<"\n";


		}


	}

}

int cube(int x){
	return x*square(x);

}

int square(int y){
	return y*y;
}

int fibonacci(int n){
	if (n==0 || n==1){
		return 1;
	}
	else{
		return fibonacci(n-2)+fibonacci(n-1);
	}
}
