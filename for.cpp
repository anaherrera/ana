include<iostream>
#include<string>
using namespace std;
void main(void)
{
    //variables
    int n,s=0,i;
    string r="";
    cout<<"numero:":
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            s+=i;
    }
    if(n==s)
        r="perfecto";
    else
     r="no es perfecto";
    cout <<"\n";
    cout<<"resultado:"<<r<<"\n";
