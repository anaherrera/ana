#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include <iostream>

int palindrome(char * principio, char * final){
if( (*principio) != (*final) )
return 0;
else
return palindrome(++principio, --final);
}

main()
{
char cadena[20];
char * final;

cout<<"ingrese cadena";
cin>>cadena;

final= cadena+strlen(cadena) - 1;

if (palindrome(cadena, final))
cout<<"Es palindrome ";
else
cout<<"No es palindrome ";
return 0;
}
