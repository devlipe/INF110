/*  Calcular se uma matriz e inversa ou nao
    Felipe P Ferreira
    20/11/2020
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 0, soma = 0;
    bool t = true;

    cin >> n;

    int a[n][n] = {{0}},b[n][n] = {{0}}, c[n][n] = {{0}};

    for (int i=0; i < n; i++)
    {    
        for (int j=0; j < n; j++)
        {  
            cin>>a[i][j];
        }
    }

    for (int i=0; i < n; i++)
    {    
        for (int j=0; j < n; j++)
        {   
            cin>>b[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }            
        }
    }

    for (int i=0; i < n; i++)
    {    
        for (int j=0; j < n; j++)
        {   
            soma += c[i][j];
            if (c[i][i] != 1)
            {
                t = false;
            }
            
        }
    }
    if (soma == n && t)
    {
        cout << "SIM\n";
    }
    else
    {
        cout << "NAO\n";
    }

    return 0;
}