#include <iostream>
using namespace std;

int main() {
	int Array[2][4];
	Array[0][0] = 6;
	Array[0][1] = 0;
	Array[0][2] = 9;
	Array[0][3] = 6;
	Array[1][0] = 2;
	Array[1][1] = 0;
	Array[1][2] = 1;
	Array[1][3] = 1;

for(int i = 0; i < 2; i++) 
	for(int j = 0; j < 4; j++)
		cout << Array[i][j]<<endl;

	cout << endl;
	return 0;
}
