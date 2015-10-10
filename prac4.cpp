
#include <iostream>
#define d 2
using namespace std;
int main(){
    int i, j, k, a[d][d], b[d][d], c[d][d];
    cout << "matriz b" << endl;

    for(i = 0 ; i < d ; i++){
        for(j = 0 ; j < d ; j++){
     cout << "Introduzca el valor  [" << i << "]["
      << j << "]: ";
     cin >> a[i][j];
 }
    }
    cout << endl;


    cout << "matriz b" << endl;

    for(i = 0 ; i < d ; i++){
        for(j = 0 ; j < d ; j++){
            cout << "Introduzca el valor [" << i << "]["
                    << j << "]: ";
            cin >> b[i][j];
        }
    }
    cout << endl;

  for(i=0;i<d;i++){ //multiplicacion
      for(j=0;j<d;j++){
          c[i][j]=0;
          for(k=0;k<d;k++){
              c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
          }
      }
  }
  cout << endl << "MATRIZ C (Matriz A*B)." << endl;
  cout << endl;
  for(i=0;i<d;i++){
      for(j=0;j<d;j++){
          cout << c[i][j] << " ";
          if(j==2)
             cout << endl;
      }
  }

  return 0;
  }



