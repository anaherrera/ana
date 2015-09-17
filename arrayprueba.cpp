#include <iostream>
using namespace std;


int main() {

	int arr[4],i;
	cout << "ingrese los numero s  del array:" << endl;

	for(int i = 0; i < 4; i++)
		cin >> arr[i];

	cout << "los valores del array son:";
	for(int i = 0; i < 4; i++)
		cout << " " << arr[i];
	cout << endl;
	return 0;
}
