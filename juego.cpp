#include<iostream>
#include<string>
using namespace std;
#include "bm.h"



void coutmat(string  mat[10][10])
{
    string c;
    for( int i=1;i<=10;i++)
    {
        c="";
        for( int j=1;j<=10;j++)
        {
            c+= "|" + mat[i][j];
        }
        c+="|";
    }
 //print c
}
//printMat(l2)
void  barco(string  mat[10][10],int m,int d,int a,int b)
{
    //int m,d,a,b;

   /*cout<< "usted puede ingresar 3 barcos";
   cout<<"ingrese la medida del barco";
   cin>>m;
   cout<<"decea que la posicion del barco sea: H:1,V:0";
   cin>>d;
   cout<<"indique la cordenada x";
   cin>>a;
   cout<<"indique la cordena y";
   cin>>b;
   #l2[a-1][b-1]="a"*/
    if (a+m>10 or a+m<1)
    {
        cout<< "vuelva a ingresar cordenada";
        cout<<"indique la cordenada x";
            cin>>a;
        cout<<"indique la cordena y";
            cin>>b;
    }
    if (b+m>10 or b+m<1)
    {
        cout<<"vuelva a ingresar cordenada";
        cout<<"indique la cordenada x";
            cin>>a;
        cout<<"indique la cordena y";
            cin>>b;
    }
    if (a>10 or b>10)
    {
        cout<<"vuelbaq a ingresar coo  la tabla es de 10*10";
        cout<<"indique la cordenada x";
            cin>>a;
        cout<<"indique la cordena y";
            cin>>b;
    }
    else
    {
        if (d==0)//horizontal
        {
            mat[a-1][b-1]='x';
            for( int i=1;i<=m;i++)
            {
                mat[a-1][b+i-1]='x';
            }
        }
        if (d==1)//vertical
        {
            mat[a-1][b-1]='x';
                for( int i=1;i<=m;i++)
                {
                    mat[a+i-1][b-1]='x';
                }
        }
   }
}

/*void  cantbarcos( string mat[10][10])
{
    int c;
    c=1;
    while (c<=3)
    {
        string  barco( string   mat);
        c=c+1;
    }
    cout<<  coutmat(  mat[10][10]);
}
*/

   void disparos( int p,int q,string   mat[10][10])
    {
    int k;
    k=1;
    while (k==1)
    {
    /*cout<<"ingrese disparo de la coode  en x";
    cin>>p;
    cout<<"ingrese diaparo en la coorde  en y";
    cin>>q;
*/
        if (  mat[p-1][q-1]=='x')
        {
            cout<<"muerto";
            cout<<"coincidio disparo al al barco bravoooooooo";


            //cout<< coutmat(mat[10][10]);
            k=0;
        }

        else
        {
            cout<<"dipare otra vez";
            k=1;
        }
    }
}


int main()  {
   /* int mat[]={{2,0,0,0,0,0,0,0,0,0},
      {0,5,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,4,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,2,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,8,0}};*/
       string  mat[10][10]={"o"};
    int p,q,m,d,a,b;

    cout<< "usted puede ingresar 3 barcos";
    cout<<"ingrese la medida del barco";
        cin>>m;
    cout<<"decea que la posicion del barco sea: H:1,V:0";
        cin>>d;
    cout<<"indique la cordenada x";
        cin>>a;
    cout<<"indique la cordena y";
        cin>>b;
    //cantbarcos( mat);
    cout<<"ingrese disparo de la coode  en x";
        cin>>p;
    cout<<"ingrese diaparo en la coorde  en y";
        cin>>q;
    disparos(p,q,mat);
}
