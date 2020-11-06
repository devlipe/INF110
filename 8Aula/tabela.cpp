/*  programa para converter a tabela de seu colega para o formato desejado pela empresa
    Felipe P Ferreira   
    06/11/2020
*/

#include <iostream>
using namespace std;

int main()
{
    int F = 0, D = 0;
    cin >> D >> F;
    int matriz[D][F] = {0};

    for (int i = 0; i < D; i++)
    {
        for (int j = 0; j < F; j++)
        {
            cin >> matriz[i][j];
        }
    }
    
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < D; j++)
        {
            cout << matriz[j][i];
            if (j != D-1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}