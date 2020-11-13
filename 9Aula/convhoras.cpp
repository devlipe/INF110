/*  programa que leia um valor inteiro representando o tempo em segundos de um determinado evento e informe-o expresso no formato horas:minutos:segundos
    Felipe P Ferreria
    11/13/2020
*/

#include <iostream>
#include <iomanip>
using namespace std;

void convhoras(int seg, int &h, int &m, int &s)
{
    s = seg % 60;
    m = seg / 60;
    h = m /60;
    m = m %60;
}

int main()
{
    int seg = 0, s = 0, m = 0, h = 0;
    
    cin >> seg;
    convhoras(seg, h, m, s);
    if (h <= 9)
    {
        cout << "0" << h << ":";
    }
    else
    {
        cout << h << ":";
    }
    if (m <= 9)
    {
        cout << "0" << m << ":";
    }
    else
    {
        cout << m << ":";
    }
        if (s <= 9)
    {
        cout << "0" << s << endl;
    }
    else
    {
        cout << s << endl;
    }
    
    return 0;
}
