
#include <iostream>
using namespace std;
int main(){
int a,i;
bool flag;
a=0;
i=2520;
flag=true;
while(i>0 and flag==true)
//for(int  long i=2520;i<2526;i++)
//n=2520;
{
    cout<<endl;
    for(int j=1,a=0;j<21;j++)
        {

            if(i%j==0)
            {
                a=a+1;
                //cout<<a<<"   ";
            }
            if(a==20)
            {
            cout<<i<<"es divisible con cada numero del 1-20";
            j=22;
            flag=false;
            }
        }
        i++;

}


    }



