/*  Programa para gerar uma lista de numeros primos
    Felipe P Ferreira
    30/10/2020
*/

#include <iostream>
using namespace std;

bool eh_primo (int n)
{
    bool t  = false;
    int div = 0;

    for (int i = 1; i <= n/2 ; i++)
    {
        if (n%i == 0)
        {
            div++;
        }

    }
    if (div == 1)
    {
        t = true;
    }
    
    return t;
}

int main()
{
    int a, b;

    cin >> a >> b;
    cout << "Primos entre " << a << " e " << b << ":";

    for(int i = a; i <= b; i++)
    {
        if (eh_primo(i)) //Se for primo
        {
            cout << " " << i; //imprime o valor
        }
    }
    cout << endl;

    return 0;
}
