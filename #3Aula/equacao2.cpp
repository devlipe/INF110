/*  Programa que calcule as raizes de uma equacao de segundo grau, se houver.
    Felipe P Ferreira
    18/09/2020
*/
#include <iomanip>
#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    double a = 0, b = 0, c = 0, delta = 0, x1 = 0, x2 = 0; // inicializando as variaveis
    
    cin >> a >> b >> c ;

    delta = (b * b) - (4 * a * c);

    if (delta < 0)
    {
        cout << "Nao ha raiz real\n";
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        cout << fixed << setprecision(2) << x1 << endl;
    }
    else
    {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);

        cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
    }
    
    return 0;
}
