/*  Programa para mostrar se um numero e primo
    Felipe P Ferreira
    25/09/2020
*/

#include <iostream>
using namespace std;

int main(void)
{
    int numero = 0, i = 0, div = 0 ;

    cin >> numero;

    for ( i = 1; i <= numero ; i++)
    {
        if (numero%i == 0)
        {
            div++;
        }

    }
    if (div == 2)
    {
        cout << "Primo.\n";
    }
    else
    {
        cout << "Nao primo.\n";
    }
    
    return 0;
}
