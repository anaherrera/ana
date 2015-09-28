#include <iostream>
using namespace std;
void ordenar(int ana[]) {
int i,j,tem;

  for(i=0;i<7;i++){
   for(j=i+1;j<7;j++)

   {
   if (ana[i]>ana[j])
   {
     tem=ana[i];
     ana[i]=ana[j];
     ana[j]=tem;
     
   }
  }
 
}
return ;
}

int main() {

	int ana[7],i;
	cout << "ingrese los numero :" << endl;

	for(int i = 0; i < 7; i++)
		cin >> ana[i];

	cout << "los valores son:";
	for(int i = 0; i < 7; i++)
		cout << " " << ana[i];
	cout << endl;

	ordenar(ana);
	cout<<"el numero menor es:"<<ana[0]<<endl;
	cout<<"el numero mayor es:"<<ana[6]<<endl;
        
        
}
	
