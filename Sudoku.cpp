//
//  Sudoku.cpp
//  sudoku.cpp
//
//  Created by Ricardo Martínez Arquieta on 10/02/17.
//
//


#include <iostream>
using namespace std;


bool checarrows(int Arr[9][9])
{
    int M=9;
    //Leer rows
    for (int i=0; i<M; i++)
    {
        for (int j=0; j<M; j++)
        {
            for (int x=0; x<M; x++)
            {
                if (Arr[i][j]==Arr[x][j] && x!=i)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

bool checarcolumns(int Arr[9][9])
{
    int M=9;
    //Leer columnas
    for (int i=0; i<M; i++)
    {
        for (int j=0; j<M-1; j++)
        {
            for (int y=0; y<M; y++)
            {
                if (Arr[i][j]==Arr[i][y] && y!=j)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

bool checar3x3(int Arr[9][9])
{
    int M=9, i=0, j=0;
    //Checar los 9 cuadros
    for ( i=0; i<M; i++) {
        for ( j=0; j<M; j++) {
            for (int r=(i/3)*3;r<(i/3)*3+3 ;r++)
            {
                for (int c=(j/3)*3;c<(j/3)*3+3 ;c++)
                {
                    if (r!=i && c!=j && Arr[r][c]==Arr[i][j])
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

int main() {
    int iArr[9][9];
    int i = 0, j = 0;
    int suma;
    int M=9;
    
    for (i=0; i<M; i++)
    {
        for (j=0; j<M; j++)
        {
            cin >> iArr[i][j];
        }
    }
    
    suma=0;
    for (int i=0; i<M; i++)
    {
        for (int j=0; j<M; j++)
        {
            suma+=iArr[i][j];
        }
    }
    if (((suma/9==45)&&(checar3x3(iArr)==true)) && (checarrows(iArr)==true&&checarcolumns(iArr)==true))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
#include "Sudoku.hpp"
