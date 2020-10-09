/*  Programa para inverter uma sequencia de numeros
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
    

    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    
    for (int i = (n-1); i >= 0; i--)
    {
        cout << N[i];
        if (i != 0)
        {
            cout << " ";
        }
        
    }
    cout << "\n";

    return 0;
}
    