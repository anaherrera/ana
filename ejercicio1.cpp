#include <iostream>
using namespace std;
#define  TAM 8
int main() {

	int ana[8],i;
	cout << "ingrese los numero :" << endl;

        for(int i = 0; i < 8; i++)
            cin >> ana[i];

	cout << "los valores en orden inverso son:";
        for(int i = TAM; i>=0; i--)
            cout << " " << ana[i];
            cout << endl;
}
