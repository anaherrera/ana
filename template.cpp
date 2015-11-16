#include <iostream>
#include <math.h>


using namespace std;

template <typename A,typename B>

 B sum(const A a, const B b)
{
    return a + b;
 }


int main ()
{

    //cout<< sum<int>(1,2) <<endl;
    //cout << sum<float>(3.2,5.4)<< endl;

    cout<< sum(1,2.3) <<endl;
   // cout << sum(3.2,5)<< endl;

    return 0;
    }
