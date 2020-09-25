/*  Programa para mostrar os numeros pares de 1 ate n
    Felipe P Ferreira
    24/09/2020
*/

#include <iostream>
using namespace std;

int main(void)
{
    int a = 0, b = 0;

    cin >> a >> b;

    for (; a <= b ; a++)
    {
        if (a%2==0)
        {
            cout << a << endl;
        }
    }
    
    return 0;
}
