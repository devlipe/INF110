/*  Programa com funcao recursiva para mostrar o mairo elemento da array
    Felipe P Ferreira
    20/11/2020
*/

#include<iostream>
using namespace std;

int maior (int v[], int posicao, int n, int max)
{
    if (posicao == n)
    {
        return max;
    }
    if (max < v[posicao])
    {
        max = v[posicao];
    }
    return (maior(v, posicao+1, n, max));
}

int main()
{
    int n = 0;
    cin >> n;
    int v[n] = {0};
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << maior(v, 0, n, v[0]) << endl;
    return 0;
}
