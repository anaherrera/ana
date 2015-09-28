#include <iostream>
using namespace std;


int main(){
    int m3,m5;
    m3=0;
    m5=0;
    for(int i = 1; i < 1000; i++){
    //cout<<i;
        if(i%3==0)
            m3=m3+i;
            //cout<<i;
        if(i%5==0)
            m5=m5+i;
           //cout<<i;
    }
    cout<<m3+m5;

}

