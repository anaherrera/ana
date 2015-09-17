#include <iostream>
#include <stdio.h>
using namespace std;

void ordenar(int vect[]) {
 int i,j,tem;

  for(i=0;i<10;i++){
   for(j=i+1;j<10;j++)

   {
   if (vect[i]>vect[j])
   {
     tem=vect[i];
     vect[i]=vect[j];
     vect[j]=tem;
     
   }
  }
 
}
return ;
}


int main()
{
	int vect[10],i;
	
	for(i=0;i<10;i++)
	{
         cin>>vect[i];
         }

        ordenar(vect);

	for(i=0;i<10;i++)
        {
        cout<<vect[i]<<endl;
        }
	
	return 0;

}
