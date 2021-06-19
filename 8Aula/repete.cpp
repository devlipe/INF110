/*  determinar se ha um elemento repetido dentro de cada lista
    Felipe P Ferreira
    11/06/2020
*/

#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N = 0;
        cin >> N;
        int a[N] = {0};
        bool v = false;
        int guarda = 0;

        for (int k = 0; k < N; k++)
        {
            cin >> a[k];
        }

        for (int  j = 0; j < N; j++)
        {
            for (int p = j+1; p < N; p++)
            {
                if (a[j] == a[p])
                {
                    v = true;
                    guarda = a[j];
                }
                
            }
        }
        if (v)
        {
            cout << "SIM: " << guarda << endl;
        }
        else
        {
            cout << "NAO\n";
        }
    }
    
    return 0;
}
