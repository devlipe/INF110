/*  Programa para mostrar se existe um caminho entre o inicio e o fim da matriz
    Felipe P Ferreira
    20/11/2020
*/
#include<iostream>
using namespace std;

int main()
{
    int n = 0, i = 0 , j = 0;
    bool v = true;

    cin >> n;

    int mtx[n][n] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mtx[i][j];
        }
    }

    while (v && i < (n-1) && j < (n-1))
    {
        bool t = true;
        if (mtx[i+1][j] == 1)
        {
            i++;
            t = false;
        }
        else if ( mtx[i][j+1] == 1 && t)
        {
            j++;
            t = false;
        }
        else if (mtx[i+1][j+1] == 1 && t)
        {
            i++;
            j++;
        }
        else
        {
            v = false;
        }
    }

    if (v)
    {
        cout << "SIM\n";
    }
    else
    {
        cout << "NAO\n";
    }
    
    return 0;
}
