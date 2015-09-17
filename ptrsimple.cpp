#include<iostream>
using namespace std;
void ss(int *ptr)

{
 *ptr=*ptr * *ptr;
}
int main(){
	int x=5;
	ss(&x);
	cout<<x;
}
