/* Programa para o governo de portugal para mostrar quais nao sao brasileiros
    Felipe P Ferreira
    16/10/2020
*/
#include<iostream>
using namespace std;

int main()
{
    long long int linhas[20] = {0};
    bool t = true;
    int i = 0, k = 0, p = 0;

    for (int i = 0; i < 20; i++)
    {
        cin >> linhas[i];
    }

    for ( k = 0; k < 20; k++)
    {
        for ( p = 0; p < 20; p++)
        {
            if (k != p)
            {
                if (linhas[k] == linhas[p])
                {
                    t = false;
                }
            }
        }
        if (t)
        {
            cout << linhas[k] << " ";
        }
        t = true;
    }
    cout << endl;
    return 0;
}
