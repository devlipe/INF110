/*  Programa que retorna a soma dos digitos de um numero natural
    Felipe P Ferreira
    20/11/2020
*/
#include <iostream>
using namespace std;

int soma(int n)
{
    if (n==0)
    {
        return 0;
    }
    return (n % 10 + soma (n/10));    
}

int main()
{
    int numero = 0;

    cin >> numero;
    cout << soma(numero) << endl;
    return 0;
}
