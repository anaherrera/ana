#include <stdio.h>

#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

void no_repetitions( string frase)
{
int j,i,h,n;
bool temp = false;
j = frase.length();
    //h = nuevo.length();

    for(i=0;i<j;i++)

    {
       for(n=1;n<j;n++)
       {
           //cout<<palabra[i]<<"..."<<"=i"<<endl;
           //cout<<nuevo[n]<<"---"<<"=n"<<endl;

           if(frase[i]==frase[n]);
           {
               cout<<frase.substr(i,1)<<endl;
           }

        cout<<frase;
       }
    }
}
int main()
{

    string frase;
    cout<<"ingrese frase:";
        cin>>frase;

    no_repetitions(frase);


}
