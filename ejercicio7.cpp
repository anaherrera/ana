#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

void palindrome( char palabra[100])
{


    int i, a, c;

    cout<<"Escriba la palabra: ";
    cin>>palabra;

    a =  strlen(palabra);

    for (i=0;i<a;i++){
        if (palabra[i] != palabra[a-1]){

            cout<<"no es palindrome"<<palabra;

        }
         a--;
    }

    cout<<" es un palindromo"<<palabra;

//    return 1;
}
int main()
{
    char palabra[100];
    int a;
    for(int i=10;i<99;i++)
    {
     for(int j=10;j<99;j++)
     {
         a=i*j;

         palindrome(palabra);
     }
    }



}


