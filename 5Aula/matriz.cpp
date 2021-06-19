/*  Exercicio sobre matriz
    Felipe P Ferreira
    08/10/2020
*/

#include<iostream>
using namespace std;

int main(void)
{
    int n = 0, i = 0, j = 0, total = 0, cont = 0, diagonalp = 0, diagonals = 0;
    double media = 0;
    cout << "qual o tamanho da matriz?\n";
    cin >> n;

    int matriz[n][n] = {{0}};

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
        }
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            total += matriz[i][j];
        }
    }
   
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (i == j)
            {
                diagonalp += matriz[i][j];
            }
        }
    }
    media = (total/(n*n));
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (matriz[i][j] < media)
            {
                ++cont;
            }
        }
    } 
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (((i + j) == (n + 1)) || ((i == 0) && (j == (n-1))))
            {
                diagonals += matriz[i][j];
            }
        }
    } 
    
    cout << " a media e " << media << endl;
    cout << "Temos "<< cont << "Elementos a baixo da media\n";
    cout << "A soma da diagonal principal e " << diagonalp << endl;
    cout << "A soma da diagonal secundaria e " << diagonals << endl;
    return 0;
}

