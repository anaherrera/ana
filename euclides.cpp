#include <iostream>
#include <time.h>

using namespace std;



int main()
{
	clock_t tiempo ; 
	tiempo = clock();
	int long long a , q , n , r ;
	cout << "Ingrese dos numeros: " ;
	cin >> a >> n ;
	
	q = a/n;  
	r = a-(q*n) ;

	if( q < 0 ){
		q--;
		r= n + r ;
	}

	cout << a << " = "<< q << " * " << n << " + " << r << " " << endl;
	tiempo -= clock();
	cout <<"demora: " << float(tiempo)/CLOCKS_PER_SEC << endl ;

	return 0 ;
}
