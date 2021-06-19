/*  programa que le uma matriz de dimensoes M × N e um valor V e informe quantas vezes este valor aparece em cada linha da matriz.
    Felipe P Ferreira
    06/11/2020
*/

#include <iostream>
using namespace std;

int main()
{
    int M = 0 , N = 0, V = 0, cont = 0; 
    cin >> M >> N;
    int matriz[M][N] = {0};

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matriz[i][j];
        }
    }

    cin >> V;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (matriz[i][j] == V)
            {
                cont++;
            }
        }
        cout << cont << endl;
        cont = 0;
    }
    
    return 0;
}
