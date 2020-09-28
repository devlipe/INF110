/*  Programa para imprimir todos os numeros primos de 1 a n 
    Felipe P Ferreira
    28/09/2020
*/
#include <iostream>
using namespace std;

int main(void)
{
    int n = 0, i = 0, div = 0, j = 0;
    
    cin >> n;

    for ( i = 1; i <= n; i++)
    {
        div = 0;
        for (j = 1; j <= i; j++)
        {
            if (i%j == 0)
            {
                div++;
            }
        }
        if (div == 2)
        {
            cout  << i << " ";
        }
    }
    
    return 0;
}
