#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

void palindrome(  int vec[])
{

int h,j;

for(int i=0;i<40;i++)
{
    h=vec[i];
    j=i;
    while(j>0 and vec[j-i]>h)
    {
        vec[j] = vec[j - 1];
        j = j - 1;
    }
    vec[j] =h;


}
return ;
}
int main()
{

int  vec[]={2,4,6,8,1,0};


        palindrome( vec);
