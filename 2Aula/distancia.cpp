/*  Programa para calcular distancia entre rotas
    Felipe Pereira Ferreira
    11/09/2020
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(void) 
{
    double a = 0, b = 0 , c = 0, d = 0, e = 0, f = 0;
    double resultado = 0; // declarando e iniciando as variaveis

    cin >> a >> b >> c >> d; // pedindo as variaveis

    if (c > a)
    {
     e = a - c;
    } else
    {
        e = c - a;
    }
    if (b > d)
    {
        f = b - d;
    } else
    {
        f = d - b;
    }
    
    resultado = sqrt ((e * e) + (f * f));

    cout << fixed << setprecision(2) << resultado << endl; // mostrando resultados

    return 0;
}