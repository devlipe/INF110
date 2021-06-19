/*  Programa para fazer o fatorial de um numero
    Felipe P Ferereira
    25/09/2020
*/

#include<iostream>
using namespace std;

int main(void)
{
    int numero = 0, i = 1; // fatorial deve ser iniciado com 1
    long long int  fatorial = 1;

    cin >> numero;
    
    for ( i = 1; i <= numero; i++)
    {
        fatorial = fatorial * i;
    }
    
    cout << fatorial << endl;

    return 0;
}
