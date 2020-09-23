/*  Programa para realizar conversoes de temperatura
    Felipe P Ferreira
    18/09/2020
*/
#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    double T = 0, resultado = 0;
    char E = 0;

    cin >> T >> E;

    if (E == 'C')
    {
        resultado = (T * 1.8) + 32;

        cout << fixed << setprecision(1) << resultado << " F\n";
    }
    else if (E == 'F')
    {
        resultado = (T - 32) / 1.8;

        cout << fixed << setprecision(1) << resultado << " C\n";
    }
    else
    {
        cout << "Wrong Format\n";
    }
     
    return 0;
}
