
#include <iostream>
#include "gomoku.h"
using namespace std;

const int n=6;
const int m=8;

bool sobranEspaciosLibres(int tablero[n][m])
{
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(tablero[i][j] == 0)
            {
                //Sobran espacios donde colocar fechas
                //cout<<"Hay espacios"<<endl;
                return true;
            }
        }
    }

    //No sobran mas espacios donde colocar fichas, juego empatado
    cout<<"No hay mas espacios: empate"<<endl;
    return false;
}

void ImprimirTablero(int tablero[n][m])
{
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(tablero[i][j] == 1)
            {
                cout<<"| O ";
            }
            else if(tablero[i][j] == 2)
            {
                cout<<"| X ";
            }
            else
            {
                cout<<"| . ";
            }

        }
        cout<<" |";
        cout<<endl;
    }
}

int ColocarFichaEn(int tablero[n][m], int columna)
{
    for(int i = 0; i < n; i++)
    {
        if(i+1 < n)
        {
            if( tablero[i+1][columna] != 0 )
            {
                return i; //posicionamos  la ficha en la ultima posicion
            }
        }
        else
        {
            //Alcanzo la tope del tablero
            if(tablero[i][columna] == 0)
            {
                return i;
            }
        }
    }

    return -1;
}

bool columnaATope(int tablero[n][m], int columna)
{
    if(tablero[0][columna] != 0)
    {
        cout<<"No hay espacio "<<endl;
        return true;
    }
    return false;
}

bool ganador(int tablero[n][m], int fila, int columna, int jugador)
{
    //Vertical
    bool encontrado = false;//inicializamos encontrado  en falso
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        //cout<<"i: "<<i<<endl;
        if(encontrado)
        {
            if(tablero[i][columna] == jugador)
            {
                total++;
            }
            else
            {
                encontrado = false;
                total = 0;
            }
        }
        if(tablero[i][columna] == jugador && !encontrado)
        {
            encontrado = true;
            total++;
        }

        if(total == 4)
        {
            cout<<"El jugador "<<jugador<<" gana!"<<endl;
            return true;
        }
    }

    //Horizontal
    encontrado = false;
    total = 0;

    for(int i = 0; i < m; i++)
    {
        //cout<<"i: "<<i<<endl;
        if(encontrado)
        {
            if(tablero[fila][i] == jugador)
            {
                total++;
            }
            else
            {
                encontrado = false;
                total = 0;
            }
        }
        if(tablero[fila][i] == jugador && !encontrado)
        {
            encontrado = true;
            total++;
        }

        //cout<<"total: "<<total<<endl;
        if(total == 4)
        {
            cout<<"El jugador "<<jugador<<" gana!"<<endl;
            return true;
        }
    }


    return false;
}

int main()
{
    int matriz[n][m];

    //Preparamos el tablero del juego rellenandolo con 0's
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            matriz[i][j] = 0;
            //cout<<matriz[i][j]<<" ";
        }
        //cout<<" "<<endl;
    }

    //el  juego
    int jugador = 0;
    int ultimo = 0;
    do
    {
        int colocarColumna = 0;
        bool columnaTope = true;

        if(ultimo == 1)
        {
            jugador = 2;
        }
        else
        {
            jugador = 1;
        }

        do
        {
            cout<<"Turno del jugador "<<jugador<<","<<ultimo<<" - Elije un numero del 0-7 "; cin>>colocarColumna; cout<<endl;

            columnaTope = columnaATope(matriz,colocarColumna);
        }
        while((colocarColumna < 0 and colocarColumna > 7) and columnaTope);

        int colocarFila = ColocarFichaEn(matriz,colocarColumna);
        matriz[colocarFila][colocarColumna] = jugador;
        ImprimirTablero(matriz);

        //Revisar si hay un 4 en raya
        if(ganador(matriz,colocarFila,colocarColumna,jugador))
        {
            break;
        }

        ultimo = jugador;
        jugador++;
    }
    while(sobranEspaciosLibres(matriz));

    return 0;
}
