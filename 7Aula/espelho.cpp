/*  Programa para verificar se dois numeros inteiros de 4 dıgitos sao espelhos entre si.
    Felipe P Ferreira 
    30/10/2020
*/

#include <iostream>
using namespace std;

int espelhar (int n)
{
    int unidade = 0, dezena = 0, centena = 0, milhar = 0, resto = 0;
    int numero = 0;

    unidade = n/1000;
    resto = n%1000;
    dezena = resto/100;
    resto = resto%100;
    centena = resto/10;
    resto = resto%10;
    milhar = resto;   

    numero = (milhar*1000) + (centena * 100) + (dezena *10) + unidade;

    return numero;
}

int main()
{
    int a = 0;
    int b = 0;
    int i = 0;

    while (true)
    {
        cin >> a >> b;

        if (a == 0)
        {
            break;
        }
        if (a == espelhar(b))
        {
            cout << "espelho\n";
        }
        else
        {
            cout << "nao espelho\n";
        }
    }
    return 0;
}
