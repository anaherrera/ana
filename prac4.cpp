#include<iostream>

using namespace std;

int  main()
{
    int num,f,i;

    cout<<"ingrese numero para indicarle su factorial:"<<endl;
        cin>>num;

    f=1;
    for(int i=1;i<=num;i++)

        f*=i;

    cout<<"el factorial de:"<<num<<"es:"<<f;
}
