/*  Programa para mostrar os numeros pares de 1 ate n
    Felipe P Ferreira
    24/09/2020
*/

#include <iostream>
using namespace std;

int main(void)
{
    int n = 0, i = 0;

    cin >> n;

    for ( i = 1; i <= n ; i++)
    {
        if (i%2==0)
        {
            cout << i << endl;
        }
    }
    
    return 0;
}
