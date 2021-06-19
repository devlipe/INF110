/*  Funcao que retorna se um numero e primo ou nao
    Felipe P Ferreira
    26/10/2020
*/

#include<iostream>
using namespace std;

bool primo(int numero, bool t)
{
    int div = 0;

    for (int i = 1; i <= numero/2 ; i++)
    {
        if (numero%i == 0)
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
    int numero = 0;
    bool t = false;

    cin >> numero;
    t = primo(numero, t);

    cout << t;

    return 0;
}