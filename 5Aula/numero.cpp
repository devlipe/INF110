/*  Ler um lista de n numeros e mostrar quais numeros nao aparecem
    Felipe P Ferreira
    05/10/2020
*/
#include <iostream>
using namespace std;

int main(void)
{
    int n = 0; 
    bool c = true;
    cin >> n;
    int numeros[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> numeros[i];
    }
    for (int j = 1 ; j <= n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (numeros[i] == j)
            {
                c = false;
            }
        }
        if (c)
        {
            cout << j << "\t";
        }
        c = true;
    }
    
    return 0;
}
