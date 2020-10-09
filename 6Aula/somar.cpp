/*  programa deve determinar se existem dois elementos em posicoes distintas da lista cuja soma seja exatamente igual a um determinado valor X
    Felipe P Ferreira
    09/10/2020
*/
#include <iostream>
using namespace std;

int main(void)
{
    int n = 0;

    cin >> n;

    int N[n] = {0};
    int X = 0;
    bool t = false;

    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }

    cin >> X;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   if (i != j)
            {
                if ((N[i]+N[j])== X)
                {
                    t = true;
                    break;
                }
            }
        }
    }
    if (t)
    {
        cout << "SIM\n";
    }
    else
    {
        cout << "NAO\n";
    }

    return 0;
}