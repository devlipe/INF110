/*  Programa para calcular o roubo de renda
    Felipe P Ferreira
    30/10/2020
*/

#include<iostream>
#include<iomanip>
using namespace std;

double imposto (double v)
{
    double roubo = 0.0;

    if (v <= 22487.76)
    {
        return roubo;
    }
    else if (22487.77 <= v && v <= 33919.80)
    {
        roubo = (v * 0.075) - 1713.58;

        return roubo;
    }
    else if (33919.81<= v && v <= 45012.60)
    {
        roubo = (v * 0.15) - 4257.57;

        return roubo;
    }
    else if (45012.61<= v && v <= 55976.16)
    {
        roubo = (v * 0.225) - 7633.51;

        return roubo;
    }
    else if (55976.16 < v)
    {
        roubo = (v * 0.275) - 10432.32;

        return roubo;
    }
    return 0.0;
}

int main()
{
    double valor = 0.0;
    int i = 0;

    while (true)
    {
        cin >> valor;

        if (valor == 0)
        {
            break;
        }
        cout << fixed << setprecision(2);
        cout << "R$ " << imposto(valor) << endl;
    }
    
    return 0;
}
