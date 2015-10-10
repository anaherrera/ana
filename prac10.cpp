#include <iostream>

using namespace std;
int main()
{

    int a[400000];
    int *num;
    cout <<"Ingrese el valor:"<<endl;
        cin>>*num;
    num=a;
    for(int i=0;i<100;i++)
    {
        num++;
    }
    num=a;
    for(int i=0;i<100;i++)
    {
                cout<<" "<<a[i]<<endl;
                num++;

              //else cout<<"el numero sale del rango";

    }

    return 0;
}
