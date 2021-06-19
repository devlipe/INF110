/*  Campo Minado Programa que, dado o tamanho do tabuleiro e as posicoes das bombas mostre a configuracao final do jogo 
    Felipe P Ferreira
    06/11/2020
*/

#include <iostream>
using namespace std;

int main()
{
    int M = 0, N = 0, B = 0;
    cin >> M >> N >> B;
    M = M+2;
    N = N+2;

    int a[M][N];
    for (int z = 0; z < M; z++)
    {
        for (int x = 0; x < N; x++)
        {
            a[z][x] = 0;
        }
    }
    for (int i = 0; i < B; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        a[x][y] = -10;
        
        a[x-1][y-1] += 1;
        a[x][y-1] += 1;
        a[x+1][y-1] += 1;
        a[x-1][y] += 1;
        a[x+1][y] += 1;
        a[x-1][y+1] += 1;
        a[x][y+1] += 1;
        a[x+1][y+1] += 1;
    }
    for (int p = 1; p < M-1; p++)
    {
        for (int k = 1; k < N-1; k++)
        {
            if (a[p][k] < 0)
            {
                cout << "B";
            }
            else if (a[p][k] == 0)
            {
                cout << "-";
            }
            else
            {
                cout << a[p][k];
            }
        }
        cout << endl;
    }
    return 0;
}