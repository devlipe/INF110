/*  Faca um programa que calcule a(s) raız(es) de uma equacao de segundo grau
    Felipe P Ferreira
    13/11/2020
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Retorna o numero de raızes reais de uma eq. do 2◦ grau de coeficientes a b c
//Retorna as raızes por referencia em x1 e x2
int eq2grau(double a, double b, double c, double &x1, double &x2)
{
    double delta;

    delta = (b * b) - (4 * a * c);
    cout << delta;
    
    if (delta < 0)
    {
        return 0;
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        return 1;
    }
    else
    {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);

        return 2;
    }
}

int main()
{
    double a = 0.0, b = 0.0, c = 0.0, x1 = 0.0, x2 = 0.0;
    int t = 0;

    cin >> a >> b >> c;

    t = eq2grau(a, b, c , x1, x2);

    if (t == 2)
    {
        cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
    }
    else if (t == 1)
    {
        cout << fixed << setprecision(2) << x1 << endl;
    }
    else
    {
        cout << "Nao ha raiz real\n";
    }
    return 0;
}
