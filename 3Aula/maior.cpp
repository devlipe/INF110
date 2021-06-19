/*  Programa para determinar o maior valor entre tres numeros inteiros
    Felipe P Ferreira
    18/09/2020
*/
#include<iostream>
using namespace std;

int main(void)
{
    int a = 0, b = 0, c = 0;
    
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << b << endl;
    }
    else
    {
        cout << c << endl;
    }    
    return 0;
}
